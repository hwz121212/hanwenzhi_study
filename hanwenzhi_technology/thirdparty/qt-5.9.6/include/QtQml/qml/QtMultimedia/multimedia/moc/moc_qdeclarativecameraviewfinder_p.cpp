/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativecameraviewfinder_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativecameraviewfinder_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativecameraviewfinder_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeCameraViewfinder_t {
    QByteArrayData data[11];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeCameraViewfinder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeCameraViewfinder_t qt_meta_stringdata_QDeclarativeCameraViewfinder = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QDeclarativeCameraViewfinder"
QT_MOC_LITERAL(1, 29, 17), // "resolutionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 23), // "minimumFrameRateChanged"
QT_MOC_LITERAL(4, 72, 23), // "maximumFrameRateChanged"
QT_MOC_LITERAL(5, 96, 22), // "_q_cameraStatusChanged"
QT_MOC_LITERAL(6, 119, 15), // "QCamera::Status"
QT_MOC_LITERAL(7, 135, 6), // "status"
QT_MOC_LITERAL(8, 142, 10), // "resolution"
QT_MOC_LITERAL(9, 153, 16), // "minimumFrameRate"
QT_MOC_LITERAL(10, 170, 16) // "maximumFrameRate"

    },
    "QDeclarativeCameraViewfinder\0"
    "resolutionChanged\0\0minimumFrameRateChanged\0"
    "maximumFrameRateChanged\0_q_cameraStatusChanged\0"
    "QCamera::Status\0status\0resolution\0"
    "minimumFrameRate\0maximumFrameRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeCameraViewfinder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::QSize, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      10, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QDeclarativeCameraViewfinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeCameraViewfinder *_t = static_cast<QDeclarativeCameraViewfinder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resolutionChanged(); break;
        case 1: _t->minimumFrameRateChanged(); break;
        case 2: _t->maximumFrameRateChanged(); break;
        case 3: _t->_q_cameraStatusChanged((*reinterpret_cast< QCamera::Status(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (QDeclarativeCameraViewfinder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraViewfinder::resolutionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeCameraViewfinder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraViewfinder::minimumFrameRateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeCameraViewfinder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraViewfinder::maximumFrameRateChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeCameraViewfinder *_t = static_cast<QDeclarativeCameraViewfinder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->minimumFrameRate(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->maximumFrameRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeCameraViewfinder *_t = static_cast<QDeclarativeCameraViewfinder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResolution(*reinterpret_cast< QSize*>(_v)); break;
        case 1: _t->setMinimumFrameRate(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setMaximumFrameRate(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeCameraViewfinder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeCameraViewfinder.data,
      qt_meta_data_QDeclarativeCameraViewfinder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeCameraViewfinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeCameraViewfinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeCameraViewfinder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeCameraViewfinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void QDeclarativeCameraViewfinder::resolutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeCameraViewfinder::minimumFrameRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeCameraViewfinder::maximumFrameRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
