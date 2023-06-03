/****************************************************************************
** Meta object code from reading C++ file 'qmediaplayercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmediaplayercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaplayercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaPlayerControl_t {
    QByteArrayData data[32];
    char stringdata0[454];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaPlayerControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaPlayerControl_t qt_meta_stringdata_QMediaPlayerControl = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QMediaPlayerControl"
QT_MOC_LITERAL(1, 20, 12), // "mediaChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "QMediaContent"
QT_MOC_LITERAL(4, 48, 7), // "content"
QT_MOC_LITERAL(5, 56, 15), // "durationChanged"
QT_MOC_LITERAL(6, 72, 8), // "duration"
QT_MOC_LITERAL(7, 81, 15), // "positionChanged"
QT_MOC_LITERAL(8, 97, 8), // "position"
QT_MOC_LITERAL(9, 106, 12), // "stateChanged"
QT_MOC_LITERAL(10, 119, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(11, 139, 8), // "newState"
QT_MOC_LITERAL(12, 148, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(13, 167, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(14, 193, 6), // "status"
QT_MOC_LITERAL(15, 200, 13), // "volumeChanged"
QT_MOC_LITERAL(16, 214, 6), // "volume"
QT_MOC_LITERAL(17, 221, 12), // "mutedChanged"
QT_MOC_LITERAL(18, 234, 5), // "muted"
QT_MOC_LITERAL(19, 240, 21), // "audioAvailableChanged"
QT_MOC_LITERAL(20, 262, 14), // "audioAvailable"
QT_MOC_LITERAL(21, 277, 21), // "videoAvailableChanged"
QT_MOC_LITERAL(22, 299, 14), // "videoAvailable"
QT_MOC_LITERAL(23, 314, 19), // "bufferStatusChanged"
QT_MOC_LITERAL(24, 334, 13), // "percentFilled"
QT_MOC_LITERAL(25, 348, 15), // "seekableChanged"
QT_MOC_LITERAL(26, 364, 30), // "availablePlaybackRangesChanged"
QT_MOC_LITERAL(27, 395, 15), // "QMediaTimeRange"
QT_MOC_LITERAL(28, 411, 19), // "playbackRateChanged"
QT_MOC_LITERAL(29, 431, 4), // "rate"
QT_MOC_LITERAL(30, 436, 5), // "error"
QT_MOC_LITERAL(31, 442, 11) // "errorString"

    },
    "QMediaPlayerControl\0mediaChanged\0\0"
    "QMediaContent\0content\0durationChanged\0"
    "duration\0positionChanged\0position\0"
    "stateChanged\0QMediaPlayer::State\0"
    "newState\0mediaStatusChanged\0"
    "QMediaPlayer::MediaStatus\0status\0"
    "volumeChanged\0volume\0mutedChanged\0"
    "muted\0audioAvailableChanged\0audioAvailable\0"
    "videoAvailableChanged\0videoAvailable\0"
    "bufferStatusChanged\0percentFilled\0"
    "seekableChanged\0availablePlaybackRangesChanged\0"
    "QMediaTimeRange\0playbackRateChanged\0"
    "rate\0error\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaPlayerControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       7,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,
      12,    1,   96,    2, 0x06 /* Public */,
      15,    1,   99,    2, 0x06 /* Public */,
      17,    1,  102,    2, 0x06 /* Public */,
      19,    1,  105,    2, 0x06 /* Public */,
      21,    1,  108,    2, 0x06 /* Public */,
      23,    1,  111,    2, 0x06 /* Public */,
      25,    1,  114,    2, 0x06 /* Public */,
      26,    1,  117,    2, 0x06 /* Public */,
      28,    1,  120,    2, 0x06 /* Public */,
      30,    2,  123,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, QMetaType::QReal,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,   31,

       0        // eod
};

void QMediaPlayerControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaPlayerControl *_t = static_cast<QMediaPlayerControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 1: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 4: _t->mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 5: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->audioAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->videoAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->bufferStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->seekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->availablePlaybackRangesChanged((*reinterpret_cast< const QMediaTimeRange(*)>(_a[1]))); break;
        case 12: _t->playbackRateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 13: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaPlayerControl::*_t)(const QMediaContent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::mediaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::durationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::positionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(QMediaPlayer::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(QMediaPlayer::MediaStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::mediaStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::volumeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::mutedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::audioAvailableChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::videoAvailableChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::bufferStatusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::seekableChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(const QMediaTimeRange & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::availablePlaybackRangesChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::playbackRateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QMediaPlayerControl::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerControl::error)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject QMediaPlayerControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QMediaPlayerControl.data,
      qt_meta_data_QMediaPlayerControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaPlayerControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlayerControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaPlayerControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QMediaPlayerControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QMediaPlayerControl::mediaChanged(const QMediaContent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaPlayerControl::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaPlayerControl::positionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaPlayerControl::stateChanged(QMediaPlayer::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMediaPlayerControl::mediaStatusChanged(QMediaPlayer::MediaStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMediaPlayerControl::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMediaPlayerControl::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QMediaPlayerControl::audioAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QMediaPlayerControl::videoAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMediaPlayerControl::bufferStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QMediaPlayerControl::seekableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMediaPlayerControl::availablePlaybackRangesChanged(const QMediaTimeRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMediaPlayerControl::playbackRateChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QMediaPlayerControl::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
