/****************************************************************************
** Meta object code from reading C++ file 'qmediarecorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmediarecorder_p.h"
#include "../../qmediarecorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediarecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaRecorder_t {
    QByteArrayData data[63];
    char stringdata0[859];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaRecorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaRecorder_t qt_meta_stringdata_QMediaRecorder = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QMediaRecorder"
QT_MOC_LITERAL(1, 15, 12), // "stateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "QMediaRecorder::State"
QT_MOC_LITERAL(4, 51, 5), // "state"
QT_MOC_LITERAL(5, 57, 13), // "statusChanged"
QT_MOC_LITERAL(6, 71, 22), // "QMediaRecorder::Status"
QT_MOC_LITERAL(7, 94, 6), // "status"
QT_MOC_LITERAL(8, 101, 15), // "durationChanged"
QT_MOC_LITERAL(9, 117, 8), // "duration"
QT_MOC_LITERAL(10, 126, 12), // "mutedChanged"
QT_MOC_LITERAL(11, 139, 5), // "muted"
QT_MOC_LITERAL(12, 145, 13), // "volumeChanged"
QT_MOC_LITERAL(13, 159, 6), // "volume"
QT_MOC_LITERAL(14, 166, 21), // "actualLocationChanged"
QT_MOC_LITERAL(15, 188, 8), // "location"
QT_MOC_LITERAL(16, 197, 5), // "error"
QT_MOC_LITERAL(17, 203, 21), // "QMediaRecorder::Error"
QT_MOC_LITERAL(18, 225, 24), // "metaDataAvailableChanged"
QT_MOC_LITERAL(19, 250, 9), // "available"
QT_MOC_LITERAL(20, 260, 23), // "metaDataWritableChanged"
QT_MOC_LITERAL(21, 284, 8), // "writable"
QT_MOC_LITERAL(22, 293, 15), // "metaDataChanged"
QT_MOC_LITERAL(23, 309, 3), // "key"
QT_MOC_LITERAL(24, 313, 5), // "value"
QT_MOC_LITERAL(25, 319, 19), // "availabilityChanged"
QT_MOC_LITERAL(26, 339, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(27, 371, 12), // "availability"
QT_MOC_LITERAL(28, 384, 6), // "record"
QT_MOC_LITERAL(29, 391, 5), // "pause"
QT_MOC_LITERAL(30, 397, 4), // "stop"
QT_MOC_LITERAL(31, 402, 8), // "setMuted"
QT_MOC_LITERAL(32, 411, 9), // "setVolume"
QT_MOC_LITERAL(33, 421, 15), // "_q_stateChanged"
QT_MOC_LITERAL(34, 437, 8), // "_q_error"
QT_MOC_LITERAL(35, 446, 19), // "_q_serviceDestroyed"
QT_MOC_LITERAL(36, 466, 9), // "_q_notify"
QT_MOC_LITERAL(37, 476, 23), // "_q_updateActualLocation"
QT_MOC_LITERAL(38, 500, 23), // "_q_updateNotifyInterval"
QT_MOC_LITERAL(39, 524, 16), // "_q_applySettings"
QT_MOC_LITERAL(40, 541, 22), // "_q_availabilityChanged"
QT_MOC_LITERAL(41, 564, 14), // "outputLocation"
QT_MOC_LITERAL(42, 579, 14), // "actualLocation"
QT_MOC_LITERAL(43, 594, 17), // "metaDataAvailable"
QT_MOC_LITERAL(44, 612, 16), // "metaDataWritable"
QT_MOC_LITERAL(45, 629, 5), // "State"
QT_MOC_LITERAL(46, 635, 12), // "StoppedState"
QT_MOC_LITERAL(47, 648, 14), // "RecordingState"
QT_MOC_LITERAL(48, 663, 11), // "PausedState"
QT_MOC_LITERAL(49, 675, 6), // "Status"
QT_MOC_LITERAL(50, 682, 17), // "UnavailableStatus"
QT_MOC_LITERAL(51, 700, 14), // "UnloadedStatus"
QT_MOC_LITERAL(52, 715, 13), // "LoadingStatus"
QT_MOC_LITERAL(53, 729, 12), // "LoadedStatus"
QT_MOC_LITERAL(54, 742, 14), // "StartingStatus"
QT_MOC_LITERAL(55, 757, 15), // "RecordingStatus"
QT_MOC_LITERAL(56, 773, 12), // "PausedStatus"
QT_MOC_LITERAL(57, 786, 16), // "FinalizingStatus"
QT_MOC_LITERAL(58, 803, 5), // "Error"
QT_MOC_LITERAL(59, 809, 7), // "NoError"
QT_MOC_LITERAL(60, 817, 13), // "ResourceError"
QT_MOC_LITERAL(61, 831, 11), // "FormatError"
QT_MOC_LITERAL(62, 843, 15) // "OutOfSpaceError"

    },
    "QMediaRecorder\0stateChanged\0\0"
    "QMediaRecorder::State\0state\0statusChanged\0"
    "QMediaRecorder::Status\0status\0"
    "durationChanged\0duration\0mutedChanged\0"
    "muted\0volumeChanged\0volume\0"
    "actualLocationChanged\0location\0error\0"
    "QMediaRecorder::Error\0metaDataAvailableChanged\0"
    "available\0metaDataWritableChanged\0"
    "writable\0metaDataChanged\0key\0value\0"
    "availabilityChanged\0QMultimedia::AvailabilityStatus\0"
    "availability\0record\0pause\0stop\0setMuted\0"
    "setVolume\0_q_stateChanged\0_q_error\0"
    "_q_serviceDestroyed\0_q_notify\0"
    "_q_updateActualLocation\0_q_updateNotifyInterval\0"
    "_q_applySettings\0_q_availabilityChanged\0"
    "outputLocation\0actualLocation\0"
    "metaDataAvailable\0metaDataWritable\0"
    "State\0StoppedState\0RecordingState\0"
    "PausedState\0Status\0UnavailableStatus\0"
    "UnloadedStatus\0LoadingStatus\0LoadedStatus\0"
    "StartingStatus\0RecordingStatus\0"
    "PausedStatus\0FinalizingStatus\0Error\0"
    "NoError\0ResourceError\0FormatError\0"
    "OutOfSpaceError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaRecorder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       9,  212, // properties
       3,  248, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    1,  147,    2, 0x06 /* Public */,
       8,    1,  150,    2, 0x06 /* Public */,
      10,    1,  153,    2, 0x06 /* Public */,
      12,    1,  156,    2, 0x06 /* Public */,
      14,    1,  159,    2, 0x06 /* Public */,
      16,    1,  162,    2, 0x06 /* Public */,
      18,    1,  165,    2, 0x06 /* Public */,
      20,    1,  168,    2, 0x06 /* Public */,
      22,    0,  171,    2, 0x06 /* Public */,
      22,    2,  172,    2, 0x06 /* Public */,
      25,    1,  177,    2, 0x06 /* Public */,
      25,    1,  180,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  183,    2, 0x0a /* Public */,
      29,    0,  184,    2, 0x0a /* Public */,
      30,    0,  185,    2, 0x0a /* Public */,
      31,    1,  186,    2, 0x0a /* Public */,
      32,    1,  189,    2, 0x0a /* Public */,
      33,    1,  192,    2, 0x08 /* Private */,
      34,    2,  195,    2, 0x08 /* Private */,
      35,    0,  200,    2, 0x08 /* Private */,
      36,    0,  201,    2, 0x08 /* Private */,
      37,    1,  202,    2, 0x08 /* Private */,
      38,    1,  205,    2, 0x08 /* Private */,
      39,    0,  208,    2, 0x08 /* Private */,
      40,    1,  209,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::Void, 0x80000000 | 17,   16,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   23,   24,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, 0x80000000 | 26,   27,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,    2,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00495009,
       7, 0x80000000 | 6, 0x00495009,
       9, QMetaType::LongLong, 0x00495001,
      41, QMetaType::QUrl, 0x00095103,
      42, QMetaType::QUrl, 0x00495001,
      11, QMetaType::Bool, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      43, QMetaType::Bool, 0x00495001,
      44, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       5,
       3,
       4,
       7,
       8,

 // enums: name, flags, count, data
      45, 0x0,    3,  260,
      49, 0x0,    8,  266,
      58, 0x0,    4,  282,

 // enum data: key, value
      46, uint(QMediaRecorder::StoppedState),
      47, uint(QMediaRecorder::RecordingState),
      48, uint(QMediaRecorder::PausedState),
      50, uint(QMediaRecorder::UnavailableStatus),
      51, uint(QMediaRecorder::UnloadedStatus),
      52, uint(QMediaRecorder::LoadingStatus),
      53, uint(QMediaRecorder::LoadedStatus),
      54, uint(QMediaRecorder::StartingStatus),
      55, uint(QMediaRecorder::RecordingStatus),
      56, uint(QMediaRecorder::PausedStatus),
      57, uint(QMediaRecorder::FinalizingStatus),
      59, uint(QMediaRecorder::NoError),
      60, uint(QMediaRecorder::ResourceError),
      61, uint(QMediaRecorder::FormatError),
      62, uint(QMediaRecorder::OutOfSpaceError),

       0        // eod
};

void QMediaRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaRecorder *_t = static_cast<QMediaRecorder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< QMediaRecorder::Status(*)>(_a[1]))); break;
        case 2: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->actualLocationChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< QMediaRecorder::Error(*)>(_a[1]))); break;
        case 7: _t->metaDataAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->metaDataWritableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->metaDataChanged(); break;
        case 10: _t->metaDataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 11: _t->availabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->availabilityChanged((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        case 13: _t->record(); break;
        case 14: _t->pause(); break;
        case 15: _t->stop(); break;
        case 16: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 18: _t->d_func()->_q_stateChanged((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 19: _t->d_func()->_q_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->d_func()->_q_serviceDestroyed(); break;
        case 21: _t->d_func()->_q_notify(); break;
        case 22: _t->d_func()->_q_updateActualLocation((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 23: _t->d_func()->_q_updateNotifyInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->d_func()->_q_applySettings(); break;
        case 25: _t->d_func()->_q_availabilityChanged((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::Status >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::Error >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::AvailabilityStatus >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::AvailabilityStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaRecorder::*_t)(QMediaRecorder::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(QMediaRecorder::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::durationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::mutedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::volumeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::actualLocationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(QMediaRecorder::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::error)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::metaDataAvailableChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::metaDataWritableChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::metaDataChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::metaDataChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::availabilityChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QMediaRecorder::*_t)(QMultimedia::AvailabilityStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorder::availabilityChanged)) {
                *result = 12;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::Status >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMediaRecorder *_t = static_cast<QMediaRecorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMediaRecorder::State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< QMediaRecorder::Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< qint64*>(_v) = _t->duration(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->outputLocation(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->actualLocation(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->volume(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isMetaDataAvailable(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isMetaDataWritable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMediaRecorder *_t = static_cast<QMediaRecorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setOutputLocation(*reinterpret_cast< QUrl*>(_v)); break;
        case 5: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setVolume(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMediaRecorder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMediaRecorder.data,
      qt_meta_data_QMediaRecorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaRecorder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QMediaBindableInterface"))
        return static_cast< QMediaBindableInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.mediabindable/5.0"))
        return static_cast< QMediaBindableInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int QMediaRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMediaRecorder::stateChanged(QMediaRecorder::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaRecorder::statusChanged(QMediaRecorder::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaRecorder::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaRecorder::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMediaRecorder::volumeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMediaRecorder::actualLocationChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMediaRecorder::error(QMediaRecorder::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QMediaRecorder::metaDataAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QMediaRecorder::metaDataWritableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMediaRecorder::metaDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QMediaRecorder::metaDataChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMediaRecorder::availabilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMediaRecorder::availabilityChanged(QMultimedia::AvailabilityStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
