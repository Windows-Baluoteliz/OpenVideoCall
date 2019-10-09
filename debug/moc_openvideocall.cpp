/****************************************************************************
** Meta object code from reading C++ file 'openvideocall.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../openvideocall.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openvideocall.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenVideoCall_t {
    QByteArrayData data[10];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenVideoCall_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenVideoCall_t qt_meta_stringdata_OpenVideoCall = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OpenVideoCall"
QT_MOC_LITERAL(1, 14, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "on_btn_min_clicked"
QT_MOC_LITERAL(4, 55, 21), // "on_btn_config_clicked"
QT_MOC_LITERAL(5, 77, 28), // "on_led_classid_returnPressed"
QT_MOC_LITERAL(6, 106, 27), // "on_btn_test_network_clicked"
QT_MOC_LITERAL(7, 134, 19), // "on_btn_join_clicked"
QT_MOC_LITERAL(8, 154, 33), // "on_com_encryp_currentIndexCha..."
QT_MOC_LITERAL(9, 188, 4) // "arg1"

    },
    "OpenVideoCall\0on_btn_close_clicked\0\0"
    "on_btn_min_clicked\0on_btn_config_clicked\0"
    "on_led_classid_returnPressed\0"
    "on_btn_test_network_clicked\0"
    "on_btn_join_clicked\0"
    "on_com_encryp_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenVideoCall[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void OpenVideoCall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenVideoCall *_t = static_cast<OpenVideoCall *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_close_clicked(); break;
        case 1: _t->on_btn_min_clicked(); break;
        case 2: _t->on_btn_config_clicked(); break;
        case 3: _t->on_led_classid_returnPressed(); break;
        case 4: _t->on_btn_test_network_clicked(); break;
        case 5: _t->on_btn_join_clicked(); break;
        case 6: _t->on_com_encryp_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OpenVideoCall::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_OpenVideoCall.data,
      qt_meta_data_OpenVideoCall,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenVideoCall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenVideoCall::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenVideoCall.stringdata0))
        return static_cast<void*>(const_cast< OpenVideoCall*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int OpenVideoCall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
