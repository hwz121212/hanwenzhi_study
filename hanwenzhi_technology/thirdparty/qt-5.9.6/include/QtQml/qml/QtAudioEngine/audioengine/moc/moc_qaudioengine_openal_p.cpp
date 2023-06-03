/****************************************************************************
** Meta object code from reading C++ file 'qaudioengine_openal_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qaudioengine_openal_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudioengine_openal_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSoundBufferPrivateAL_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSoundBufferPrivateAL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSoundBufferPrivateAL_t qt_meta_stringdata_QSoundBufferPrivateAL = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QSoundBufferPrivateAL"

    },
    "QSoundBufferPrivateAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSoundBufferPrivateAL[] = {

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

void QSoundBufferPrivateAL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QSoundBufferPrivateAL::staticMetaObject = {
    { &QSoundBuffer::staticMetaObject, qt_meta_stringdata_QSoundBufferPrivateAL.data,
      qt_meta_data_QSoundBufferPrivateAL,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSoundBufferPrivateAL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSoundBufferPrivateAL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSoundBufferPrivateAL.stringdata0))
        return static_cast<void*>(this);
    return QSoundBuffer::qt_metacast(_clname);
}

int QSoundBufferPrivateAL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSoundBuffer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StaticSoundBufferAL_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StaticSoundBufferAL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StaticSoundBufferAL_t qt_meta_stringdata_StaticSoundBufferAL = {
    {
QT_MOC_LITERAL(0, 0, 19), // "StaticSoundBufferAL"
QT_MOC_LITERAL(1, 20, 11), // "sampleReady"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12) // "decoderError"

    },
    "StaticSoundBufferAL\0sampleReady\0\0"
    "decoderError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StaticSoundBufferAL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StaticSoundBufferAL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StaticSoundBufferAL *_t = static_cast<StaticSoundBufferAL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleReady(); break;
        case 1: _t->decoderError(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject StaticSoundBufferAL::staticMetaObject = {
    { &QSoundBufferPrivateAL::staticMetaObject, qt_meta_stringdata_StaticSoundBufferAL.data,
      qt_meta_data_StaticSoundBufferAL,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StaticSoundBufferAL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StaticSoundBufferAL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StaticSoundBufferAL.stringdata0))
        return static_cast<void*>(this);
    return QSoundBufferPrivateAL::qt_metacast(_clname);
}

int StaticSoundBufferAL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSoundBufferPrivateAL::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QSoundSourcePrivate_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSoundSourcePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSoundSourcePrivate_t qt_meta_stringdata_QSoundSourcePrivate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QSoundSourcePrivate"
QT_MOC_LITERAL(1, 20, 8), // "activate"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "QSoundSourcePrivate\0activate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSoundSourcePrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QSoundSourcePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSoundSourcePrivate *_t = static_cast<QSoundSourcePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activate((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSoundSourcePrivate::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundSourcePrivate::activate)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QSoundSourcePrivate::staticMetaObject = {
    { &QSoundSource::staticMetaObject, qt_meta_stringdata_QSoundSourcePrivate.data,
      qt_meta_data_QSoundSourcePrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSoundSourcePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSoundSourcePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSoundSourcePrivate.stringdata0))
        return static_cast<void*>(this);
    return QSoundSource::qt_metacast(_clname);
}

int QSoundSourcePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSoundSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QSoundSourcePrivate::activate(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QAudioEnginePrivate_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAudioEnginePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAudioEnginePrivate_t qt_meta_stringdata_QAudioEnginePrivate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QAudioEnginePrivate"
QT_MOC_LITERAL(1, 20, 16), // "isLoadingChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "updateSoundSources"
QT_MOC_LITERAL(4, 57, 19), // "soundSourceActivate"
QT_MOC_LITERAL(5, 77, 11) // "soundSource"

    },
    "QAudioEnginePrivate\0isLoadingChanged\0"
    "\0updateSoundSources\0soundSourceActivate\0"
    "soundSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAudioEnginePrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    5,

       0        // eod
};

void QAudioEnginePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAudioEnginePrivate *_t = static_cast<QAudioEnginePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isLoadingChanged(); break;
        case 1: _t->updateSoundSources(); break;
        case 2: _t->soundSourceActivate((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAudioEnginePrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioEnginePrivate::isLoadingChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QAudioEnginePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAudioEnginePrivate.data,
      qt_meta_data_QAudioEnginePrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAudioEnginePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAudioEnginePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioEnginePrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAudioEnginePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAudioEnginePrivate::isLoadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
