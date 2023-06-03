/****************************************************************************
** Meta object code from reading C++ file 'qorbitcameracontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qorbitcameracontroller_p.h"
#include "../../qorbitcameracontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qorbitcameracontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QOrbitCameraController_t {
    QByteArrayData data[12];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QOrbitCameraController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QOrbitCameraController_t qt_meta_stringdata_Qt3DExtras__QOrbitCameraController = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Qt3DExtras::QOrbitCameraContr..."
QT_MOC_LITERAL(1, 35, 13), // "cameraChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 18), // "linearSpeedChanged"
QT_MOC_LITERAL(4, 69, 16), // "lookSpeedChanged"
QT_MOC_LITERAL(5, 86, 18), // "zoomInLimitChanged"
QT_MOC_LITERAL(6, 105, 14), // "_q_onTriggered"
QT_MOC_LITERAL(7, 120, 6), // "camera"
QT_MOC_LITERAL(8, 127, 20), // "Qt3DRender::QCamera*"
QT_MOC_LITERAL(9, 148, 11), // "linearSpeed"
QT_MOC_LITERAL(10, 160, 9), // "lookSpeed"
QT_MOC_LITERAL(11, 170, 11) // "zoomInLimit"

    },
    "Qt3DExtras::QOrbitCameraController\0"
    "cameraChanged\0\0linearSpeedChanged\0"
    "lookSpeedChanged\0zoomInLimitChanged\0"
    "_q_onTriggered\0camera\0Qt3DRender::QCamera*\0"
    "linearSpeed\0lookSpeed\0zoomInLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QOrbitCameraController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Qt3DExtras::QOrbitCameraController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOrbitCameraController *_t = static_cast<QOrbitCameraController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraChanged(); break;
        case 1: _t->linearSpeedChanged(); break;
        case 2: _t->lookSpeedChanged(); break;
        case 3: _t->zoomInLimitChanged(); break;
        case 4: _t->d_func()->_q_onTriggered((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QOrbitCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOrbitCameraController::cameraChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QOrbitCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOrbitCameraController::linearSpeedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QOrbitCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOrbitCameraController::lookSpeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QOrbitCameraController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QOrbitCameraController::zoomInLimitChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QOrbitCameraController *_t = static_cast<QOrbitCameraController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QCamera**>(_v) = _t->camera(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->linearSpeed(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->lookSpeed(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->zoomInLimit(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QOrbitCameraController *_t = static_cast<QOrbitCameraController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCamera(*reinterpret_cast< Qt3DRender::QCamera**>(_v)); break;
        case 1: _t->setLinearSpeed(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setLookSpeed(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setZoomInLimit(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QOrbitCameraController::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QOrbitCameraController.data,
      qt_meta_data_Qt3DExtras__QOrbitCameraController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QOrbitCameraController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QOrbitCameraController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QOrbitCameraController.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int Qt3DExtras::QOrbitCameraController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
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
void Qt3DExtras::QOrbitCameraController::cameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Qt3DExtras::QOrbitCameraController::linearSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qt3DExtras::QOrbitCameraController::lookSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Qt3DExtras::QOrbitCameraController::zoomInLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
