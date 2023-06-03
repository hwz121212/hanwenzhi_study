/****************************************************************************
** Meta object code from reading C++ file 'qfirstpersoncameracontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qfirstpersoncameracontroller_p.h"
#include "../../qfirstpersoncameracontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfirstpersoncameracontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QFirstPersonCameraController_t {
    QByteArrayData data[14];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QFirstPersonCameraController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QFirstPersonCameraController_t qt_meta_stringdata_Qt3DExtras__QFirstPersonCameraController = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Qt3DExtras::QFirstPersonCamer..."
QT_MOC_LITERAL(1, 41, 13), // "cameraChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 18), // "linearSpeedChanged"
QT_MOC_LITERAL(4, 75, 16), // "lookSpeedChanged"
QT_MOC_LITERAL(5, 92, 19), // "accelerationChanged"
QT_MOC_LITERAL(6, 112, 12), // "acceleration"
QT_MOC_LITERAL(7, 125, 19), // "decelerationChanged"
QT_MOC_LITERAL(8, 145, 12), // "deceleration"
QT_MOC_LITERAL(9, 158, 14), // "_q_onTriggered"
QT_MOC_LITERAL(10, 173, 6), // "camera"
QT_MOC_LITERAL(11, 180, 20), // "Qt3DRender::QCamera*"
QT_MOC_LITERAL(12, 201, 11), // "linearSpeed"
QT_MOC_LITERAL(13, 213, 9) // "lookSpeed"

    },
    "Qt3DExtras::QFirstPersonCameraController\0"
    "cameraChanged\0\0linearSpeedChanged\0"
    "lookSpeedChanged\0accelerationChanged\0"
    "acceleration\0decelerationChanged\0"
    "deceleration\0_q_onTriggered\0camera\0"
    "Qt3DRender::QCamera*\0linearSpeed\0"
    "lookSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QFirstPersonCameraController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,
       6, QMetaType::Float, 0x00495103,
       8, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Qt3DExtras::QFirstPersonCameraController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFirstPersonCameraController *_t = static_cast<QFirstPersonCameraController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraChanged(); break;
        case 1: _t->linearSpeedChanged(); break;
        case 2: _t->lookSpeedChanged(); break;
        case 3: _t->accelerationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->decelerationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_onTriggered((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QFirstPersonCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QFirstPersonCameraController::cameraChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFirstPersonCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QFirstPersonCameraController::linearSpeedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QFirstPersonCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QFirstPersonCameraController::lookSpeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QFirstPersonCameraController::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QFirstPersonCameraController::accelerationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QFirstPersonCameraController::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QFirstPersonCameraController::decelerationChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QFirstPersonCameraController *_t = static_cast<QFirstPersonCameraController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QCamera**>(_v) = _t->camera(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->linearSpeed(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->lookSpeed(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->acceleration(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->deceleration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QFirstPersonCameraController *_t = static_cast<QFirstPersonCameraController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCamera(*reinterpret_cast< Qt3DRender::QCamera**>(_v)); break;
        case 1: _t->setLinearSpeed(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setLookSpeed(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setAcceleration(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setDeceleration(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QFirstPersonCameraController::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QFirstPersonCameraController.data,
      qt_meta_data_Qt3DExtras__QFirstPersonCameraController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QFirstPersonCameraController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QFirstPersonCameraController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QFirstPersonCameraController.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int Qt3DExtras::QFirstPersonCameraController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DExtras::QFirstPersonCameraController::cameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Qt3DExtras::QFirstPersonCameraController::linearSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qt3DExtras::QFirstPersonCameraController::lookSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Qt3DExtras::QFirstPersonCameraController::accelerationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DExtras::QFirstPersonCameraController::decelerationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
