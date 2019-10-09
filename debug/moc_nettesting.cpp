/****************************************************************************
** Meta object code from reading C++ file 'nettesting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nettesting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nettesting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetTesting_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetTesting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetTesting_t qt_meta_stringdata_NetTesting = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NetTesting"
QT_MOC_LITERAL(1, 11, 21), // "sender_network_result"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "quality"
QT_MOC_LITERAL(4, 42, 19), // "LastmileProbeResult"
QT_MOC_LITERAL(5, 62, 2), // "lr"
QT_MOC_LITERAL(6, 65, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(7, 85, 18), // "on_btn_min_clicked"
QT_MOC_LITERAL(8, 104, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(9, 125, 23), // "receive_lastmileQuality"
QT_MOC_LITERAL(10, 149, 27), // "receive_lastmileProbeResult"
QT_MOC_LITERAL(11, 177, 6) // "result"

    },
    "NetTesting\0sender_network_result\0\0"
    "quality\0LastmileProbeResult\0lr\0"
    "on_btn_back_clicked\0on_btn_min_clicked\0"
    "on_btn_close_clicked\0receive_lastmileQuality\0"
    "receive_lastmileProbeResult\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetTesting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 4,   11,

       0        // eod
};

void NetTesting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetTesting *_t = static_cast<NetTesting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sender_network_result((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const LastmileProbeResult(*)>(_a[2]))); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->on_btn_min_clicked(); break;
        case 3: _t->on_btn_close_clicked(); break;
        case 4: _t->receive_lastmileQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->receive_lastmileProbeResult((*reinterpret_cast< const LastmileProbeResult(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetTesting::*_t)(int , const LastmileProbeResult & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetTesting::sender_network_result)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NetTesting::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NetTesting.data,
      qt_meta_data_NetTesting,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetTesting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetTesting::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetTesting.stringdata0))
        return static_cast<void*>(const_cast< NetTesting*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NetTesting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NetTesting::sender_network_result(int _t1, const LastmileProbeResult & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
