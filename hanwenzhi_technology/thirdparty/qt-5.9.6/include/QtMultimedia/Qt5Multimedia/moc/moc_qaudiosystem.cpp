/****************************************************************************
** Meta object code from reading C++ file 'qaudiosystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaudiosystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudiosystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractAudioDeviceInfo_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractAudioDeviceInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractAudioDeviceInfo_t qt_meta_stringdata_QAbstractAudioDeviceInfo = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QAbstractAudioDeviceInfo"

    },
    "QAbstractAudioDeviceInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractAudioDeviceInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QAbstractAudioDeviceInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAbstractAudioDeviceInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractAudioDeviceInfo.data,
      qt_meta_data_QAbstractAudioDeviceInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractAudioDeviceInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractAudioDeviceInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractAudioDeviceInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractAudioDeviceInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QAbstractAudioOutput_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractAudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractAudioOutput_t qt_meta_stringdata_QAbstractAudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QAbstractAudioOutput"
QT_MOC_LITERAL(1, 21, 12), // "errorChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "QAudio::Error"
QT_MOC_LITERAL(4, 49, 12), // "stateChanged"
QT_MOC_LITERAL(5, 62, 13), // "QAudio::State"
QT_MOC_LITERAL(6, 76, 6) // "notify"

    },
    "QAbstractAudioOutput\0errorChanged\0\0"
    "QAudio::Error\0stateChanged\0QAudio::State\0"
    "notify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractAudioOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

       0        // eod
};

void QAbstractAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractAudioOutput *_t = static_cast<QAbstractAudioOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorChanged((*reinterpret_cast< QAudio::Error(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 2: _t->notify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Error >(); break;
            }
            break;
        case 1:
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
            typedef void (QAbstractAudioOutput::*_t)(QAudio::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAudioOutput::errorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractAudioOutput::*_t)(QAudio::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAudioOutput::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractAudioOutput::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAudioOutput::notify)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QAbstractAudioOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractAudioOutput.data,
      qt_meta_data_QAbstractAudioOutput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractAudioOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAbstractAudioOutput::errorChanged(QAudio::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractAudioOutput::stateChanged(QAudio::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractAudioOutput::notify()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QAbstractAudioInput_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractAudioInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractAudioInput_t qt_meta_stringdata_QAbstractAudioInput = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QAbstractAudioInput"
QT_MOC_LITERAL(1, 20, 12), // "errorChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "QAudio::Error"
QT_MOC_LITERAL(4, 48, 12), // "stateChanged"
QT_MOC_LITERAL(5, 61, 13), // "QAudio::State"
QT_MOC_LITERAL(6, 75, 6) // "notify"

    },
    "QAbstractAudioInput\0errorChanged\0\0"
    "QAudio::Error\0stateChanged\0QAudio::State\0"
    "notify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractAudioInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

       0        // eod
};

void QAbstractAudioInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractAudioInput *_t = static_cast<QAbstractAudioInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorChanged((*reinterpret_cast< QAudio::Error(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 2: _t->notify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Error >(); break;
            }
            break;
        case 1:
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
            typedef void (QAbstractAudioInput::*_t)(QAudio::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAudioInput::errorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractAudioInput::*_t)(QAudio::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAudioInput::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractAudioInput::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAudioInput::notify)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QAbstractAudioInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractAudioInput.data,
      qt_meta_data_QAbstractAudioInput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractAudioInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractAudioInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractAudioInput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractAudioInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAbstractAudioInput::errorChanged(QAudio::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractAudioInput::stateChanged(QAudio::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractAudioInput::notify()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
