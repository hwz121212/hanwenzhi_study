/****************************************************************************
** Meta object code from reading C++ file 'qradiodatacontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qradiodatacontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qradiodatacontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRadioDataControl_t {
    QByteArrayData data[18];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRadioDataControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRadioDataControl_t qt_meta_stringdata_QRadioDataControl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QRadioDataControl"
QT_MOC_LITERAL(1, 18, 16), // "stationIdChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "stationId"
QT_MOC_LITERAL(4, 46, 18), // "programTypeChanged"
QT_MOC_LITERAL(5, 65, 23), // "QRadioData::ProgramType"
QT_MOC_LITERAL(6, 89, 11), // "programType"
QT_MOC_LITERAL(7, 101, 22), // "programTypeNameChanged"
QT_MOC_LITERAL(8, 124, 15), // "programTypeName"
QT_MOC_LITERAL(9, 140, 18), // "stationNameChanged"
QT_MOC_LITERAL(10, 159, 11), // "stationName"
QT_MOC_LITERAL(11, 171, 16), // "radioTextChanged"
QT_MOC_LITERAL(12, 188, 9), // "radioText"
QT_MOC_LITERAL(13, 198, 36), // "alternativeFrequenciesEnabled..."
QT_MOC_LITERAL(14, 235, 7), // "enabled"
QT_MOC_LITERAL(15, 243, 5), // "error"
QT_MOC_LITERAL(16, 249, 17), // "QRadioData::Error"
QT_MOC_LITERAL(17, 267, 3) // "err"

    },
    "QRadioDataControl\0stationIdChanged\0\0"
    "stationId\0programTypeChanged\0"
    "QRadioData::ProgramType\0programType\0"
    "programTypeNameChanged\0programTypeName\0"
    "stationNameChanged\0stationName\0"
    "radioTextChanged\0radioText\0"
    "alternativeFrequenciesEnabledChanged\0"
    "enabled\0error\0QRadioData::Error\0err"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRadioDataControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       9,    1,   58,    2, 0x06 /* Public */,
      11,    1,   61,    2, 0x06 /* Public */,
      13,    1,   64,    2, 0x06 /* Public */,
      15,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void QRadioDataControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRadioDataControl *_t = static_cast<QRadioDataControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stationIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->programTypeChanged((*reinterpret_cast< QRadioData::ProgramType(*)>(_a[1]))); break;
        case 2: _t->programTypeNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->stationNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->radioTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->alternativeFrequenciesEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< QRadioData::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData::ProgramType >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRadioDataControl::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::stationIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRadioDataControl::*_t)(QRadioData::ProgramType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::programTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QRadioDataControl::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::programTypeNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QRadioDataControl::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::stationNameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QRadioDataControl::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::radioTextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QRadioDataControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::alternativeFrequenciesEnabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QRadioDataControl::*_t)(QRadioData::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRadioDataControl::error)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QRadioDataControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QRadioDataControl.data,
      qt_meta_data_QRadioDataControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRadioDataControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRadioDataControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRadioDataControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QRadioDataControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QRadioDataControl::stationIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRadioDataControl::programTypeChanged(QRadioData::ProgramType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QRadioDataControl::programTypeNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QRadioDataControl::stationNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QRadioDataControl::radioTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QRadioDataControl::alternativeFrequenciesEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QRadioDataControl::error(QRadioData::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
