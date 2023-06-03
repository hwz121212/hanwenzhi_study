/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativemultimediaglobal_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativemultimediaglobal_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativemultimediaglobal_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeMultimediaGlobal_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeMultimediaGlobal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeMultimediaGlobal_t qt_meta_stringdata_QDeclarativeMultimediaGlobal = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QDeclarativeMultimediaGlobal"
QT_MOC_LITERAL(1, 29, 20), // "defaultCameraChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 23), // "availableCamerasChanged"
QT_MOC_LITERAL(4, 75, 13), // "convertVolume"
QT_MOC_LITERAL(5, 89, 6), // "volume"
QT_MOC_LITERAL(6, 96, 11), // "VolumeScale"
QT_MOC_LITERAL(7, 108, 4), // "from"
QT_MOC_LITERAL(8, 113, 2), // "to"
QT_MOC_LITERAL(9, 116, 13), // "defaultCamera"
QT_MOC_LITERAL(10, 130, 8), // "QJSValue"
QT_MOC_LITERAL(11, 139, 16), // "availableCameras"
QT_MOC_LITERAL(12, 156, 17), // "LinearVolumeScale"
QT_MOC_LITERAL(13, 174, 16), // "CubicVolumeScale"
QT_MOC_LITERAL(14, 191, 22), // "LogarithmicVolumeScale"
QT_MOC_LITERAL(15, 214, 18) // "DecibelVolumeScale"

    },
    "QDeclarativeMultimediaGlobal\0"
    "defaultCameraChanged\0\0availableCamerasChanged\0"
    "convertVolume\0volume\0VolumeScale\0from\0"
    "to\0defaultCamera\0QJSValue\0availableCameras\0"
    "LinearVolumeScale\0CubicVolumeScale\0"
    "LogarithmicVolumeScale\0DecibelVolumeScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeMultimediaGlobal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    3,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QReal, QMetaType::QReal, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00495009,
      11, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       6, 0x0,    4,   50,

 // enum data: key, value
      12, uint(QDeclarativeMultimediaGlobal::LinearVolumeScale),
      13, uint(QDeclarativeMultimediaGlobal::CubicVolumeScale),
      14, uint(QDeclarativeMultimediaGlobal::LogarithmicVolumeScale),
      15, uint(QDeclarativeMultimediaGlobal::DecibelVolumeScale),

       0        // eod
};

void QDeclarativeMultimediaGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeMultimediaGlobal *_t = static_cast<QDeclarativeMultimediaGlobal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultCameraChanged(); break;
        case 1: _t->availableCamerasChanged(); break;
        case 2: { qreal _r = _t->convertVolume((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< VolumeScale(*)>(_a[2])),(*reinterpret_cast< VolumeScale(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeMultimediaGlobal::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeMultimediaGlobal::defaultCameraChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeMultimediaGlobal::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeMultimediaGlobal::availableCamerasChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeMultimediaGlobal *_t = static_cast<QDeclarativeMultimediaGlobal *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->defaultCamera(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = _t->availableCameras(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeMultimediaGlobal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeMultimediaGlobal.data,
      qt_meta_data_QDeclarativeMultimediaGlobal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeMultimediaGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeMultimediaGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeMultimediaGlobal.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeMultimediaGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeMultimediaGlobal::defaultCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeMultimediaGlobal::availableCamerasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
