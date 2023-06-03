/****************************************************************************
** Meta object code from reading C++ file 'qcamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcamera_p.h"
#include "../../qcamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCamera_t {
    QByteArrayData data[78];
    char stringdata0[997];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCamera_t qt_meta_stringdata_QCamera = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QCamera"
QT_MOC_LITERAL(1, 8, 12), // "stateChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "QCamera::State"
QT_MOC_LITERAL(4, 37, 18), // "captureModeChanged"
QT_MOC_LITERAL(5, 56, 21), // "QCamera::CaptureModes"
QT_MOC_LITERAL(6, 78, 13), // "statusChanged"
QT_MOC_LITERAL(7, 92, 15), // "QCamera::Status"
QT_MOC_LITERAL(8, 108, 6), // "locked"
QT_MOC_LITERAL(9, 115, 10), // "lockFailed"
QT_MOC_LITERAL(10, 126, 17), // "lockStatusChanged"
QT_MOC_LITERAL(11, 144, 19), // "QCamera::LockStatus"
QT_MOC_LITERAL(12, 164, 25), // "QCamera::LockChangeReason"
QT_MOC_LITERAL(13, 190, 17), // "QCamera::LockType"
QT_MOC_LITERAL(14, 208, 5), // "error"
QT_MOC_LITERAL(15, 214, 14), // "QCamera::Error"
QT_MOC_LITERAL(16, 229, 14), // "setCaptureMode"
QT_MOC_LITERAL(17, 244, 4), // "mode"
QT_MOC_LITERAL(18, 249, 4), // "load"
QT_MOC_LITERAL(19, 254, 6), // "unload"
QT_MOC_LITERAL(20, 261, 5), // "start"
QT_MOC_LITERAL(21, 267, 4), // "stop"
QT_MOC_LITERAL(22, 272, 13), // "searchAndLock"
QT_MOC_LITERAL(23, 286, 6), // "unlock"
QT_MOC_LITERAL(24, 293, 18), // "QCamera::LockTypes"
QT_MOC_LITERAL(25, 312, 5), // "locks"
QT_MOC_LITERAL(26, 318, 24), // "_q_preparePropertyChange"
QT_MOC_LITERAL(27, 343, 16), // "_q_restartCamera"
QT_MOC_LITERAL(28, 360, 8), // "_q_error"
QT_MOC_LITERAL(29, 369, 19), // "_q_updateLockStatus"
QT_MOC_LITERAL(30, 389, 14), // "_q_updateState"
QT_MOC_LITERAL(31, 404, 5), // "state"
QT_MOC_LITERAL(32, 410, 6), // "status"
QT_MOC_LITERAL(33, 417, 11), // "captureMode"
QT_MOC_LITERAL(34, 429, 10), // "lockStatus"
QT_MOC_LITERAL(35, 440, 6), // "Status"
QT_MOC_LITERAL(36, 447, 17), // "UnavailableStatus"
QT_MOC_LITERAL(37, 465, 14), // "UnloadedStatus"
QT_MOC_LITERAL(38, 480, 13), // "LoadingStatus"
QT_MOC_LITERAL(39, 494, 15), // "UnloadingStatus"
QT_MOC_LITERAL(40, 510, 12), // "LoadedStatus"
QT_MOC_LITERAL(41, 523, 13), // "StandbyStatus"
QT_MOC_LITERAL(42, 537, 14), // "StartingStatus"
QT_MOC_LITERAL(43, 552, 14), // "StoppingStatus"
QT_MOC_LITERAL(44, 567, 12), // "ActiveStatus"
QT_MOC_LITERAL(45, 580, 5), // "State"
QT_MOC_LITERAL(46, 586, 13), // "UnloadedState"
QT_MOC_LITERAL(47, 600, 11), // "LoadedState"
QT_MOC_LITERAL(48, 612, 11), // "ActiveState"
QT_MOC_LITERAL(49, 624, 11), // "CaptureMode"
QT_MOC_LITERAL(50, 636, 17), // "CaptureViewfinder"
QT_MOC_LITERAL(51, 654, 17), // "CaptureStillImage"
QT_MOC_LITERAL(52, 672, 12), // "CaptureVideo"
QT_MOC_LITERAL(53, 685, 5), // "Error"
QT_MOC_LITERAL(54, 691, 7), // "NoError"
QT_MOC_LITERAL(55, 699, 11), // "CameraError"
QT_MOC_LITERAL(56, 711, 19), // "InvalidRequestError"
QT_MOC_LITERAL(57, 731, 19), // "ServiceMissingError"
QT_MOC_LITERAL(58, 751, 24), // "NotSupportedFeatureError"
QT_MOC_LITERAL(59, 776, 10), // "LockStatus"
QT_MOC_LITERAL(60, 787, 8), // "Unlocked"
QT_MOC_LITERAL(61, 796, 9), // "Searching"
QT_MOC_LITERAL(62, 806, 6), // "Locked"
QT_MOC_LITERAL(63, 813, 16), // "LockChangeReason"
QT_MOC_LITERAL(64, 830, 11), // "UserRequest"
QT_MOC_LITERAL(65, 842, 12), // "LockAcquired"
QT_MOC_LITERAL(66, 855, 10), // "LockFailed"
QT_MOC_LITERAL(67, 866, 8), // "LockLost"
QT_MOC_LITERAL(68, 875, 17), // "LockTemporaryLost"
QT_MOC_LITERAL(69, 893, 8), // "LockType"
QT_MOC_LITERAL(70, 902, 6), // "NoLock"
QT_MOC_LITERAL(71, 909, 12), // "LockExposure"
QT_MOC_LITERAL(72, 922, 16), // "LockWhiteBalance"
QT_MOC_LITERAL(73, 939, 9), // "LockFocus"
QT_MOC_LITERAL(74, 949, 8), // "Position"
QT_MOC_LITERAL(75, 958, 19), // "UnspecifiedPosition"
QT_MOC_LITERAL(76, 978, 8), // "BackFace"
QT_MOC_LITERAL(77, 987, 9) // "FrontFace"

    },
    "QCamera\0stateChanged\0\0QCamera::State\0"
    "captureModeChanged\0QCamera::CaptureModes\0"
    "statusChanged\0QCamera::Status\0locked\0"
    "lockFailed\0lockStatusChanged\0"
    "QCamera::LockStatus\0QCamera::LockChangeReason\0"
    "QCamera::LockType\0error\0QCamera::Error\0"
    "setCaptureMode\0mode\0load\0unload\0start\0"
    "stop\0searchAndLock\0unlock\0QCamera::LockTypes\0"
    "locks\0_q_preparePropertyChange\0"
    "_q_restartCamera\0_q_error\0_q_updateLockStatus\0"
    "_q_updateState\0state\0status\0captureMode\0"
    "lockStatus\0Status\0UnavailableStatus\0"
    "UnloadedStatus\0LoadingStatus\0"
    "UnloadingStatus\0LoadedStatus\0StandbyStatus\0"
    "StartingStatus\0StoppingStatus\0"
    "ActiveStatus\0State\0UnloadedState\0"
    "LoadedState\0ActiveState\0CaptureMode\0"
    "CaptureViewfinder\0CaptureStillImage\0"
    "CaptureVideo\0Error\0NoError\0CameraError\0"
    "InvalidRequestError\0ServiceMissingError\0"
    "NotSupportedFeatureError\0LockStatus\0"
    "Unlocked\0Searching\0Locked\0LockChangeReason\0"
    "UserRequest\0LockAcquired\0LockFailed\0"
    "LockLost\0LockTemporaryLost\0LockType\0"
    "NoLock\0LockExposure\0LockWhiteBalance\0"
    "LockFocus\0Position\0UnspecifiedPosition\0"
    "BackFace\0FrontFace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       4,  184, // properties
       8,  200, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    1,  127,    2, 0x06 /* Public */,
       6,    1,  130,    2, 0x06 /* Public */,
       8,    0,  133,    2, 0x06 /* Public */,
       9,    0,  134,    2, 0x06 /* Public */,
      10,    2,  135,    2, 0x06 /* Public */,
      10,    3,  140,    2, 0x06 /* Public */,
      14,    1,  147,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  150,    2, 0x0a /* Public */,
      18,    0,  153,    2, 0x0a /* Public */,
      19,    0,  154,    2, 0x0a /* Public */,
      20,    0,  155,    2, 0x0a /* Public */,
      21,    0,  156,    2, 0x0a /* Public */,
      22,    0,  157,    2, 0x0a /* Public */,
      23,    0,  158,    2, 0x0a /* Public */,
      22,    1,  159,    2, 0x0a /* Public */,
      23,    1,  162,    2, 0x0a /* Public */,
      26,    1,  165,    2, 0x08 /* Private */,
      27,    0,  168,    2, 0x08 /* Private */,
      28,    2,  169,    2, 0x08 /* Private */,
      29,    3,  174,    2, 0x08 /* Private */,
      30,    1,  181,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 11, 0x80000000 | 12,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 15,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 11, 0x80000000 | 12,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // properties: name, type, flags
      31, 0x80000000 | 3, 0x00495009,
      32, 0x80000000 | 7, 0x00495009,
      33, 0x80000000 | 5, 0x0049510b,
      34, 0x80000000 | 11, 0x00495009,

 // properties: notify_signal_id
       0,
       2,
       1,
       5,

 // enums: name, flags, count, data
      35, 0x0,    9,  232,
      45, 0x0,    3,  250,
      49, 0x0,    3,  256,
      53, 0x0,    5,  262,
      59, 0x0,    3,  272,
      63, 0x0,    5,  278,
      69, 0x0,    4,  288,
      74, 0x0,    3,  296,

 // enum data: key, value
      36, uint(QCamera::UnavailableStatus),
      37, uint(QCamera::UnloadedStatus),
      38, uint(QCamera::LoadingStatus),
      39, uint(QCamera::UnloadingStatus),
      40, uint(QCamera::LoadedStatus),
      41, uint(QCamera::StandbyStatus),
      42, uint(QCamera::StartingStatus),
      43, uint(QCamera::StoppingStatus),
      44, uint(QCamera::ActiveStatus),
      46, uint(QCamera::UnloadedState),
      47, uint(QCamera::LoadedState),
      48, uint(QCamera::ActiveState),
      50, uint(QCamera::CaptureViewfinder),
      51, uint(QCamera::CaptureStillImage),
      52, uint(QCamera::CaptureVideo),
      54, uint(QCamera::NoError),
      55, uint(QCamera::CameraError),
      56, uint(QCamera::InvalidRequestError),
      57, uint(QCamera::ServiceMissingError),
      58, uint(QCamera::NotSupportedFeatureError),
      60, uint(QCamera::Unlocked),
      61, uint(QCamera::Searching),
      62, uint(QCamera::Locked),
      64, uint(QCamera::UserRequest),
      65, uint(QCamera::LockAcquired),
      66, uint(QCamera::LockFailed),
      67, uint(QCamera::LockLost),
      68, uint(QCamera::LockTemporaryLost),
      70, uint(QCamera::NoLock),
      71, uint(QCamera::LockExposure),
      72, uint(QCamera::LockWhiteBalance),
      73, uint(QCamera::LockFocus),
      75, uint(QCamera::UnspecifiedPosition),
      76, uint(QCamera::BackFace),
      77, uint(QCamera::FrontFace),

       0        // eod
};

void QCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCamera *_t = static_cast<QCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 1: _t->captureModeChanged((*reinterpret_cast< QCamera::CaptureModes(*)>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< QCamera::Status(*)>(_a[1]))); break;
        case 3: _t->locked(); break;
        case 4: _t->lockFailed(); break;
        case 5: _t->lockStatusChanged((*reinterpret_cast< QCamera::LockStatus(*)>(_a[1])),(*reinterpret_cast< QCamera::LockChangeReason(*)>(_a[2]))); break;
        case 6: _t->lockStatusChanged((*reinterpret_cast< QCamera::LockType(*)>(_a[1])),(*reinterpret_cast< QCamera::LockStatus(*)>(_a[2])),(*reinterpret_cast< QCamera::LockChangeReason(*)>(_a[3]))); break;
        case 7: _t->error((*reinterpret_cast< QCamera::Error(*)>(_a[1]))); break;
        case 8: _t->setCaptureMode((*reinterpret_cast< QCamera::CaptureModes(*)>(_a[1]))); break;
        case 9: _t->load(); break;
        case 10: _t->unload(); break;
        case 11: _t->start(); break;
        case 12: _t->stop(); break;
        case 13: _t->searchAndLock(); break;
        case 14: _t->unlock(); break;
        case 15: _t->searchAndLock((*reinterpret_cast< QCamera::LockTypes(*)>(_a[1]))); break;
        case 16: _t->unlock((*reinterpret_cast< QCamera::LockTypes(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_preparePropertyChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->d_func()->_q_restartCamera(); break;
        case 19: _t->d_func()->_q_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->d_func()->_q_updateLockStatus((*reinterpret_cast< QCamera::LockType(*)>(_a[1])),(*reinterpret_cast< QCamera::LockStatus(*)>(_a[2])),(*reinterpret_cast< QCamera::LockChangeReason(*)>(_a[3]))); break;
        case 21: _t->d_func()->_q_updateState((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::CaptureModes >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Status >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockChangeReason >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockStatus >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockChangeReason >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockStatus >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockType >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Error >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::CaptureModes >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockChangeReason >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockStatus >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockType >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCamera::*_t)(QCamera::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(QCamera::CaptureModes );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::captureModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(QCamera::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::locked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::lockFailed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(QCamera::LockStatus , QCamera::LockChangeReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::lockStatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(QCamera::LockType , QCamera::LockStatus , QCamera::LockChangeReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::lockStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(QCamera::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::error)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::CaptureModes >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockStatus >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Status >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCamera *_t = static_cast<QCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCamera::State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< QCamera::Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QCamera::CaptureModes*>(_v) = _t->captureMode(); break;
        case 3: *reinterpret_cast< QCamera::LockStatus*>(_v) = _t->lockStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCamera *_t = static_cast<QCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCaptureMode(*reinterpret_cast< QCamera::CaptureModes*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCamera::staticMetaObject = {
    { &QMediaObject::staticMetaObject, qt_meta_stringdata_QCamera.data,
      qt_meta_data_QCamera,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCamera.stringdata0))
        return static_cast<void*>(this);
    return QMediaObject::qt_metacast(_clname);
}

int QCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCamera::stateChanged(QCamera::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCamera::captureModeChanged(QCamera::CaptureModes _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCamera::statusChanged(QCamera::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCamera::locked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QCamera::lockFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QCamera::lockStatusChanged(QCamera::LockStatus _t1, QCamera::LockChangeReason _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCamera::lockStatusChanged(QCamera::LockType _t1, QCamera::LockStatus _t2, QCamera::LockChangeReason _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCamera::error(QCamera::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
