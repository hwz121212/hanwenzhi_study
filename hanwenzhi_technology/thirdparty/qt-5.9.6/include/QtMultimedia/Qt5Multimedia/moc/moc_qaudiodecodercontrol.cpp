/****************************************************************************
** Meta object code from reading C++ file 'qaudiodecodercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaudiodecodercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudiodecodercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAudioDecoderControl_t {
    QByteArrayData data[19];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAudioDecoderControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAudioDecoderControl_t qt_meta_stringdata_QAudioDecoderControl = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QAudioDecoderControl"
QT_MOC_LITERAL(1, 21, 12), // "stateChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "QAudioDecoder::State"
QT_MOC_LITERAL(4, 56, 8), // "newState"
QT_MOC_LITERAL(5, 65, 13), // "formatChanged"
QT_MOC_LITERAL(6, 79, 12), // "QAudioFormat"
QT_MOC_LITERAL(7, 92, 6), // "format"
QT_MOC_LITERAL(8, 99, 13), // "sourceChanged"
QT_MOC_LITERAL(9, 113, 5), // "error"
QT_MOC_LITERAL(10, 119, 11), // "errorString"
QT_MOC_LITERAL(11, 131, 11), // "bufferReady"
QT_MOC_LITERAL(12, 143, 22), // "bufferAvailableChanged"
QT_MOC_LITERAL(13, 166, 9), // "available"
QT_MOC_LITERAL(14, 176, 8), // "finished"
QT_MOC_LITERAL(15, 185, 15), // "positionChanged"
QT_MOC_LITERAL(16, 201, 8), // "position"
QT_MOC_LITERAL(17, 210, 15), // "durationChanged"
QT_MOC_LITERAL(18, 226, 8) // "duration"

    },
    "QAudioDecoderControl\0stateChanged\0\0"
    "QAudioDecoder::State\0newState\0"
    "formatChanged\0QAudioFormat\0format\0"
    "sourceChanged\0error\0errorString\0"
    "bufferReady\0bufferAvailableChanged\0"
    "available\0finished\0positionChanged\0"
    "position\0durationChanged\0duration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAudioDecoderControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    2,   66,    2, 0x06 /* Public */,
      11,    0,   71,    2, 0x06 /* Public */,
      12,    1,   72,    2, 0x06 /* Public */,
      14,    0,   75,    2, 0x06 /* Public */,
      15,    1,   76,    2, 0x06 /* Public */,
      17,    1,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   16,
    QMetaType::Void, QMetaType::LongLong,   18,

       0        // eod
};

void QAudioDecoderControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAudioDecoderControl *_t = static_cast<QAudioDecoderControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QAudioDecoder::State(*)>(_a[1]))); break;
        case 1: _t->formatChanged((*reinterpret_cast< const QAudioFormat(*)>(_a[1]))); break;
        case 2: _t->sourceChanged(); break;
        case 3: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->bufferReady(); break;
        case 5: _t->bufferAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->finished(); break;
        case 7: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDecoder::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioFormat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAudioDecoderControl::*_t)(QAudioDecoder::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)(const QAudioFormat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::formatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::error)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::bufferReady)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::bufferAvailableChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::finished)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::positionChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QAudioDecoderControl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioDecoderControl::durationChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject QAudioDecoderControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QAudioDecoderControl.data,
      qt_meta_data_QAudioDecoderControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAudioDecoderControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAudioDecoderControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioDecoderControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QAudioDecoderControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
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
void QAudioDecoderControl::stateChanged(QAudioDecoder::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAudioDecoderControl::formatChanged(const QAudioFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAudioDecoderControl::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QAudioDecoderControl::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAudioDecoderControl::bufferReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QAudioDecoderControl::bufferAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAudioDecoderControl::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QAudioDecoderControl::positionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QAudioDecoderControl::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
