#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QProcess>
#include <QKeyEvent>
#include <QAbstractSocket>
#include <QStyleFactory>

QT_BEGIN_NAMESPACE
namespace Ui { class tcp_server; }
QT_END_NAMESPACE

class tcp_server : public QWidget
{
    Q_OBJECT

public:
    tcp_server(QWidget *parent = nullptr);
    ~tcp_server();

public slots:

    void onNewConnection();
    void onSocketStateChanged(QAbstractSocket::SocketState socketState);
    void onReadyRead();
    void onReadyClientRead();

private slots:
    void disconnections();

    void connections();

    void initialization();

    void on_btn_stop_server_clicked();

    void print_to_screen_comes_data(QByteArray comes_data);

    void changeEvent(QEvent *) override;

    void on_btn_start_server_clicked();

    void on_btn_message_send_clicked();



    void onClientSocketStateChanged(QAbstractSocket::SocketState clientsocketState);

    void on_btn_client_connect_clicked();

    void on_btn_client_disconnect_clicked();

    void on_btn_client_send_clicked();

private:
    Ui::tcp_server *ui;
    QTcpServer _server;
    QList<QTcpSocket*> _sockets;

    QString server_ip;
    int server_port;

    QString client_ip;

    QTcpSocket* _socket;
//    QTcpSocket *soc;
    QString serverip;
    int port;

    QProcess process;
protected:
    void keyPressEvent(QKeyEvent *event) override;
};
#endif // TCP_SERVER_H
