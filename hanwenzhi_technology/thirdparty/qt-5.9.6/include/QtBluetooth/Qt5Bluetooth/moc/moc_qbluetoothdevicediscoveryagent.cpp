/****************************************************************************
** Meta object code from reading C++ file 'qbluetoothdevicediscoveryagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qbluetoothdevicediscoveryagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbluetoothdevicediscoveryagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QBluetoothDeviceDiscoveryAgent_t {
    QByteArrayData data[29];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBluetoothDeviceDiscoveryAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBluetoothDeviceDiscoveryAgent_t qt_meta_stringdata_QBluetoothDeviceDiscoveryAgent = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QBluetoothDeviceDiscoveryAgent"
QT_MOC_LITERAL(1, 31, 16), // "deviceDiscovered"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(4, 70, 4), // "info"
QT_MOC_LITERAL(5, 75, 8), // "finished"
QT_MOC_LITERAL(6, 84, 5), // "error"
QT_MOC_LITERAL(7, 90, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(8, 128, 8), // "canceled"
QT_MOC_LITERAL(9, 137, 5), // "start"
QT_MOC_LITERAL(10, 143, 16), // "DiscoveryMethods"
QT_MOC_LITERAL(11, 160, 6), // "method"
QT_MOC_LITERAL(12, 167, 4), // "stop"
QT_MOC_LITERAL(13, 172, 11), // "inquiryType"
QT_MOC_LITERAL(14, 184, 43), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(15, 228, 5), // "Error"
QT_MOC_LITERAL(16, 234, 7), // "NoError"
QT_MOC_LITERAL(17, 242, 16), // "InputOutputError"
QT_MOC_LITERAL(18, 259, 15), // "PoweredOffError"
QT_MOC_LITERAL(19, 275, 28), // "InvalidBluetoothAdapterError"
QT_MOC_LITERAL(20, 304, 24), // "UnsupportedPlatformError"
QT_MOC_LITERAL(21, 329, 26), // "UnsupportedDiscoveryMethod"
QT_MOC_LITERAL(22, 356, 12), // "UnknownError"
QT_MOC_LITERAL(23, 369, 11), // "InquiryType"
QT_MOC_LITERAL(24, 381, 23), // "GeneralUnlimitedInquiry"
QT_MOC_LITERAL(25, 405, 14), // "LimitedInquiry"
QT_MOC_LITERAL(26, 420, 8), // "NoMethod"
QT_MOC_LITERAL(27, 429, 13), // "ClassicMethod"
QT_MOC_LITERAL(28, 443, 15) // "LowEnergyMethod"

    },
    "QBluetoothDeviceDiscoveryAgent\0"
    "deviceDiscovered\0\0QBluetoothDeviceInfo\0"
    "info\0finished\0error\0"
    "QBluetoothDeviceDiscoveryAgent::Error\0"
    "canceled\0start\0DiscoveryMethods\0method\0"
    "stop\0inquiryType\0"
    "QBluetoothDeviceDiscoveryAgent::InquiryType\0"
    "Error\0NoError\0InputOutputError\0"
    "PoweredOffError\0InvalidBluetoothAdapterError\0"
    "UnsupportedPlatformError\0"
    "UnsupportedDiscoveryMethod\0UnknownError\0"
    "InquiryType\0GeneralUnlimitedInquiry\0"
    "LimitedInquiry\0NoMethod\0ClassicMethod\0"
    "LowEnergyMethod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBluetoothDeviceDiscoveryAgent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   62, // properties
       3,   65, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       8,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      12,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0009510b,

 // enums: name, flags, count, data
      15, 0x0,    7,   77,
      23, 0x0,    2,   91,
      10, 0x1,    3,   95,

 // enum data: key, value
      16, uint(QBluetoothDeviceDiscoveryAgent::NoError),
      17, uint(QBluetoothDeviceDiscoveryAgent::InputOutputError),
      18, uint(QBluetoothDeviceDiscoveryAgent::PoweredOffError),
      19, uint(QBluetoothDeviceDiscoveryAgent::InvalidBluetoothAdapterError),
      20, uint(QBluetoothDeviceDiscoveryAgent::UnsupportedPlatformError),
      21, uint(QBluetoothDeviceDiscoveryAgent::UnsupportedDiscoveryMethod),
      22, uint(QBluetoothDeviceDiscoveryAgent::UnknownError),
      24, uint(QBluetoothDeviceDiscoveryAgent::GeneralUnlimitedInquiry),
      25, uint(QBluetoothDeviceDiscoveryAgent::LimitedInquiry),
      26, uint(QBluetoothDeviceDiscoveryAgent::NoMethod),
      27, uint(QBluetoothDeviceDiscoveryAgent::ClassicMethod),
      28, uint(QBluetoothDeviceDiscoveryAgent::LowEnergyMethod),

       0        // eod
};

void QBluetoothDeviceDiscoveryAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBluetoothDeviceDiscoveryAgent *_t = static_cast<QBluetoothDeviceDiscoveryAgent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 3: _t->canceled(); break;
        case 4: _t->start(); break;
        case 5: _t->start((*reinterpret_cast< DiscoveryMethods(*)>(_a[1]))); break;
        case 6: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBluetoothDeviceDiscoveryAgent::*_t)(const QBluetoothDeviceInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothDeviceDiscoveryAgent::deviceDiscovered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBluetoothDeviceDiscoveryAgent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothDeviceDiscoveryAgent::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBluetoothDeviceDiscoveryAgent::*_t)(QBluetoothDeviceDiscoveryAgent::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothDeviceDiscoveryAgent::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBluetoothDeviceDiscoveryAgent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothDeviceDiscoveryAgent::canceled)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBluetoothDeviceDiscoveryAgent *_t = static_cast<QBluetoothDeviceDiscoveryAgent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBluetoothDeviceDiscoveryAgent::InquiryType*>(_v) = _t->inquiryType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QBluetoothDeviceDiscoveryAgent *_t = static_cast<QBluetoothDeviceDiscoveryAgent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInquiryType(*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::InquiryType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QBluetoothDeviceDiscoveryAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBluetoothDeviceDiscoveryAgent.data,
      qt_meta_data_QBluetoothDeviceDiscoveryAgent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QBluetoothDeviceDiscoveryAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBluetoothDeviceDiscoveryAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QBluetoothDeviceDiscoveryAgent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QBluetoothDeviceDiscoveryAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void QBluetoothDeviceDiscoveryAgent::deviceDiscovered(const QBluetoothDeviceInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBluetoothDeviceDiscoveryAgent::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QBluetoothDeviceDiscoveryAgent::error(QBluetoothDeviceDiscoveryAgent::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QBluetoothDeviceDiscoveryAgent::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
