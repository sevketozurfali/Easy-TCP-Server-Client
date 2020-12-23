/****************************************************************************
** Meta object code from reading C++ file 'tcp_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Easy-TCP-Server-Client/tcp_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tcp_server_t {
    QByteArrayData data[23];
    char stringdata0[438];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tcp_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tcp_server_t qt_meta_stringdata_tcp_server = {
    {
QT_MOC_LITERAL(0, 0, 10), // "tcp_server"
QT_MOC_LITERAL(1, 11, 15), // "onNewConnection"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "onSocketStateChanged"
QT_MOC_LITERAL(4, 49, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(5, 78, 11), // "socketState"
QT_MOC_LITERAL(6, 90, 11), // "onReadyRead"
QT_MOC_LITERAL(7, 102, 17), // "onReadyClientRead"
QT_MOC_LITERAL(8, 120, 14), // "disconnections"
QT_MOC_LITERAL(9, 135, 11), // "connections"
QT_MOC_LITERAL(10, 147, 14), // "initialization"
QT_MOC_LITERAL(11, 162, 26), // "on_btn_stop_server_clicked"
QT_MOC_LITERAL(12, 189, 26), // "print_to_screen_comes_data"
QT_MOC_LITERAL(13, 216, 10), // "comes_data"
QT_MOC_LITERAL(14, 227, 11), // "changeEvent"
QT_MOC_LITERAL(15, 239, 7), // "QEvent*"
QT_MOC_LITERAL(16, 247, 27), // "on_btn_start_server_clicked"
QT_MOC_LITERAL(17, 275, 27), // "on_btn_message_send_clicked"
QT_MOC_LITERAL(18, 303, 26), // "onClientSocketStateChanged"
QT_MOC_LITERAL(19, 330, 17), // "clientsocketState"
QT_MOC_LITERAL(20, 348, 29), // "on_btn_client_connect_clicked"
QT_MOC_LITERAL(21, 378, 32), // "on_btn_client_disconnect_clicked"
QT_MOC_LITERAL(22, 411, 26) // "on_btn_client_send_clicked"

    },
    "tcp_server\0onNewConnection\0\0"
    "onSocketStateChanged\0QAbstractSocket::SocketState\0"
    "socketState\0onReadyRead\0onReadyClientRead\0"
    "disconnections\0connections\0initialization\0"
    "on_btn_stop_server_clicked\0"
    "print_to_screen_comes_data\0comes_data\0"
    "changeEvent\0QEvent*\0on_btn_start_server_clicked\0"
    "on_btn_message_send_clicked\0"
    "onClientSocketStateChanged\0clientsocketState\0"
    "on_btn_client_connect_clicked\0"
    "on_btn_client_disconnect_clicked\0"
    "on_btn_client_send_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tcp_server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    1,   95,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      14,    1,  107,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,
      21,    0,  116,    2, 0x08 /* Private */,
      22,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tcp_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tcp_server *_t = static_cast<tcp_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNewConnection(); break;
        case 1: _t->onSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 2: _t->onReadyRead(); break;
        case 3: _t->onReadyClientRead(); break;
        case 4: _t->disconnections(); break;
        case 5: _t->connections(); break;
        case 6: _t->initialization(); break;
        case 7: _t->on_btn_stop_server_clicked(); break;
        case 8: _t->print_to_screen_comes_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 10: _t->on_btn_start_server_clicked(); break;
        case 11: _t->on_btn_message_send_clicked(); break;
        case 12: _t->onClientSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 13: _t->on_btn_client_connect_clicked(); break;
        case 14: _t->on_btn_client_disconnect_clicked(); break;
        case 15: _t->on_btn_client_send_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tcp_server::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tcp_server.data,
      qt_meta_data_tcp_server,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tcp_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcp_server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tcp_server.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tcp_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
