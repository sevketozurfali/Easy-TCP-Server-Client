/********************************************************************************
** Form generated from reading UI file 'tcp_server.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_SERVER_H
#define UI_TCP_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcp_server
{
public:
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget;
    QWidget *server_tab;
    QGridLayout *gridLayout_7;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *line_serverip;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *line_server_port;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_start_server;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_stop_server;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_con_status;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_serv_status;
    QSpacerItem *horizontalSpacer_8;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QTextBrowser *messages;
    QLineEdit *line_message;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_message_send;
    QSpacerItem *horizontalSpacer_9;
    QWidget *client_tab;
    QGridLayout *gridLayout_6;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lbl_client_con_status;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_6;
    QLineEdit *line_client_ip;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_7;
    QLineEdit *line_client_port;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *btn_client_connect;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *btn_client_disconnect;
    QSpacerItem *horizontalSpacer_20;
    QFrame *frame_4;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_24;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QTextBrowser *client_messages;
    QLineEdit *line_client_message;
    QSpacerItem *horizontalSpacer_27;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_client_send;
    QSpacerItem *horizontalSpacer_28;

    void setupUi(QWidget *tcp_server)
    {
        if (tcp_server->objectName().isEmpty())
            tcp_server->setObjectName(QStringLiteral("tcp_server"));
        tcp_server->resize(1159, 696);
        tcp_server->setStyleSheet(QStringLiteral(""));
        gridLayout_8 = new QGridLayout(tcp_server);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(tcp_server);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        server_tab = new QWidget();
        server_tab->setObjectName(QStringLiteral("server_tab"));
        server_tab->setStyleSheet(QStringLiteral(""));
        gridLayout_7 = new QGridLayout(server_tab);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(server_tab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"border : 0px;\n"
"background-color: rgb(46, 52, 54);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 10, 0, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayout->addWidget(label);

        line_serverip = new QLineEdit(frame);
        line_serverip->setObjectName(QStringLiteral("line_serverip"));
        line_serverip->setFont(font);

        horizontalLayout->addWidget(line_serverip);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("color:white;\n"
""));

        horizontalLayout->addWidget(label_2);

        line_server_port = new QLineEdit(frame);
        line_server_port->setObjectName(QStringLiteral("line_server_port"));
        line_server_port->setFont(font);

        horizontalLayout->addWidget(line_server_port);

        horizontalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_start_server = new QPushButton(frame);
        btn_start_server->setObjectName(QStringLiteral("btn_start_server"));
        btn_start_server->setFont(font);
        btn_start_server->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));

        horizontalLayout->addWidget(btn_start_server);

        horizontalSpacer_5 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btn_stop_server = new QPushButton(frame);
        btn_stop_server->setObjectName(QStringLiteral("btn_stop_server"));
        btn_stop_server->setFont(font);
        btn_stop_server->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));

        horizontalLayout->addWidget(btn_stop_server);

        horizontalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        lbl_con_status = new QLabel(frame);
        lbl_con_status->setObjectName(QStringLiteral("lbl_con_status"));
        QFont font1;
        font1.setPointSize(12);
        lbl_con_status->setFont(font1);
        lbl_con_status->setLayoutDirection(Qt::LeftToRight);
        lbl_con_status->setStyleSheet(QLatin1String("color:white;\n"
""));
        lbl_con_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lbl_con_status);

        horizontalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color: rgb(252, 233, 79);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        lbl_serv_status = new QLabel(frame);
        lbl_serv_status->setObjectName(QStringLiteral("lbl_serv_status"));
        lbl_serv_status->setFont(font1);
        lbl_serv_status->setLayoutDirection(Qt::LeftToRight);
        lbl_serv_status->setStyleSheet(QStringLiteral("color:white;"));
        lbl_serv_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lbl_serv_status);

        horizontalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        gridLayout_7->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(server_tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String("#frame_2{\n"
"border : 0px;\n"
"	background-color: rgb(46, 52, 54);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 5, -1, 10);
        horizontalSpacer_12 = new QSpacerItem(13, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setPointSize(13);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color:white;"));

        verticalLayout->addWidget(label_4);

        messages = new QTextBrowser(frame_2);
        messages->setObjectName(QStringLiteral("messages"));
        messages->setFont(font);

        verticalLayout->addWidget(messages);

        line_message = new QLineEdit(frame_2);
        line_message->setObjectName(QStringLiteral("line_message"));
        line_message->setFont(font);

        verticalLayout->addWidget(line_message);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_10 = new QSpacerItem(13, 56, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        btn_message_send = new QPushButton(frame_2);
        btn_message_send->setObjectName(QStringLiteral("btn_message_send"));
        btn_message_send->setMinimumSize(QSize(93, 0));
        btn_message_send->setFont(font);
        btn_message_send->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));

        gridLayout->addWidget(btn_message_send, 1, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalSpacer_9 = new QSpacerItem(20, 56, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_2, 1, 0, 1, 1);

        tabWidget->addTab(server_tab, QString());
        client_tab = new QWidget();
        client_tab->setObjectName(QStringLiteral("client_tab"));
        gridLayout_6 = new QGridLayout(client_tab);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(client_tab);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QLatin1String("#frame_3{\n"
"border : 0px;\n"
"	background-color: rgb(46, 52, 54);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(0, 10, 0, 10);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        lbl_client_con_status = new QLabel(frame_3);
        lbl_client_con_status->setObjectName(QStringLiteral("lbl_client_con_status"));
        lbl_client_con_status->setFont(font1);
        lbl_client_con_status->setLayoutDirection(Qt::LeftToRight);
        lbl_client_con_status->setStyleSheet(QStringLiteral("color:white;"));
        lbl_client_con_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(lbl_client_con_status);

        horizontalSpacer_22 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        gridLayout_3->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("color: rgb(252, 233, 79);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_5);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_15 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font4;
        font4.setPointSize(11);
        font4.setUnderline(false);
        font4.setKerning(true);
        label_6->setFont(font4);
        label_6->setStyleSheet(QLatin1String("color:white;\n"
""));

        horizontalLayout_8->addWidget(label_6);

        line_client_ip = new QLineEdit(frame_3);
        line_client_ip->setObjectName(QStringLiteral("line_client_ip"));
        line_client_ip->setFont(font);

        horizontalLayout_8->addWidget(line_client_ip);

        horizontalSpacer_16 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font5;
        font5.setPointSize(11);
        font5.setUnderline(false);
        label_7->setFont(font5);
        label_7->setStyleSheet(QLatin1String("color:white;\n"
""));

        horizontalLayout_8->addWidget(label_7);

        line_client_port = new QLineEdit(frame_3);
        line_client_port->setObjectName(QStringLiteral("line_client_port"));
        line_client_port->setFont(font);

        horizontalLayout_8->addWidget(line_client_port);

        horizontalSpacer_17 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        btn_client_connect = new QPushButton(frame_3);
        btn_client_connect->setObjectName(QStringLiteral("btn_client_connect"));
        btn_client_connect->setFont(font);
        btn_client_connect->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));

        horizontalLayout_8->addWidget(btn_client_connect);

        horizontalSpacer_18 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        btn_client_disconnect = new QPushButton(frame_3);
        btn_client_disconnect->setObjectName(QStringLiteral("btn_client_disconnect"));
        btn_client_disconnect->setFont(font);
        btn_client_disconnect->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));

        horizontalLayout_8->addWidget(btn_client_disconnect);

        horizontalSpacer_20 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);


        gridLayout_3->addLayout(horizontalLayout_8, 1, 0, 1, 1);


        gridLayout_6->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(client_tab);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QLatin1String("#frame_4{\n"
"border : 0px;\n"
"	background-color: rgb(46, 52, 54);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_4);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 5, -1, 10);
        horizontalSpacer_24 = new QSpacerItem(13, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_24);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QStringLiteral("color:white;"));

        verticalLayout_2->addWidget(label_8);

        client_messages = new QTextBrowser(frame_4);
        client_messages->setObjectName(QStringLiteral("client_messages"));
        client_messages->setFont(font);

        verticalLayout_2->addWidget(client_messages);

        line_client_message = new QLineEdit(frame_4);
        line_client_message->setObjectName(QStringLiteral("line_client_message"));
        line_client_message->setFont(font);

        verticalLayout_2->addWidget(line_client_message);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_27 = new QSpacerItem(13, 56, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_27);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        btn_client_send = new QPushButton(frame_4);
        btn_client_send->setObjectName(QStringLiteral("btn_client_send"));
        btn_client_send->setMinimumSize(QSize(93, 0));
        btn_client_send->setFont(font);
        btn_client_send->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
"\n"
""));

        verticalLayout_3->addWidget(btn_client_send);


        horizontalLayout_6->addLayout(verticalLayout_3);

        horizontalSpacer_28 = new QSpacerItem(20, 56, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_28);


        gridLayout_5->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_4, 1, 0, 1, 1);

        tabWidget->addTab(client_tab, QString());

        gridLayout_8->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(tcp_server);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tcp_server);
    } // setupUi

    void retranslateUi(QWidget *tcp_server)
    {
        tcp_server->setWindowTitle(QApplication::translate("tcp_server", "tcp_server", nullptr));
        label->setText(QApplication::translate("tcp_server", "IP Address : ", nullptr));
        label_2->setText(QApplication::translate("tcp_server", "Port : ", nullptr));
        line_server_port->setText(QString());
        btn_start_server->setText(QApplication::translate("tcp_server", "Start Server", nullptr));
        btn_stop_server->setText(QApplication::translate("tcp_server", "Stop Server", nullptr));
        lbl_con_status->setText(QApplication::translate("tcp_server", "Not Connected", nullptr));
        label_3->setText(QApplication::translate("tcp_server", "Server Configuration", nullptr));
        lbl_serv_status->setText(QApplication::translate("tcp_server", "Server Stopped", nullptr));
        label_4->setText(QApplication::translate("tcp_server", "Data from client :", nullptr));
        btn_message_send->setText(QApplication::translate("tcp_server", "Send", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(server_tab), QApplication::translate("tcp_server", "Tab 1", nullptr));
        lbl_client_con_status->setText(QApplication::translate("tcp_server", "Not Connected", nullptr));
        label_5->setText(QApplication::translate("tcp_server", "Client Configuration", nullptr));
        label_6->setText(QApplication::translate("tcp_server", "IP Address : ", nullptr));
        label_7->setText(QApplication::translate("tcp_server", "Port : ", nullptr));
        line_client_port->setText(QString());
        btn_client_connect->setText(QApplication::translate("tcp_server", "Connect", nullptr));
        btn_client_disconnect->setText(QApplication::translate("tcp_server", "Disconnect", nullptr));
        label_8->setText(QApplication::translate("tcp_server", "Data from server :", nullptr));
        btn_client_send->setText(QApplication::translate("tcp_server", "Send", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(client_tab), QApplication::translate("tcp_server", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tcp_server: public Ui_tcp_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_SERVER_H
