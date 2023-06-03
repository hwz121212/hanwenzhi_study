/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativecameraflash_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativecameraflash_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativecameraflash_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeCameraFlash_t {
    QByteArrayData data[23];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeCameraFlash_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeCameraFlash_t qt_meta_stringdata_QDeclarativeCameraFlash = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QDeclarativeCameraFlash"
QT_MOC_LITERAL(1, 24, 10), // "flashReady"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "status"
QT_MOC_LITERAL(4, 43, 16), // "flashModeChanged"
QT_MOC_LITERAL(5, 60, 9), // "FlashMode"
QT_MOC_LITERAL(6, 70, 21), // "supportedModesChanged"
QT_MOC_LITERAL(7, 92, 12), // "setFlashMode"
QT_MOC_LITERAL(8, 105, 22), // "_q_cameraStatusChanged"
QT_MOC_LITERAL(9, 128, 15), // "QCamera::Status"
QT_MOC_LITERAL(10, 144, 5), // "ready"
QT_MOC_LITERAL(11, 150, 4), // "mode"
QT_MOC_LITERAL(12, 155, 14), // "supportedModes"
QT_MOC_LITERAL(13, 170, 9), // "FlashAuto"
QT_MOC_LITERAL(14, 180, 8), // "FlashOff"
QT_MOC_LITERAL(15, 189, 7), // "FlashOn"
QT_MOC_LITERAL(16, 197, 20), // "FlashRedEyeReduction"
QT_MOC_LITERAL(17, 218, 9), // "FlashFill"
QT_MOC_LITERAL(18, 228, 10), // "FlashTorch"
QT_MOC_LITERAL(19, 239, 15), // "FlashVideoLight"
QT_MOC_LITERAL(20, 255, 25), // "FlashSlowSyncFrontCurtain"
QT_MOC_LITERAL(21, 281, 24), // "FlashSlowSyncRearCurtain"
QT_MOC_LITERAL(22, 306, 11) // "FlashManual"

    },
    "QDeclarativeCameraFlash\0flashReady\0\0"
    "status\0flashModeChanged\0FlashMode\0"
    "supportedModesChanged\0setFlashMode\0"
    "_q_cameraStatusChanged\0QCamera::Status\0"
    "ready\0mode\0supportedModes\0FlashAuto\0"
    "FlashOff\0FlashOn\0FlashRedEyeReduction\0"
    "FlashFill\0FlashTorch\0FlashVideoLight\0"
    "FlashSlowSyncFrontCurtain\0"
    "FlashSlowSyncRearCurtain\0FlashManual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeCameraFlash[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   52, // properties
       1,   67, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x0a /* Public */,
       8,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 9,    3,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495001,
      11, 0x80000000 | 5, 0x0049500b,
      12, QMetaType::QVariantList, 0x00c95001,

 // properties: notify_signal_id
       0,
       1,
       2,

 // properties: revision
       0,
       0,
       1,

 // enums: name, flags, count, data
       5, 0x0,   10,   71,

 // enum data: key, value
      13, uint(QDeclarativeCameraFlash::FlashAuto),
      14, uint(QDeclarativeCameraFlash::FlashOff),
      15, uint(QDeclarativeCameraFlash::FlashOn),
      16, uint(QDeclarativeCameraFlash::FlashRedEyeReduction),
      17, uint(QDeclarativeCameraFlash::FlashFill),
      18, uint(QDeclarativeCameraFlash::FlashTorch),
      19, uint(QDeclarativeCameraFlash::FlashVideoLight),
      20, uint(QDeclarativeCameraFlash::FlashSlowSyncFrontCurtain),
      21, uint(QDeclarativeCameraFlash::FlashSlowSyncRearCurtain),
      22, uint(QDeclarativeCameraFlash::FlashManual),

       0        // eod
};

void QDeclarativeCameraFlash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeCameraFlash *_t = static_cast<QDeclarativeCameraFlash *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flashReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->flashModeChanged((*reinterpret_cast< FlashMode(*)>(_a[1]))); break;
        case 2: _t->supportedModesChanged(); break;
        case 3: _t->setFlashMode((*reinterpret_cast< FlashMode(*)>(_a[1]))); break;
        case 4: _t->_q_cameraStatusChanged((*reinterpret_cast< QCamera::Status(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Status >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeCameraFlash::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraFlash::flashReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeCameraFlash::*_t)(FlashMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraFlash::flashModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeCameraFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraFlash::supportedModesChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeCameraFlash *_t = static_cast<QDeclarativeCameraFlash *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isFlashReady(); break;
        case 1: *reinterpret_cast< FlashMode*>(_v) = _t->flashMode(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->supportedModes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeCameraFlash *_t = static_cast<QDeclarativeCameraFlash *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFlashMode(*reinterpret_cast< FlashMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeCameraFlash::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeCameraFlash.data,
      qt_meta_data_QDeclarativeCameraFlash,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeCameraFlash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeCameraFlash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeCameraFlash.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeCameraFlash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeCameraFlash::flashReady(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeCameraFlash::flashModeChanged(FlashMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeCameraFlash::supportedModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
