/****************************************************************************
** Meta object code from reading C++ file 'qcameraexposurecontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcameraexposurecontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcameraexposurecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCameraExposureControl_t {
    QByteArrayData data[18];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCameraExposureControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCameraExposureControl_t qt_meta_stringdata_QCameraExposureControl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QCameraExposureControl"
QT_MOC_LITERAL(1, 23, 21), // "requestedValueChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 9), // "parameter"
QT_MOC_LITERAL(4, 56, 18), // "actualValueChanged"
QT_MOC_LITERAL(5, 75, 21), // "parameterRangeChanged"
QT_MOC_LITERAL(6, 97, 17), // "ExposureParameter"
QT_MOC_LITERAL(7, 115, 3), // "ISO"
QT_MOC_LITERAL(8, 119, 8), // "Aperture"
QT_MOC_LITERAL(9, 128, 12), // "ShutterSpeed"
QT_MOC_LITERAL(10, 141, 20), // "ExposureCompensation"
QT_MOC_LITERAL(11, 162, 10), // "FlashPower"
QT_MOC_LITERAL(12, 173, 17), // "FlashCompensation"
QT_MOC_LITERAL(13, 191, 10), // "TorchPower"
QT_MOC_LITERAL(14, 202, 17), // "SpotMeteringPoint"
QT_MOC_LITERAL(15, 220, 12), // "ExposureMode"
QT_MOC_LITERAL(16, 233, 12), // "MeteringMode"
QT_MOC_LITERAL(17, 246, 25) // "ExtendedExposureParameter"

    },
    "QCameraExposureControl\0requestedValueChanged\0"
    "\0parameter\0actualValueChanged\0"
    "parameterRangeChanged\0ExposureParameter\0"
    "ISO\0Aperture\0ShutterSpeed\0"
    "ExposureCompensation\0FlashPower\0"
    "FlashCompensation\0TorchPower\0"
    "SpotMeteringPoint\0ExposureMode\0"
    "MeteringMode\0ExtendedExposureParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCameraExposureControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // enums: name, flags, count, data
       6, 0x0,   11,   42,

 // enum data: key, value
       7, uint(QCameraExposureControl::ISO),
       8, uint(QCameraExposureControl::Aperture),
       9, uint(QCameraExposureControl::ShutterSpeed),
      10, uint(QCameraExposureControl::ExposureCompensation),
      11, uint(QCameraExposureControl::FlashPower),
      12, uint(QCameraExposureControl::FlashCompensation),
      13, uint(QCameraExposureControl::TorchPower),
      14, uint(QCameraExposureControl::SpotMeteringPoint),
      15, uint(QCameraExposureControl::ExposureMode),
      16, uint(QCameraExposureControl::MeteringMode),
      17, uint(QCameraExposureControl::ExtendedExposureParameter),

       0        // eod
};

void QCameraExposureControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCameraExposureControl *_t = static_cast<QCameraExposureControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestedValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->actualValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->parameterRangeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCameraExposureControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraExposureControl::requestedValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCameraExposureControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraExposureControl::actualValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCameraExposureControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraExposureControl::parameterRangeChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QCameraExposureControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QCameraExposureControl.data,
      qt_meta_data_QCameraExposureControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCameraExposureControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCameraExposureControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCameraExposureControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QCameraExposureControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
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
void QCameraExposureControl::requestedValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCameraExposureControl::actualValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCameraExposureControl::parameterRangeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
