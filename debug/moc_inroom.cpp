/****************************************************************************
** Meta object code from reading C++ file 'inroom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inroom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inroom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InRoom_t {
    QByteArrayData data[32];
    char stringdata0[476];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InRoom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InRoom_t qt_meta_stringdata_InRoom = {
    {
QT_MOC_LITERAL(0, 0, 6), // "InRoom"
QT_MOC_LITERAL(1, 7, 11), // "joinchannel"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "qsChannelId"
QT_MOC_LITERAL(4, 32, 12), // "qsChannelKey"
QT_MOC_LITERAL(5, 45, 3), // "uid"
QT_MOC_LITERAL(6, 49, 12), // "leavechannel"
QT_MOC_LITERAL(7, 62, 20), // "receive_videoStopped"
QT_MOC_LITERAL(8, 83, 28), // "receive_joinedChannelSuccess"
QT_MOC_LITERAL(9, 112, 9), // "qsChannel"
QT_MOC_LITERAL(10, 122, 7), // "elapsed"
QT_MOC_LITERAL(11, 130, 18), // "receive_userJoined"
QT_MOC_LITERAL(12, 149, 19), // "receive_userOffline"
QT_MOC_LITERAL(13, 169, 24), // "USER_OFFLINE_REASON_TYPE"
QT_MOC_LITERAL(14, 194, 6), // "reason"
QT_MOC_LITERAL(15, 201, 28), // "receive_firstLocalVideoFrame"
QT_MOC_LITERAL(16, 230, 5), // "width"
QT_MOC_LITERAL(17, 236, 6), // "height"
QT_MOC_LITERAL(18, 243, 31), // "receive_firstRemoteVideoDecoded"
QT_MOC_LITERAL(19, 275, 34), // "receive_firstRemoteVideoFrame..."
QT_MOC_LITERAL(20, 310, 23), // "receive_localVideoStats"
QT_MOC_LITERAL(21, 334, 15), // "LocalVideoStats"
QT_MOC_LITERAL(22, 350, 5), // "stats"
QT_MOC_LITERAL(23, 356, 24), // "receive_remoteVideoStats"
QT_MOC_LITERAL(24, 381, 16), // "RemoteVideoStats"
QT_MOC_LITERAL(25, 398, 16), // "receive_rtcStats"
QT_MOC_LITERAL(26, 415, 8), // "RtcStats"
QT_MOC_LITERAL(27, 424, 17), // "receive_timer_pfs"
QT_MOC_LITERAL(28, 442, 11), // "eventFilter"
QT_MOC_LITERAL(29, 454, 7), // "watched"
QT_MOC_LITERAL(30, 462, 7), // "QEvent*"
QT_MOC_LITERAL(31, 470, 5) // "event"

    },
    "InRoom\0joinchannel\0\0qsChannelId\0"
    "qsChannelKey\0uid\0leavechannel\0"
    "receive_videoStopped\0receive_joinedChannelSuccess\0"
    "qsChannel\0elapsed\0receive_userJoined\0"
    "receive_userOffline\0USER_OFFLINE_REASON_TYPE\0"
    "reason\0receive_firstLocalVideoFrame\0"
    "width\0height\0receive_firstRemoteVideoDecoded\0"
    "receive_firstRemoteVideoFrameDrawn\0"
    "receive_localVideoStats\0LocalVideoStats\0"
    "stats\0receive_remoteVideoStats\0"
    "RemoteVideoStats\0receive_rtcStats\0"
    "RtcStats\0receive_timer_pfs\0eventFilter\0"
    "watched\0QEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InRoom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   84,    2, 0x0a /* Public */,
       6,    0,   91,    2, 0x0a /* Public */,
       7,    0,   92,    2, 0x0a /* Public */,
       8,    3,   93,    2, 0x0a /* Public */,
      11,    2,  100,    2, 0x0a /* Public */,
      12,    2,  105,    2, 0x0a /* Public */,
      15,    3,  110,    2, 0x0a /* Public */,
      18,    4,  117,    2, 0x0a /* Public */,
      19,    4,  126,    2, 0x0a /* Public */,
      20,    1,  135,    2, 0x0a /* Public */,
      23,    1,  138,    2, 0x0a /* Public */,
      25,    1,  141,    2, 0x0a /* Public */,
      27,    0,  144,    2, 0x0a /* Public */,
      28,    2,  145,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Int,    9,    5,   10,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    5,   10,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 13,    5,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   16,   17,   10,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   16,   17,   10,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   16,   17,   10,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   22,
    QMetaType::Void, 0x80000000 | 26,   22,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 30,   29,   31,

       0        // eod
};

void InRoom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InRoom *_t = static_cast<InRoom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joinchannel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->leavechannel(); break;
        case 2: _t->receive_videoStopped(); break;
        case 3: _t->receive_joinedChannelSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->receive_userJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->receive_userOffline((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< USER_OFFLINE_REASON_TYPE(*)>(_a[2]))); break;
        case 6: _t->receive_firstLocalVideoFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->receive_firstRemoteVideoDecoded((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->receive_firstRemoteVideoFrameDrawn((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->receive_localVideoStats((*reinterpret_cast< const LocalVideoStats(*)>(_a[1]))); break;
        case 10: _t->receive_remoteVideoStats((*reinterpret_cast< const RemoteVideoStats(*)>(_a[1]))); break;
        case 11: _t->receive_rtcStats((*reinterpret_cast< const RtcStats(*)>(_a[1]))); break;
        case 12: _t->receive_timer_pfs(); break;
        case 13: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject InRoom::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_InRoom.data,
      qt_meta_data_InRoom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InRoom.stringdata0))
        return static_cast<void*>(const_cast< InRoom*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int InRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
