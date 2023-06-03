/****************************************************************************
** Meta object code from reading C++ file 'qradiotunercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qradiotunercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qradiotunercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRadioTunerControl_t {
    QByteArrayData data[27];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRadioTunerControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRadioTunerControl_t qt_meta_stringdata_QRadioTunerControl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QRadioTunerControl"
QT_MOC_LITERAL(1, 19, 12), // "stateChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "QRadioTuner::State"
QT_MOC_LITERAL(4, 52, 5), // "state"
QT_MOC_LITERAL(5, 58, 11), // "bandChanged"
QT_MOC_LITERAL(6, 70, 17), // "QRadioTuner::Band"
QT_MOC_LITERAL(7, 88, 4), // "band"
QT_MOC_LITERAL(8, 93, 16), // "frequencyChanged"
QT_MOC_LITERAL(9, 110, 9), // "frequency"
QT_MOC_LITERAL(10, 120, 19), // "stereoStatusChanged"
QT_MOC_LITERAL(11, 140, 6), // "stereo"
QT_MOC_LITERAL(12, 147, 16), // "searchingChanged"
QT_MOC_LITERAL(13, 164, 9), // "searching"
QT_MOC_LITERAL(14, 174, 21), // "signalStrengthChanged"
QT_MOC_LITERAL(15, 196, 14), // "signalStrength"
QT_MOC_LITERAL(16, 211, 13), // "volumeChanged"
QT_MOC_LITERAL(17, 225, 6), // "volume"
QT_MOC_LITERAL(18, 232, 12), // "mutedChanged"
QT_MOC_LITERAL(19, 245, 5), // "muted"
QT_MOC_LITERAL(20, 251, 5), // "error"
QT_MOC_LITERAL(21, 257, 18), // "QRadioTuner::Error"
QT_MOC_LITERAL(22, 276, 3), // "err"
QT_MOC_LITERAL(23, 280, 12), // "stationFound"
QT_MOC_LITERAL(24, 293, 9), // "stationId"
QT_MOC_LITERAL(25, 303, 23), // "antennaConnectedChanged"
QT_MOC_LITERAL(26, 327, 16) // "connectionStatus"

    },
    "QRadioTunerControl\0stateChanged\0\0"
    "QRadioTuner::State\0state\0bandChanged\0"
    "QRadioTuner::Band\0band\0frequencyChanged\0"
    "frequency\0stereoStatusChanged\0stereo\0"
    "searchingChanged\0searching\0"
    "signalStrengthChanged\0signalStrength\0"
    "volumeChanged\0volume\0mutedChanged\0"
    "muted\0error\0QRadioTuner::Error\0err\0"
    "stationFound\0stationId\0antennaConnectedChanged\0"
    "connectionStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRadioTunerControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       8,    1,   75,    2, 0x06 /* Public */,
      10,    1,   78,    2, 0x06 /* Public */,
      12,    1,   81,    2, 0x06 /* Public */,
      14,    1,   84,    2, 0x06 /* Public */,
      16,    1,   87,    2, 0x06 /* Public */,
      18,    1,   90,    2, 0x06 /* Public */,
      20,    1,   93,    2, 0x06 /* Public */,
      23,    2,   96,    2, 0x06 /* Public */,
      25,    1,  101,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   24,
    QMetaType::Void, QMetaType::Bool,   26,

       0        // eod
};

void QRadioTunerControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRadioTunerControl *_t = static_cast<QRadioTunerControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QRadioTuner::State(*)>(_a[1]))); break;
        case 1: _t->bandChanged((*reinterpret_cast< QRadioTuner::Band(*)>(_a[1]))); break;
        case 2: _t->frequencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->stereoStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->searchingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->signalStrengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->error((*reinterpret_cast< QRadioTuner::Error(*)>(_a[1]))); break;
        case 9: _t->stationFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->antennaConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Band >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRadioTunerControl::*_t)(QRadioTuner::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(QRadioTuner::Band );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::bandChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::frequencyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::stereoStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::searchingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::signalStrengthChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::volumeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::mutedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(QRadioTuner::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::error)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::stationFound)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QRadioTunerControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioTunerControl::antennaConnectedChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject QRadioTunerControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QRadioTunerControl.data,
      qt_meta_data_QRadioTunerControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRadioTunerControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRadioTunerControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRadioTunerControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QRadioTunerControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QRadioTunerControl::stateChanged(QRadioTuner::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRadioTunerControl::bandChanged(QRadioTuner::Band _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QRadioTunerControl::frequencyChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QRadioTunerControl::stereoStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QRadioTunerControl::searchingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QRadioTunerControl::signalStrengthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QRadioTunerControl::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QRadioTunerControl::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QRadioTunerControl::error(QRadioTuner::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QRadioTunerControl::stationFound(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QRadioTunerControl::antennaConnectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
