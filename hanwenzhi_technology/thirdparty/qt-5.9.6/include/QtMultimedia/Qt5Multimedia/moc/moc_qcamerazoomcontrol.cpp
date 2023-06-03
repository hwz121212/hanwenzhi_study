/****************************************************************************
** Meta object code from reading C++ file 'qcamerazoomcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcamerazoomcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcamerazoomcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCameraZoomControl_t {
    QByteArrayData data[10];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCameraZoomControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCameraZoomControl_t qt_meta_stringdata_QCameraZoomControl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QCameraZoomControl"
QT_MOC_LITERAL(1, 19, 25), // "maximumOpticalZoomChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "maximumDigitalZoomChanged"
QT_MOC_LITERAL(4, 72, 27), // "requestedOpticalZoomChanged"
QT_MOC_LITERAL(5, 100, 11), // "opticalZoom"
QT_MOC_LITERAL(6, 112, 27), // "requestedDigitalZoomChanged"
QT_MOC_LITERAL(7, 140, 11), // "digitalZoom"
QT_MOC_LITERAL(8, 152, 25), // "currentOpticalZoomChanged"
QT_MOC_LITERAL(9, 178, 25) // "currentDigitalZoomChanged"

    },
    "QCameraZoomControl\0maximumOpticalZoomChanged\0"
    "\0maximumDigitalZoomChanged\0"
    "requestedOpticalZoomChanged\0opticalZoom\0"
    "requestedDigitalZoomChanged\0digitalZoom\0"
    "currentOpticalZoomChanged\0"
    "currentDigitalZoomChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCameraZoomControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       8,    1,   56,    2, 0x06 /* Public */,
       9,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,

       0        // eod
};

void QCameraZoomControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCameraZoomControl *_t = static_cast<QCameraZoomControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maximumOpticalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->maximumDigitalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->requestedOpticalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->requestedDigitalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->currentOpticalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->currentDigitalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCameraZoomControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraZoomControl::maximumOpticalZoomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCameraZoomControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraZoomControl::maximumDigitalZoomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCameraZoomControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraZoomControl::requestedOpticalZoomChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCameraZoomControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraZoomControl::requestedDigitalZoomChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCameraZoomControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraZoomControl::currentOpticalZoomChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCameraZoomControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraZoomControl::currentDigitalZoomChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QCameraZoomControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QCameraZoomControl.data,
      qt_meta_data_QCameraZoomControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCameraZoomControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCameraZoomControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCameraZoomControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QCameraZoomControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QCameraZoomControl::maximumOpticalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCameraZoomControl::maximumDigitalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCameraZoomControl::requestedOpticalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCameraZoomControl::requestedDigitalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCameraZoomControl::currentOpticalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCameraZoomControl::currentDigitalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
