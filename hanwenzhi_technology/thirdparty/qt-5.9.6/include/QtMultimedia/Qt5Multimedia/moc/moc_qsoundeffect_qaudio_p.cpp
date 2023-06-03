/****************************************************************************
** Meta object code from reading C++ file 'qsoundeffect_qaudio_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qsoundeffect_qaudio_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsoundeffect_qaudio_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrivateSoundSource_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrivateSoundSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrivateSoundSource_t qt_meta_stringdata_PrivateSoundSource = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PrivateSoundSource"
QT_MOC_LITERAL(1, 19, 11), // "sampleReady"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "decoderError"
QT_MOC_LITERAL(4, 45, 12), // "stateChanged"
QT_MOC_LITERAL(5, 58, 13) // "QAudio::State"

    },
    "PrivateSoundSource\0sampleReady\0\0"
    "decoderError\0stateChanged\0QAudio::State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivateSoundSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void PrivateSoundSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrivateSoundSource *_t = static_cast<PrivateSoundSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleReady(); break;
        case 1: _t->decoderError(); break;
        case 2: _t->stateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject PrivateSoundSource::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_PrivateSoundSource.data,
      qt_meta_data_PrivateSoundSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PrivateSoundSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivateSoundSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateSoundSource.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int PrivateSoundSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QSoundEffectPrivate_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSoundEffectPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSoundEffectPrivate_t qt_meta_stringdata_QSoundEffectPrivate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QSoundEffectPrivate"
QT_MOC_LITERAL(1, 20, 21), // "loopsRemainingChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "volumeChanged"
QT_MOC_LITERAL(4, 57, 12), // "mutedChanged"
QT_MOC_LITERAL(5, 70, 13), // "loadedChanged"
QT_MOC_LITERAL(6, 84, 14), // "playingChanged"
QT_MOC_LITERAL(7, 99, 13), // "statusChanged"
QT_MOC_LITERAL(8, 113, 15), // "categoryChanged"
QT_MOC_LITERAL(9, 129, 4), // "play"
QT_MOC_LITERAL(10, 134, 4) // "stop"

    },
    "QSoundEffectPrivate\0loopsRemainingChanged\0"
    "\0volumeChanged\0mutedChanged\0loadedChanged\0"
    "playingChanged\0statusChanged\0"
    "categoryChanged\0play\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSoundEffectPrivate[] = {

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
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QSoundEffectPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSoundEffectPrivate *_t = static_cast<QSoundEffectPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loopsRemainingChanged(); break;
        case 1: _t->volumeChanged(); break;
        case 2: _t->mutedChanged(); break;
        case 3: _t->loadedChanged(); break;
        case 4: _t->playingChanged(); break;
        case 5: _t->statusChanged(); break;
        case 6: _t->categoryChanged(); break;
        case 7: _t->play(); break;
        case 8: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::loopsRemainingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::volumeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::mutedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::loadedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::playingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::statusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QSoundEffectPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSoundEffectPrivate::categoryChanged)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QSoundEffectPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSoundEffectPrivate.data,
      qt_meta_data_QSoundEffectPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSoundEffectPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSoundEffectPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSoundEffectPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSoundEffectPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QSoundEffectPrivate::loopsRemainingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSoundEffectPrivate::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSoundEffectPrivate::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QSoundEffectPrivate::loadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QSoundEffectPrivate::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QSoundEffectPrivate::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QSoundEffectPrivate::categoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
