/****************************************************************************
** Meta object code from reading C++ file 'qaudiodecoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qaudiodecoder_p.h"
#include "../../qaudiodecoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudiodecoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAudioDecoder_t {
    QByteArrayData data[34];
    char stringdata0[411];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAudioDecoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAudioDecoder_t qt_meta_stringdata_QAudioDecoder = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QAudioDecoder"
QT_MOC_LITERAL(1, 14, 22), // "bufferAvailableChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "bufferReady"
QT_MOC_LITERAL(4, 50, 8), // "finished"
QT_MOC_LITERAL(5, 59, 12), // "stateChanged"
QT_MOC_LITERAL(6, 72, 20), // "QAudioDecoder::State"
QT_MOC_LITERAL(7, 93, 8), // "newState"
QT_MOC_LITERAL(8, 102, 13), // "formatChanged"
QT_MOC_LITERAL(9, 116, 12), // "QAudioFormat"
QT_MOC_LITERAL(10, 129, 6), // "format"
QT_MOC_LITERAL(11, 136, 5), // "error"
QT_MOC_LITERAL(12, 142, 20), // "QAudioDecoder::Error"
QT_MOC_LITERAL(13, 163, 13), // "sourceChanged"
QT_MOC_LITERAL(14, 177, 15), // "positionChanged"
QT_MOC_LITERAL(15, 193, 8), // "position"
QT_MOC_LITERAL(16, 202, 15), // "durationChanged"
QT_MOC_LITERAL(17, 218, 8), // "duration"
QT_MOC_LITERAL(18, 227, 5), // "start"
QT_MOC_LITERAL(19, 233, 4), // "stop"
QT_MOC_LITERAL(20, 238, 15), // "_q_stateChanged"
QT_MOC_LITERAL(21, 254, 8), // "_q_error"
QT_MOC_LITERAL(22, 263, 14), // "sourceFilename"
QT_MOC_LITERAL(23, 278, 5), // "state"
QT_MOC_LITERAL(24, 284, 5), // "State"
QT_MOC_LITERAL(25, 290, 15), // "bufferAvailable"
QT_MOC_LITERAL(26, 306, 12), // "StoppedState"
QT_MOC_LITERAL(27, 319, 13), // "DecodingState"
QT_MOC_LITERAL(28, 333, 5), // "Error"
QT_MOC_LITERAL(29, 339, 7), // "NoError"
QT_MOC_LITERAL(30, 347, 13), // "ResourceError"
QT_MOC_LITERAL(31, 361, 11), // "FormatError"
QT_MOC_LITERAL(32, 373, 17), // "AccessDeniedError"
QT_MOC_LITERAL(33, 391, 19) // "ServiceMissingError"

    },
    "QAudioDecoder\0bufferAvailableChanged\0"
    "\0bufferReady\0finished\0stateChanged\0"
    "QAudioDecoder::State\0newState\0"
    "formatChanged\0QAudioFormat\0format\0"
    "error\0QAudioDecoder::Error\0sourceChanged\0"
    "positionChanged\0position\0durationChanged\0"
    "duration\0start\0stop\0_q_stateChanged\0"
    "_q_error\0sourceFilename\0state\0State\0"
    "bufferAvailable\0StoppedState\0DecodingState\0"
    "Error\0NoError\0ResourceError\0FormatError\0"
    "AccessDeniedError\0ServiceMissingError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAudioDecoder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  110, // properties
       2,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    0,   82,    2, 0x06 /* Public */,
       4,    0,   83,    2, 0x06 /* Public */,
       5,    1,   84,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,
      11,    1,   90,    2, 0x06 /* Public */,
      13,    0,   93,    2, 0x06 /* Public */,
      14,    1,   94,    2, 0x06 /* Public */,
      16,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  100,    2, 0x0a /* Public */,
      19,    0,  101,    2, 0x0a /* Public */,
      20,    1,  102,    2, 0x08 /* Private */,
      21,    2,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void, QMetaType::LongLong,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00495103,
      23, 0x80000000 | 24, 0x00495009,
      11, QMetaType::QString, 0x00095001,
      25, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       6,
       3,
       0,
       0,

 // enums: name, flags, count, data
      24, 0x0,    2,  134,
      28, 0x0,    5,  138,

 // enum data: key, value
      26, uint(QAudioDecoder::StoppedState),
      27, uint(QAudioDecoder::DecodingState),
      29, uint(QAudioDecoder::NoError),
      30, uint(QAudioDecoder::ResourceError),
      31, uint(QAudioDecoder::FormatError),
      32, uint(QAudioDecoder::AccessDeniedError),
      33, uint(QAudioDecoder::ServiceMissingError),

       0        // eod
};

void QAudioDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAudioDecoder *_t = static_cast<QAudioDecoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bufferAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->bufferReady(); break;
        case 2: _t->finished(); break;
        case 3: _t->stateChanged((*reinterpret_cast< QAudioDecoder::State(*)>(_a[1]))); break;
        case 4: _t->formatChanged((*reinterpret_cast< const QAudioFormat(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QAudioDecoder::Error(*)>(_a[1]))); break;
        case 6: _t->sourceChanged(); break;
        case 7: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->start(); break;
        case 10: _t->stop(); break;
        case 11: _t->d_func()->_q_stateChanged((*reinterpret_cast< QAudioDecoder::State(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDecoder::State >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioFormat >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDecoder::Error >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDecoder::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAudioDecoder::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::bufferAvailableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::bufferReady)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::finished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)(QAudioDecoder::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)(const QAudioFormat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::formatChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)(QAudioDecoder::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::error)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::sourceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::positionChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QAudioDecoder::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoder::durationChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAudioDecoder *_t = static_cast<QAudioDecoder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sourceFilename(); break;
        case 1: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->bufferAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAudioDecoder *_t = static_cast<QAudioDecoder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAudioDecoder::staticMetaObject = {
    { &QMediaObject::staticMetaObject, qt_meta_stringdata_QAudioDecoder.data,
      qt_meta_data_QAudioDecoder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAudioDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAudioDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioDecoder.stringdata0))
        return static_cast<void*>(this);
    return QMediaObject::qt_metacast(_clname);
}

int QAudioDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void QAudioDecoder::bufferAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAudioDecoder::bufferReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QAudioDecoder::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QAudioDecoder::stateChanged(QAudioDecoder::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAudioDecoder::formatChanged(const QAudioFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAudioDecoder::error(QAudioDecoder::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAudioDecoder::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QAudioDecoder::positionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QAudioDecoder::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
