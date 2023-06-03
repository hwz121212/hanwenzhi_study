/****************************************************************************
** Meta object code from reading C++ file 'qdeclarative_audiolistener_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarative_audiolistener_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarative_audiolistener_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeAudioListener_t {
    QByteArrayData data[14];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeAudioListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeAudioListener_t qt_meta_stringdata_QDeclarativeAudioListener = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QDeclarativeAudioListener"
QT_MOC_LITERAL(1, 26, 15), // "positionChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 16), // "directionChanged"
QT_MOC_LITERAL(4, 60, 15), // "velocityChanged"
QT_MOC_LITERAL(5, 76, 9), // "upChanged"
QT_MOC_LITERAL(6, 86, 11), // "gainChanged"
QT_MOC_LITERAL(7, 98, 6), // "engine"
QT_MOC_LITERAL(8, 105, 24), // "QDeclarativeAudioEngine*"
QT_MOC_LITERAL(9, 130, 8), // "position"
QT_MOC_LITERAL(10, 139, 9), // "direction"
QT_MOC_LITERAL(11, 149, 8), // "velocity"
QT_MOC_LITERAL(12, 158, 2), // "up"
QT_MOC_LITERAL(13, 161, 4) // "gain"

    },
    "QDeclarativeAudioListener\0positionChanged\0"
    "\0directionChanged\0velocityChanged\0"
    "upChanged\0gainChanged\0engine\0"
    "QDeclarativeAudioEngine*\0position\0"
    "direction\0velocity\0up\0gain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeAudioListener[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::QVector3D, 0x00495103,
      10, QMetaType::QVector3D, 0x00495103,
      11, QMetaType::QVector3D, 0x00495103,
      12, QMetaType::QVector3D, 0x00495103,
      13, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QDeclarativeAudioListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeAudioListener *_t = static_cast<QDeclarativeAudioListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->directionChanged(); break;
        case 2: _t->velocityChanged(); break;
        case 3: _t->upChanged(); break;
        case 4: _t->gainChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeAudioListener::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudioListener::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudioListener::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudioListener::directionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudioListener::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudioListener::velocityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudioListener::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudioListener::upChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeAudioListener::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeAudioListener::gainChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeAudioListener *_t = static_cast<QDeclarativeAudioListener *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeAudioEngine**>(_v) = _t->engine(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->direction(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->velocity(); break;
        case 4: *reinterpret_cast< QVector3D*>(_v) = _t->up(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->gain(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeAudioListener *_t = static_cast<QDeclarativeAudioListener *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEngine(*reinterpret_cast< QDeclarativeAudioEngine**>(_v)); break;
        case 1: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setDirection(*reinterpret_cast< QVector3D*>(_v)); break;
        case 3: _t->setVelocity(*reinterpret_cast< QVector3D*>(_v)); break;
        case 4: _t->setUp(*reinterpret_cast< QVector3D*>(_v)); break;
        case 5: _t->setGain(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativeAudioListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeAudioListener.data,
      qt_meta_data_QDeclarativeAudioListener,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeAudioListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeAudioListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAudioListener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeAudioListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeAudioListener::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeAudioListener::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeAudioListener::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeAudioListener::upChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QDeclarativeAudioListener::gainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
