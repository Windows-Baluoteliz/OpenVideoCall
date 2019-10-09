/****************************************************************************
** Meta object code from reading C++ file 'nettestdetail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nettestdetail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nettestdetail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetTestDetail_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetTestDetail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetTestDetail_t qt_meta_stringdata_NetTestDetail = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetTestDetail"
QT_MOC_LITERAL(1, 14, 23), // "receiver_network_detail"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "quality"
QT_MOC_LITERAL(4, 47, 19), // "LastmileProbeResult"
QT_MOC_LITERAL(5, 67, 2), // "lr"
QT_MOC_LITERAL(6, 70, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(7, 90, 18), // "on_btn_min_clicked"
QT_MOC_LITERAL(8, 109, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(9, 130, 17) // "on_btn_ok_clicked"

    },
    "NetTestDetail\0receiver_network_detail\0"
    "\0quality\0LastmileProbeResult\0lr\0"
    "on_btn_back_clicked\0on_btn_min_clicked\0"
    "on_btn_close_clicked\0on_btn_ok_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetTestDetail[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetTestDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetTestDetail *_t = static_cast<NetTestDetail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiver_network_detail((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const LastmileProbeResult(*)>(_a[2]))); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->on_btn_min_clicked(); break;
        case 3: _t->on_btn_close_clicked(); break;
        case 4: _t->on_btn_ok_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject NetTestDetail::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NetTestDetail.data,
      qt_meta_data_NetTestDetail,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetTestDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetTestDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetTestDetail.stringdata0))
        return static_cast<void*>(const_cast< NetTestDetail*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NetTestDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
