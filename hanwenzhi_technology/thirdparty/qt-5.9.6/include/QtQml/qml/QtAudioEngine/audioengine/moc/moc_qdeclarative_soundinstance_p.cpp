/****************************************************************************
** Meta object code from reading C++ file 'qdeclarative_soundinstance_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarative_soundinstance_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarative_soundinstance_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeSoundInstance_t {
    QByteArrayData data[29];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeSoundInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeSoundInstance_t qt_meta_stringdata_QDeclarativeSoundInstance = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QDeclarativeSoundInstance"
QT_MOC_LITERAL(1, 26, 12), // "stateChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "positionChanged"
QT_MOC_LITERAL(4, 56, 16), // "directionChanged"
QT_MOC_LITERAL(5, 73, 15), // "velocityChanged"
QT_MOC_LITERAL(6, 89, 11), // "gainChanged"
QT_MOC_LITERAL(7, 101, 12), // "pitchChanged"
QT_MOC_LITERAL(8, 114, 12), // "soundChanged"
QT_MOC_LITERAL(9, 127, 4), // "play"
QT_MOC_LITERAL(10, 132, 4), // "stop"
QT_MOC_LITERAL(11, 137, 5), // "pause"
QT_MOC_LITERAL(12, 143, 14), // "updatePosition"
QT_MOC_LITERAL(13, 158, 9), // "deltaTime"
QT_MOC_LITERAL(14, 168, 18), // "handleStateChanged"
QT_MOC_LITERAL(15, 187, 14), // "engineComplete"
QT_MOC_LITERAL(16, 202, 6), // "engine"
QT_MOC_LITERAL(17, 209, 24), // "QDeclarativeAudioEngine*"
QT_MOC_LITERAL(18, 234, 5), // "sound"
QT_MOC_LITERAL(19, 240, 5), // "state"
QT_MOC_LITERAL(20, 246, 5), // "State"
QT_MOC_LITERAL(21, 252, 8), // "position"
QT_MOC_LITERAL(22, 261, 9), // "direction"
QT_MOC_LITERAL(23, 271, 8), // "velocity"
QT_MOC_LITERAL(24, 280, 4), // "gain"
QT_MOC_LITERAL(25, 285, 5), // "pitch"
QT_MOC_LITERAL(26, 291, 12), // "StoppedState"
QT_MOC_LITERAL(27, 304, 12), // "PlayingState"
QT_MOC_LITERAL(28, 317, 11) // "PausedState"

    },
    "QDeclarativeSoundInstance\0stateChanged\0"
    "\0positionChanged\0directionChanged\0"
    "velocityChanged\0gainChanged\0pitchChanged\0"
    "soundChanged\0play\0stop\0pause\0"
    "updatePosition\0deltaTime\0handleStateChanged\0"
    "engineComplete\0engine\0QDeclarativeAudioEngine*\0"
    "sound\0state\0State\0position\0direction\0"
    "velocity\0gain\0pitch\0StoppedState\0"
    "PlayingState\0PausedState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeSoundInstance[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       8,   94, // properties
       1,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x0009510b,
      18, QMetaType::QString, 0x00495103,
      19, 0x80000000 | 20, 0x00495009,
      21, QMetaType::QVector3D, 0x00495103,
      22, QMetaType::QVector3D, 0x00495103,
      23, QMetaType::QVector3D, 0x00495103,
      24, QMetaType::QReal, 0x00495103,
      25, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       6,
       0,
       1,
       2,
       3,
       4,
       5,

 // enums: name, flags, count, data
      20, 0x0,    3,  130,

 // enum data: key, value
      26, uint(QDeclarativeSoundInstance::StoppedState),
      27, uint(QDeclarativeSoundInstance::PlayingState),
      28, uint(QDeclarativeSoundInstance::PausedState),

       0        // eod
};

void QDeclarativeSoundInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeSoundInstance *_t = static_cast<QDeclarativeSoundInstance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->directionChanged(); break;
        case 3: _t->velocityChanged(); break;
        case 4: _t->gainChanged(); break;
        case 5: _t->pitchChanged(); break;
        case 6: _t->soundChanged(); break;
        case 7: _t->play(); break;
        case 8: _t->stop(); break;
        case 9: _t->pause(); break;
        case 10: _t->updatePosition((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->handleStateChanged(); break;
        case 12: _t->engineComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::directionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::velocityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::gainChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::pitchChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDeclarativeSoundInstance::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSoundInstance::soundChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeSoundInstance *_t = static_cast<QDeclarativeSoundInstance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeAudioEngine**>(_v) = _t->engine(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sound(); break;
        case 2: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 4: *reinterpret_cast< QVector3D*>(_v) = _t->direction(); break;
        case 5: *reinterpret_cast< QVector3D*>(_v) = _t->velocity(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->gain(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->pitch(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeSoundInstance *_t = static_cast<QDeclarativeSoundInstance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEngine(*reinterpret_cast< QDeclarativeAudioEngine**>(_v)); break;
        case 1: _t->setSound(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 4: _t->setDirection(*reinterpret_cast< QVector3D*>(_v)); break;
        case 5: _t->setVelocity(*reinterpret_cast< QVector3D*>(_v)); break;
        case 6: _t->setGain(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setPitch(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeSoundInstance::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeSoundInstance.data,
      qt_meta_data_QDeclarativeSoundInstance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeSoundInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeSoundInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSoundInstance.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeSoundInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeSoundInstance::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeSoundInstance::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeSoundInstance::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeSoundInstance::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QDeclarativeSoundInstance::gainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QDeclarativeSoundInstance::pitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QDeclarativeSoundInstance::soundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
