/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "accepted",
    "",
    "currentLogin",
    "Login",
    "ListUser",
    "mode",
    "ListSendMessag",
    "requestd_Authorization",
    "login",
    "pass",
    "request_checkExistens",
    "request",
    "requestRegistrationUser",
    "requestListUser",
    "requestSendMessage",
    "requestListSendMessag",
    "requestCloseUser",
    "requestExist",
    "slotReadSocket",
    "disardSocket",
    "sendMessageServer",
    "QTcpSocket*",
    "socket",
    "str_msg",
    "updateListUser"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[6];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[15];
    char stringdata8[23];
    char stringdata9[6];
    char stringdata10[5];
    char stringdata11[22];
    char stringdata12[8];
    char stringdata13[24];
    char stringdata14[16];
    char stringdata15[19];
    char stringdata16[22];
    char stringdata17[17];
    char stringdata18[13];
    char stringdata19[15];
    char stringdata20[13];
    char stringdata21[18];
    char stringdata22[12];
    char stringdata23[7];
    char stringdata24[8];
    char stringdata25[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 8),  // "accepted"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 12),  // "currentLogin"
        QT_MOC_LITERAL(34, 5),  // "Login"
        QT_MOC_LITERAL(40, 8),  // "ListUser"
        QT_MOC_LITERAL(49, 4),  // "mode"
        QT_MOC_LITERAL(54, 14),  // "ListSendMessag"
        QT_MOC_LITERAL(69, 22),  // "requestd_Authorization"
        QT_MOC_LITERAL(92, 5),  // "login"
        QT_MOC_LITERAL(98, 4),  // "pass"
        QT_MOC_LITERAL(103, 21),  // "request_checkExistens"
        QT_MOC_LITERAL(125, 7),  // "request"
        QT_MOC_LITERAL(133, 23),  // "requestRegistrationUser"
        QT_MOC_LITERAL(157, 15),  // "requestListUser"
        QT_MOC_LITERAL(173, 18),  // "requestSendMessage"
        QT_MOC_LITERAL(192, 21),  // "requestListSendMessag"
        QT_MOC_LITERAL(214, 16),  // "requestCloseUser"
        QT_MOC_LITERAL(231, 12),  // "requestExist"
        QT_MOC_LITERAL(244, 14),  // "slotReadSocket"
        QT_MOC_LITERAL(259, 12),  // "disardSocket"
        QT_MOC_LITERAL(272, 17),  // "sendMessageServer"
        QT_MOC_LITERAL(290, 11),  // "QTcpSocket*"
        QT_MOC_LITERAL(302, 6),  // "socket"
        QT_MOC_LITERAL(309, 7),  // "str_msg"
        QT_MOC_LITERAL(317, 14)   // "updateListUser"
    },
    "MainWindow",
    "accepted",
    "",
    "currentLogin",
    "Login",
    "ListUser",
    "mode",
    "ListSendMessag",
    "requestd_Authorization",
    "login",
    "pass",
    "request_checkExistens",
    "request",
    "requestRegistrationUser",
    "requestListUser",
    "requestSendMessage",
    "requestListSendMessag",
    "requestCloseUser",
    "requestExist",
    "slotReadSocket",
    "disardSocket",
    "sendMessageServer",
    "QTcpSocket*",
    "socket",
    "str_msg",
    "updateListUser"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    1 /* Public */,
       3,    1,  111,    2, 0x06,    2 /* Public */,
       5,    1,  114,    2, 0x06,    4 /* Public */,
       7,    1,  117,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,  120,    2, 0x0a,    8 /* Public */,
      11,    1,  125,    2, 0x0a,   11 /* Public */,
      13,    1,  128,    2, 0x0a,   13 /* Public */,
      14,    1,  131,    2, 0x0a,   15 /* Public */,
      15,    1,  134,    2, 0x0a,   17 /* Public */,
      16,    1,  137,    2, 0x0a,   19 /* Public */,
      17,    1,  140,    2, 0x0a,   21 /* Public */,
      18,    0,  143,    2, 0x0a,   23 /* Public */,
      19,    0,  144,    2, 0x08,   24 /* Private */,
      20,    0,  145,    2, 0x08,   25 /* Private */,
      21,    2,  146,    2, 0x08,   26 /* Private */,
      25,    0,  151,    2, 0x08,   29 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,   24,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ListUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ListSendMessag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestd_Authorization'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'request_checkExistens'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestRegistrationUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestListUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestListSendMessag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestCloseUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'requestExist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotReadSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disardSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendMessageServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTcpSocket *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateListUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->currentLogin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->ListUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->ListSendMessag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->requestd_Authorization((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->request_checkExistens((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->requestRegistrationUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->requestListUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->requestSendMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->requestListSendMessag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->requestCloseUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->requestExist(); break;
        case 12: _t->slotReadSocket(); break;
        case 13: _t->disardSocket(); break;
        case 14: _t->sendMessageServer((*reinterpret_cast< std::add_pointer_t<QTcpSocket*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->updateListUser(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::accepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::currentLogin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::ListUser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::ListSendMessag; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MainWindow::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::currentLogin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::ListUser(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::ListSendMessag(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
