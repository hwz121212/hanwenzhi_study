/****************************************************************************
** Meta object code from reading C++ file 'audiocapturesession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../audiocapturesession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiocapturesession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioCaptureSession_t {
    QByteArrayData data[21];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioCaptureSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioCaptureSession_t qt_meta_stringdata_AudioCaptureSession = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AudioCaptureSession"
QT_MOC_LITERAL(1, 20, 12), // "stateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "QMediaRecorder::State"
QT_MOC_LITERAL(4, 56, 5), // "state"
QT_MOC_LITERAL(5, 62, 13), // "statusChanged"
QT_MOC_LITERAL(6, 76, 22), // "QMediaRecorder::Status"
QT_MOC_LITERAL(7, 99, 6), // "status"
QT_MOC_LITERAL(8, 106, 15), // "positionChanged"
QT_MOC_LITERAL(9, 122, 8), // "position"
QT_MOC_LITERAL(10, 131, 21), // "actualLocationChanged"
QT_MOC_LITERAL(11, 153, 8), // "location"
QT_MOC_LITERAL(12, 162, 13), // "volumeChanged"
QT_MOC_LITERAL(13, 176, 6), // "volume"
QT_MOC_LITERAL(14, 183, 12), // "mutedChanged"
QT_MOC_LITERAL(15, 196, 5), // "muted"
QT_MOC_LITERAL(16, 202, 5), // "error"
QT_MOC_LITERAL(17, 208, 11), // "errorString"
QT_MOC_LITERAL(18, 220, 22), // "audioInputStateChanged"
QT_MOC_LITERAL(19, 243, 13), // "QAudio::State"
QT_MOC_LITERAL(20, 257, 6) // "notify"

    },
    "AudioCaptureSession\0stateChanged\0\0"
    "QMediaRecorder::State\0state\0statusChanged\0"
    "QMediaRecorder::Status\0status\0"
    "positionChanged\0position\0actualLocationChanged\0"
    "location\0volumeChanged\0volume\0"
    "mutedChanged\0muted\0error\0errorString\0"
    "audioInputStateChanged\0QAudio::State\0"
    "notify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioCaptureSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
      10,    1,   68,    2, 0x06 /* Public */,
      12,    1,   71,    2, 0x06 /* Public */,
      14,    1,   74,    2, 0x06 /* Public */,
      16,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   82,    2, 0x08 /* Private */,
      20,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,    4,
    QMetaType::Void,

       0        // eod
};

void AudioCaptureSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioCaptureSession *_t = static_cast<AudioCaptureSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< QMediaRecorder::Status(*)>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->actualLocationChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->audioInputStateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 8: _t->notify(); break;
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
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AudioCaptureSession::*_t)(QMediaRecorder::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AudioCaptureSession::*_t)(QMediaRecorder::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AudioCaptureSession::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::positionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AudioCaptureSession::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::actualLocationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AudioCaptureSession::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::volumeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AudioCaptureSession::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::mutedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AudioCaptureSession::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioCaptureSession::error)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject AudioCaptureSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioCaptureSession.data,
      qt_meta_data_AudioCaptureSession,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioCaptureSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioCaptureSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioCaptureSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioCaptureSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AudioCaptureSession::stateChanged(QMediaRecorder::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioCaptureSession::statusChanged(QMediaRecorder::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AudioCaptureSession::positionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AudioCaptureSession::actualLocationChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AudioCaptureSession::volumeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AudioCaptureSession::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AudioCaptureSession::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
