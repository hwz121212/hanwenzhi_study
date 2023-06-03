/****************************************************************************
** Meta object code from reading C++ file 'qsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSensor_t {
    QByteArrayData data[58];
    char stringdata0[837];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSensor_t qt_meta_stringdata_QSensor = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QSensor"
QT_MOC_LITERAL(1, 8, 11), // "busyChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "activeChanged"
QT_MOC_LITERAL(4, 35, 14), // "readingChanged"
QT_MOC_LITERAL(5, 50, 11), // "sensorError"
QT_MOC_LITERAL(6, 62, 5), // "error"
QT_MOC_LITERAL(7, 68, 23), // "availableSensorsChanged"
QT_MOC_LITERAL(8, 92, 15), // "alwaysOnChanged"
QT_MOC_LITERAL(9, 108, 15), // "dataRateChanged"
QT_MOC_LITERAL(10, 124, 21), // "skipDuplicatesChanged"
QT_MOC_LITERAL(11, 146, 14), // "skipDuplicates"
QT_MOC_LITERAL(12, 161, 26), // "axesOrientationModeChanged"
QT_MOC_LITERAL(13, 188, 19), // "AxesOrientationMode"
QT_MOC_LITERAL(14, 208, 19), // "axesOrientationMode"
QT_MOC_LITERAL(15, 228, 25), // "currentOrientationChanged"
QT_MOC_LITERAL(16, 254, 18), // "currentOrientation"
QT_MOC_LITERAL(17, 273, 22), // "userOrientationChanged"
QT_MOC_LITERAL(18, 296, 15), // "userOrientation"
QT_MOC_LITERAL(19, 312, 20), // "maxBufferSizeChanged"
QT_MOC_LITERAL(20, 333, 13), // "maxBufferSize"
QT_MOC_LITERAL(21, 347, 26), // "efficientBufferSizeChanged"
QT_MOC_LITERAL(22, 374, 19), // "efficientBufferSize"
QT_MOC_LITERAL(23, 394, 17), // "bufferSizeChanged"
QT_MOC_LITERAL(24, 412, 10), // "bufferSize"
QT_MOC_LITERAL(25, 423, 5), // "start"
QT_MOC_LITERAL(26, 429, 4), // "stop"
QT_MOC_LITERAL(27, 434, 16), // "connectToBackend"
QT_MOC_LITERAL(28, 451, 18), // "isFeatureSupported"
QT_MOC_LITERAL(29, 470, 7), // "Feature"
QT_MOC_LITERAL(30, 478, 7), // "feature"
QT_MOC_LITERAL(31, 486, 10), // "identifier"
QT_MOC_LITERAL(32, 497, 4), // "type"
QT_MOC_LITERAL(33, 502, 18), // "connectedToBackend"
QT_MOC_LITERAL(34, 521, 18), // "availableDataRates"
QT_MOC_LITERAL(35, 540, 10), // "qrangelist"
QT_MOC_LITERAL(36, 551, 8), // "dataRate"
QT_MOC_LITERAL(37, 560, 7), // "reading"
QT_MOC_LITERAL(38, 568, 15), // "QSensorReading*"
QT_MOC_LITERAL(39, 584, 4), // "busy"
QT_MOC_LITERAL(40, 589, 6), // "active"
QT_MOC_LITERAL(41, 596, 12), // "outputRanges"
QT_MOC_LITERAL(42, 609, 16), // "qoutputrangelist"
QT_MOC_LITERAL(43, 626, 11), // "outputRange"
QT_MOC_LITERAL(44, 638, 11), // "description"
QT_MOC_LITERAL(45, 650, 8), // "alwaysOn"
QT_MOC_LITERAL(46, 659, 9), // "Buffering"
QT_MOC_LITERAL(47, 669, 8), // "AlwaysOn"
QT_MOC_LITERAL(48, 678, 9), // "GeoValues"
QT_MOC_LITERAL(49, 688, 11), // "FieldOfView"
QT_MOC_LITERAL(50, 700, 16), // "AccelerationMode"
QT_MOC_LITERAL(51, 717, 14), // "SkipDuplicates"
QT_MOC_LITERAL(52, 732, 15), // "AxesOrientation"
QT_MOC_LITERAL(53, 748, 25), // "PressureSensorTemperature"
QT_MOC_LITERAL(54, 774, 8), // "Reserved"
QT_MOC_LITERAL(55, 783, 16), // "FixedOrientation"
QT_MOC_LITERAL(56, 800, 20), // "AutomaticOrientation"
QT_MOC_LITERAL(57, 821, 15) // "UserOrientation"

    },
    "QSensor\0busyChanged\0\0activeChanged\0"
    "readingChanged\0sensorError\0error\0"
    "availableSensorsChanged\0alwaysOnChanged\0"
    "dataRateChanged\0skipDuplicatesChanged\0"
    "skipDuplicates\0axesOrientationModeChanged\0"
    "AxesOrientationMode\0axesOrientationMode\0"
    "currentOrientationChanged\0currentOrientation\0"
    "userOrientationChanged\0userOrientation\0"
    "maxBufferSizeChanged\0maxBufferSize\0"
    "efficientBufferSizeChanged\0"
    "efficientBufferSize\0bufferSizeChanged\0"
    "bufferSize\0start\0stop\0connectToBackend\0"
    "isFeatureSupported\0Feature\0feature\0"
    "identifier\0type\0connectedToBackend\0"
    "availableDataRates\0qrangelist\0dataRate\0"
    "reading\0QSensorReading*\0busy\0active\0"
    "outputRanges\0qoutputrangelist\0outputRange\0"
    "description\0alwaysOn\0Buffering\0AlwaysOn\0"
    "GeoValues\0FieldOfView\0AccelerationMode\0"
    "SkipDuplicates\0AxesOrientation\0"
    "PressureSensorTemperature\0Reserved\0"
    "FixedOrientation\0AutomaticOrientation\0"
    "UserOrientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      20,  140, // properties
       2,  220, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,
       7,    0,  110,    2, 0x06 /* Public */,
       8,    0,  111,    2, 0x06 /* Public */,
       9,    0,  112,    2, 0x06 /* Public */,
      10,    1,  113,    2, 0x06 /* Public */,
      12,    1,  116,    2, 0x06 /* Public */,
      15,    1,  119,    2, 0x06 /* Public */,
      17,    1,  122,    2, 0x06 /* Public */,
      19,    1,  125,    2, 0x06 /* Public */,
      21,    1,  128,    2, 0x06 /* Public */,
      23,    1,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  134,    2, 0x0a /* Public */,
      26,    0,  135,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      27,    0,  136,    2, 0x02 /* Public */,
      28,    1,  137,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 29,   30,

 // properties: name, type, flags
      31, QMetaType::QByteArray, 0x00095103,
      32, QMetaType::QByteArray, 0x00095001,
      33, QMetaType::Bool, 0x00095001,
      34, 0x80000000 | 35, 0x00095009,
      36, QMetaType::Int, 0x00495103,
      37, 0x80000000 | 38, 0x00495009,
      39, QMetaType::Bool, 0x00095001,
      40, QMetaType::Bool, 0x00495103,
      41, 0x80000000 | 42, 0x00095009,
      43, QMetaType::Int, 0x00095103,
      44, QMetaType::QString, 0x00095001,
       6, QMetaType::Int, 0x00495001,
      45, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      14, 0x80000000 | 13, 0x0049510b,
      16, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00495103,
      20, QMetaType::Int, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      24, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       6,
       2,
       0,
       1,
       0,
       0,
       0,
       3,
       5,
       7,
       8,
       9,
      10,
      11,
      12,
      13,

 // enums: name, flags, count, data
      29, 0x0,    9,  228,
      13, 0x0,    3,  246,

 // enum data: key, value
      46, uint(QSensor::Buffering),
      47, uint(QSensor::AlwaysOn),
      48, uint(QSensor::GeoValues),
      49, uint(QSensor::FieldOfView),
      50, uint(QSensor::AccelerationMode),
      51, uint(QSensor::SkipDuplicates),
      52, uint(QSensor::AxesOrientation),
      53, uint(QSensor::PressureSensorTemperature),
      54, uint(QSensor::Reserved),
      55, uint(QSensor::FixedOrientation),
      56, uint(QSensor::AutomaticOrientation),
      57, uint(QSensor::UserOrientation),

       0        // eod
};

void QSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSensor *_t = static_cast<QSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->busyChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->readingChanged(); break;
        case 3: _t->sensorError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->availableSensorsChanged(); break;
        case 5: _t->alwaysOnChanged(); break;
        case 6: _t->dataRateChanged(); break;
        case 7: _t->skipDuplicatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->axesOrientationModeChanged((*reinterpret_cast< AxesOrientationMode(*)>(_a[1]))); break;
        case 9: _t->currentOrientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->userOrientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->maxBufferSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->efficientBufferSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->bufferSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->stop(); break;
        case 16: { bool _r = _t->connectToBackend();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isFeatureSupported((*reinterpret_cast< Feature(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::busyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::readingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::sensorError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::availableSensorsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::alwaysOnChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::dataRateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::skipDuplicatesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(AxesOrientationMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::axesOrientationModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::currentOrientationChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::userOrientationChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::maxBufferSizeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::efficientBufferSizeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensor::bufferSizeChanged)) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSensorReading* >(); break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qoutputrangelist >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qrangelist >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSensor *_t = static_cast<QSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->identifier(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isConnectedToBackend(); break;
        case 3: *reinterpret_cast< qrangelist*>(_v) = _t->availableDataRates(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->dataRate(); break;
        case 5: *reinterpret_cast< QSensorReading**>(_v) = _t->reading(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isBusy(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 8: *reinterpret_cast< qoutputrangelist*>(_v) = _t->outputRanges(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->outputRange(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->error(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isAlwaysOn(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->skipDuplicates(); break;
        case 14: *reinterpret_cast< AxesOrientationMode*>(_v) = _t->axesOrientationMode(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->currentOrientation(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->userOrientation(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->maxBufferSize(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->efficientBufferSize(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->bufferSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSensor *_t = static_cast<QSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIdentifier(*reinterpret_cast< QByteArray*>(_v)); break;
        case 4: _t->setDataRate(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setOutputRange(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setAlwaysOn(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setSkipDuplicates(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setAxesOrientationMode(*reinterpret_cast< AxesOrientationMode*>(_v)); break;
        case 16: _t->setUserOrientation(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setBufferSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QSensor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSensor.data,
      qt_meta_data_QSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSensor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSensor::busyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSensor::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSensor::readingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QSensor::sensorError(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSensor::availableSensorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QSensor::alwaysOnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QSensor::dataRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QSensor::skipDuplicatesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSensor::axesOrientationModeChanged(AxesOrientationMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSensor::currentOrientationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSensor::userOrientationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QSensor::maxBufferSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QSensor::efficientBufferSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QSensor::bufferSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
struct qt_meta_stringdata_QSensorReading_t {
    QByteArrayData data[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSensorReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSensorReading_t qt_meta_stringdata_QSensorReading = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QSensorReading"
QT_MOC_LITERAL(1, 15, 9) // "timestamp"

    },
    "QSensorReading\0timestamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSensorReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::ULongLong, 0x00095001,

       0        // eod
};

void QSensorReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QSensorReading *_t = static_cast<QSensorReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint64*>(_v) = _t->timestamp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QSensorReading::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSensorReading.data,
      qt_meta_data_QSensorReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSensorReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSensorReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSensorReading.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSensorReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
