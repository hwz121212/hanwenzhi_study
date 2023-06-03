/****************************************************************************
** Meta object code from reading C++ file 'qmlsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlSensor_t {
    QByteArrayData data[52];
    char stringdata0[846];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlSensor_t qt_meta_stringdata_QmlSensor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QmlSensor"
QT_MOC_LITERAL(1, 10, 17), // "identifierChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "typeChanged"
QT_MOC_LITERAL(4, 41, 25), // "connectedToBackendChanged"
QT_MOC_LITERAL(5, 67, 25), // "availableDataRatesChanged"
QT_MOC_LITERAL(6, 93, 15), // "dataRateChanged"
QT_MOC_LITERAL(7, 109, 14), // "readingChanged"
QT_MOC_LITERAL(8, 124, 13), // "activeChanged"
QT_MOC_LITERAL(9, 138, 19), // "outputRangesChanged"
QT_MOC_LITERAL(10, 158, 18), // "outputRangeChanged"
QT_MOC_LITERAL(11, 177, 18), // "descriptionChanged"
QT_MOC_LITERAL(12, 196, 12), // "errorChanged"
QT_MOC_LITERAL(13, 209, 15), // "alwaysOnChanged"
QT_MOC_LITERAL(14, 225, 21), // "skipDuplicatesChanged"
QT_MOC_LITERAL(15, 247, 14), // "skipDuplicates"
QT_MOC_LITERAL(16, 262, 26), // "axesOrientationModeChanged"
QT_MOC_LITERAL(17, 289, 19), // "AxesOrientationMode"
QT_MOC_LITERAL(18, 309, 19), // "axesOrientationMode"
QT_MOC_LITERAL(19, 329, 25), // "currentOrientationChanged"
QT_MOC_LITERAL(20, 355, 18), // "currentOrientation"
QT_MOC_LITERAL(21, 374, 22), // "userOrientationChanged"
QT_MOC_LITERAL(22, 397, 15), // "userOrientation"
QT_MOC_LITERAL(23, 413, 20), // "maxBufferSizeChanged"
QT_MOC_LITERAL(24, 434, 13), // "maxBufferSize"
QT_MOC_LITERAL(25, 448, 26), // "efficientBufferSizeChanged"
QT_MOC_LITERAL(26, 475, 19), // "efficientBufferSize"
QT_MOC_LITERAL(27, 495, 17), // "bufferSizeChanged"
QT_MOC_LITERAL(28, 513, 10), // "bufferSize"
QT_MOC_LITERAL(29, 524, 5), // "start"
QT_MOC_LITERAL(30, 530, 4), // "stop"
QT_MOC_LITERAL(31, 535, 13), // "updateReading"
QT_MOC_LITERAL(32, 549, 17), // "componentComplete"
QT_MOC_LITERAL(33, 567, 10), // "identifier"
QT_MOC_LITERAL(34, 578, 4), // "type"
QT_MOC_LITERAL(35, 583, 18), // "connectedToBackend"
QT_MOC_LITERAL(36, 602, 18), // "availableDataRates"
QT_MOC_LITERAL(37, 621, 32), // "QQmlListProperty<QmlSensorRange>"
QT_MOC_LITERAL(38, 654, 8), // "dataRate"
QT_MOC_LITERAL(39, 663, 7), // "reading"
QT_MOC_LITERAL(40, 671, 17), // "QmlSensorReading*"
QT_MOC_LITERAL(41, 689, 4), // "busy"
QT_MOC_LITERAL(42, 694, 6), // "active"
QT_MOC_LITERAL(43, 701, 12), // "outputRanges"
QT_MOC_LITERAL(44, 714, 38), // "QQmlListProperty<QmlSensorOut..."
QT_MOC_LITERAL(45, 753, 11), // "outputRange"
QT_MOC_LITERAL(46, 765, 11), // "description"
QT_MOC_LITERAL(47, 777, 5), // "error"
QT_MOC_LITERAL(48, 783, 8), // "alwaysOn"
QT_MOC_LITERAL(49, 792, 16), // "FixedOrientation"
QT_MOC_LITERAL(50, 809, 20), // "AutomaticOrientation"
QT_MOC_LITERAL(51, 830, 15) // "UserOrientation"

    },
    "QmlSensor\0identifierChanged\0\0typeChanged\0"
    "connectedToBackendChanged\0"
    "availableDataRatesChanged\0dataRateChanged\0"
    "readingChanged\0activeChanged\0"
    "outputRangesChanged\0outputRangeChanged\0"
    "descriptionChanged\0errorChanged\0"
    "alwaysOnChanged\0skipDuplicatesChanged\0"
    "skipDuplicates\0axesOrientationModeChanged\0"
    "AxesOrientationMode\0axesOrientationMode\0"
    "currentOrientationChanged\0currentOrientation\0"
    "userOrientationChanged\0userOrientation\0"
    "maxBufferSizeChanged\0maxBufferSize\0"
    "efficientBufferSizeChanged\0"
    "efficientBufferSize\0bufferSizeChanged\0"
    "bufferSize\0start\0stop\0updateReading\0"
    "componentComplete\0identifier\0type\0"
    "connectedToBackend\0availableDataRates\0"
    "QQmlListProperty<QmlSensorRange>\0"
    "dataRate\0reading\0QmlSensorReading*\0"
    "busy\0active\0outputRanges\0"
    "QQmlListProperty<QmlSensorOutputRange>\0"
    "outputRange\0description\0error\0alwaysOn\0"
    "FixedOrientation\0AutomaticOrientation\0"
    "UserOrientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlSensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
      20,  189, // properties
       1,  289, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  152,    2, 0x06 /* Public */,
       3,    0,  153,    2, 0x06 /* Public */,
       4,    0,  154,    2, 0x06 /* Public */,
       5,    0,  155,    2, 0x06 /* Public */,
       6,    0,  156,    2, 0x06 /* Public */,
       7,    0,  157,    2, 0x06 /* Public */,
       8,    0,  158,    2, 0x06 /* Public */,
       9,    0,  159,    2, 0x06 /* Public */,
      10,    0,  160,    2, 0x06 /* Public */,
      11,    0,  161,    2, 0x06 /* Public */,
      12,    0,  162,    2, 0x06 /* Public */,
      13,    0,  163,    2, 0x06 /* Public */,
      14,    1,  164,    2, 0x86 /* Public | MethodRevisioned */,
      16,    1,  167,    2, 0x86 /* Public | MethodRevisioned */,
      19,    1,  170,    2, 0x86 /* Public | MethodRevisioned */,
      21,    1,  173,    2, 0x86 /* Public | MethodRevisioned */,
      23,    1,  176,    2, 0x86 /* Public | MethodRevisioned */,
      25,    1,  179,    2, 0x86 /* Public | MethodRevisioned */,
      27,    1,  182,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      29,    0,  185,    2, 0x0a /* Public */,
      30,    0,  186,    2, 0x0a /* Public */,
      31,    0,  187,    2, 0x08 /* Private */,
      32,    0,  188,    2, 0x09 /* Protected */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       1,
       1,
       1,
       1,
       1,
       1,

 // slots: revision
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   28,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      33, QMetaType::QString, 0x00495103,
      34, QMetaType::QString, 0x00495001,
      35, QMetaType::Bool, 0x00495001,
      36, 0x80000000 | 37, 0x00495009,
      38, QMetaType::Int, 0x00495103,
      39, 0x80000000 | 40, 0x00495009,
      41, QMetaType::Bool, 0x00095001,
      42, QMetaType::Bool, 0x00495103,
      43, 0x80000000 | 44, 0x00495009,
      45, QMetaType::Int, 0x00495103,
      46, QMetaType::QString, 0x00495001,
      47, QMetaType::Int, 0x00495001,
      48, QMetaType::Bool, 0x00495103,
      15, QMetaType::Bool, 0x00c95103,
      18, 0x80000000 | 17, 0x00c9510b,
      20, QMetaType::Int, 0x00c95001,
      22, QMetaType::Int, 0x00c95103,
      24, QMetaType::Int, 0x00c95001,
      26, QMetaType::Int, 0x00c95001,
      28, QMetaType::Int, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       0,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       1,
       1,
       1,
       1,
       1,
       1,

 // enums: name, flags, count, data
      17, 0x0,    3,  293,

 // enum data: key, value
      49, uint(QmlSensor::FixedOrientation),
      50, uint(QmlSensor::AutomaticOrientation),
      51, uint(QmlSensor::UserOrientation),

       0        // eod
};

void QmlSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlSensor *_t = static_cast<QmlSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->identifierChanged(); break;
        case 1: _t->typeChanged(); break;
        case 2: _t->connectedToBackendChanged(); break;
        case 3: _t->availableDataRatesChanged(); break;
        case 4: _t->dataRateChanged(); break;
        case 5: _t->readingChanged(); break;
        case 6: _t->activeChanged(); break;
        case 7: _t->outputRangesChanged(); break;
        case 8: _t->outputRangeChanged(); break;
        case 9: _t->descriptionChanged(); break;
        case 10: _t->errorChanged(); break;
        case 11: _t->alwaysOnChanged(); break;
        case 12: _t->skipDuplicatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->axesOrientationModeChanged((*reinterpret_cast< AxesOrientationMode(*)>(_a[1]))); break;
        case 14: _t->currentOrientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->userOrientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->maxBufferSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->efficientBufferSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->bufferSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->stop(); break;
        case 21: _t->updateReading(); break;
        case 22: _t->componentComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::identifierChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::typeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::connectedToBackendChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::availableDataRatesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::dataRateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::readingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::activeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::outputRangesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::outputRangeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::descriptionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::errorChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::alwaysOnChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::skipDuplicatesChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(AxesOrientationMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::axesOrientationModeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::currentOrientationChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::userOrientationChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::maxBufferSizeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::efficientBufferSizeChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QmlSensor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensor::bufferSizeChanged)) {
                *result = 18;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlSensorReading* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlSensor *_t = static_cast<QmlSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->identifier(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isConnectedToBackend(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QmlSensorRange>*>(_v) = _t->availableDataRates(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->dataRate(); break;
        case 5: *reinterpret_cast< QmlSensorReading**>(_v) = _t->reading(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isBusy(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 8: *reinterpret_cast< QQmlListProperty<QmlSensorOutputRange>*>(_v) = _t->outputRanges(); break;
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
        QmlSensor *_t = static_cast<QmlSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIdentifier(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject QmlSensor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlSensor.data,
      qt_meta_data_QmlSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlSensor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
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
void QmlSensor::identifierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlSensor::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QmlSensor::connectedToBackendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QmlSensor::availableDataRatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QmlSensor::dataRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QmlSensor::readingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QmlSensor::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QmlSensor::outputRangesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QmlSensor::outputRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QmlSensor::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QmlSensor::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QmlSensor::alwaysOnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QmlSensor::skipDuplicatesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QmlSensor::axesOrientationModeChanged(AxesOrientationMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QmlSensor::currentOrientationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QmlSensor::userOrientationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QmlSensor::maxBufferSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QmlSensor::efficientBufferSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QmlSensor::bufferSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
struct qt_meta_stringdata_QmlSensorReading_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlSensorReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlSensorReading_t qt_meta_stringdata_QmlSensorReading = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QmlSensorReading"
QT_MOC_LITERAL(1, 17, 16), // "timestampChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9) // "timestamp"

    },
    "QmlSensorReading\0timestampChanged\0\0"
    "timestamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlSensorReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::ULongLong, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QmlSensorReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlSensorReading *_t = static_cast<QmlSensorReading *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timestampChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorReading::timestampChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlSensorReading *_t = static_cast<QmlSensorReading *>(_o);
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
    Q_UNUSED(_a);
}

const QMetaObject QmlSensorReading::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlSensorReading.data,
      qt_meta_data_QmlSensorReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlSensorReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlSensorReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlSensorReading.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlSensorReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void QmlSensorReading::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
