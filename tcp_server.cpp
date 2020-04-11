#include "tcp_server.h"
#include "ui_tcp_server.h"

#include <QString>


tcp_server::tcp_server(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tcp_server)
    ,_server(this)

{
    ui->setupUi(this);

    initialization();
    disconnections();
    connections();
}

tcp_server::~tcp_server()
{
    delete ui;
}

void tcp_server::disconnections()
{
    //server disconnection settings...................................................
    disconnect(&_server, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    //client disconnection settings...................................................
    disconnect(_socket, SIGNAL(readyRead()),this, SLOT(onReadyClientRead()));
    disconnect(_socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(onClientSocketStateChanged(QAbstractSocket::SocketState)));

}

void tcp_server::connections()
{
    //server connection settings.......................................................
    connect(&_server, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    //client connection settings.......................................................
    connect(_socket, SIGNAL(readyRead()),this, SLOT(onReadyClientRead()));
    connect(_socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(onClientSocketStateChanged(QAbstractSocket::SocketState)));
}

void tcp_server::initialization()
{
    QWidget::setWindowTitle("Easy TCP Server/Client");
    //TabWidget server side settings............................................
    ui->tabWidget->setTabText(0,"Server");
    ui->tabWidget->setTabText(1,"Client");
    ui->tabWidget->setCurrentIndex(0);
    ////////////////////////////////////////////////////////////////////////////
    //TabWidget client side settings............................................
    ui->btn_client_send->setEnabled(false);
    ui->line_client_message->setEnabled(false);
    _socket = new QTcpSocket();
    QApplication::setStyle(QStyleFactory::create("macintosh"));
    ui->line_serverip->setFocus();
    ui->line_message->setEnabled(false);
    ui->btn_message_send->setEnabled(false);
}



void tcp_server::onNewConnection()
{
    if(ui->tabWidget->currentIndex() == 0){
        QTcpSocket *clientSocket = _server.nextPendingConnection();
        connect(clientSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
        connect(clientSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(onSocketStateChanged(QAbstractSocket::SocketState)));

        _sockets.push_back(clientSocket);
        for(QTcpSocket *socket : _sockets){
            socket->write(QByteArray::fromStdString(clientSocket->peerAddress().toString().toStdString() + "connected to server!\n"));
            ui->lbl_con_status->setStyleSheet( "QLabel{color : rgb(252, 233, 79); }");
            ui->lbl_con_status->setText("Connected :)");
        }
    }
    else if(ui->tabWidget->currentIndex() == 1){
        ui->client_messages->append("This PC connected to : " + ui->line_serverip->text());
    }
}

void tcp_server::onSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    if(socketState == QAbstractSocket::UnconnectedState){
        ui->lbl_con_status->setStyleSheet("QLabel{ color : white;}");
        ui->lbl_con_status->setText("Not Connected");
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        _sockets.removeOne(sender);
    }
}

void tcp_server::onReadyRead()
{
    QTcpSocket *sender = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray datas = sender->readAll();
    client_ip = sender->peerAddress().toString();
    print_to_screen_comes_data(datas);
    for(QTcpSocket *socket : _sockets){
        if(socket != sender){
            socket->write(QByteArray::fromStdString(sender->peerAddress().toString().toStdString() + "..:.." + datas.toStdString()));
        }
    }
}

void tcp_server::on_btn_start_server_clicked()
{
    server_ip = ui->line_serverip->text();
    server_port = ui->line_server_port->text().toInt();
    if(_server.isListening()){
        qDebug() << "Server already running.";
    }
    if(server_ip != "" || !ui->line_server_port->text().isEmpty()){
    _server.listen(QHostAddress(server_ip), server_port);
    ui->lbl_serv_status->setStyleSheet("QLabel{ color : rgb(252, 233, 79);}");
    ui->lbl_serv_status->setText("Server Started");
    ui->line_serverip->setEnabled(false);
    ui->line_server_port->setEnabled(false);
    ui->line_message->setFocus();
    ui->tabWidget->widget(1)->setDisabled(true);
    }
    else{
        ui->messages->append("Server ip or Port info is empty. Please fill the blanks.");
    }
}


void tcp_server::on_btn_stop_server_clicked()
{
    foreach (QTcpSocket *current_socket, _sockets) {
        current_socket->disconnectFromHost();
    }
    _server.close();
    ui->line_serverip->setEnabled(true);
    ui->line_server_port->setEnabled(true);
    if(_server.isListening()){
        ui->lbl_serv_status->setStyleSheet("QLabel{ color : white;}");
        ui->lbl_serv_status->setText("Closing.....");
    }
    else{
        ui->lbl_serv_status->setStyleSheet("QLabel{ color : white;}");
        ui->lbl_serv_status->setText("Server Stopped");
        ui->tabWidget->widget(1)->setDisabled(false);

    }
}

void tcp_server::print_to_screen_comes_data(QByteArray comes_data)
{
    ui->messages->append("From " + client_ip + " : " + comes_data);
}


void tcp_server::changeEvent(QEvent *)
{
    int tabWidth = (ui->tabWidget->width()/2);
    ui->tabWidget->setStyleSheet(ui->tabWidget->styleSheet() +
                                 "QTabBar::tab {"
                                 "width: " + QString::number(tabWidth) + "px; height: 35px; border : 0}");
    ui->tabWidget->setStyleSheet(ui->tabWidget->styleSheet() +
                                 "QTabBar::tab:selected { background : rgb(252, 233, 79); font-size : 18px; }");

}





void tcp_server::on_btn_message_send_clicked()
{
    for(QTcpSocket *socket : _sockets){
        socket->write(QByteArray::fromStdString(ui->line_message->text().toStdString()));
        ui->messages->append("This PC : " + ui->line_message->text());
        ui->line_message->clear();
        ui->line_message->setFocus();
    }
}




void tcp_server::onReadyClientRead()
{
    QByteArray datas = _socket->readAll();
//    _socket.write(QByteArray(ui->line_server_ip->text().toUtf8() + "Connected from " + ui->line_server_port->text().toUtf8() + " :)\n"));
//    qDebug() << "datas : " + datas;
    ui->client_messages->append("From " + ui->line_client_ip->text() + " : " + datas);
}


void tcp_server::onClientSocketStateChanged(QAbstractSocket::SocketState clientsocketState)
{
    if(clientsocketState == QAbstractSocket::UnconnectedState){
        ui->client_messages->append("Server not found... Please check ip port configuration...");
        ui->line_client_message->setEnabled(false);
        ui->btn_client_send->setEnabled(false);
        ui->lbl_client_con_status->setText("Disconnected");
        ui->lbl_client_con_status->setStyleSheet("QLabel{ color : white;}");
        ui->line_client_ip->setEnabled(true);
        ui->line_client_port->setEnabled(true);
        ui->tabWidget->widget(0)->setDisabled(false);
    }
    else if(clientsocketState == QAbstractSocket::ConnectedState){
        ui->client_messages->append("Connection Ok.");
        ui->lbl_client_con_status->setStyleSheet("QLabel{ color : rgb(252, 233, 79);}");
        ui->lbl_client_con_status->setText("Connected :)");
        ui->line_client_ip->setEnabled(false);
        ui->line_client_port->setEnabled(false);
        ui->line_client_message->setEnabled(true);
        ui->btn_client_send->setEnabled(true);
        _socket->write(QByteArray(ui->line_client_ip->text().toUtf8() + "Connected from " + ui->line_client_port->text().toUtf8() + " :)\n"));
        ui->line_client_message->setFocus();
        ui->tabWidget->widget(0)->setDisabled(true);
    }
    else{
        qDebug() << "Not connected or connected is complicated.";
    }
}

void tcp_server::on_btn_client_connect_clicked()
{

    serverip = ui->line_client_ip->text();
    port = ui->line_client_port->text().toInt();
    _socket->connectToHost(QHostAddress(serverip),port);
    _socket->waitForConnected(3000);

}

void tcp_server::on_btn_client_disconnect_clicked()
{
    _socket->disconnectFromHost();
    _socket->close();
    _socket->waitForDisconnected(1000);
}

void tcp_server::on_btn_client_send_clicked()
{
    QString message = ui->line_client_message->text();
    ui->line_client_message->clear();
    _socket->write(message.toUtf8());
    ui->client_messages->append("This PC : " + message);
    ui->line_client_message->setFocus();
}

void tcp_server::keyPressEvent(QKeyEvent *event)
{
    if(event->text() == "\r"){

        if(ui->tabWidget->currentIndex() == 0){
            on_btn_message_send_clicked();
        }
        else if(ui->tabWidget->currentIndex() == 1){
            on_btn_client_send_clicked();
        }
    }
}
