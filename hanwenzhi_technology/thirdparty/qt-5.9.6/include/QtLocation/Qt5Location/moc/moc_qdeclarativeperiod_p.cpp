/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeperiod_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativeperiod_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeperiod_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativePeriod_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePeriod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePeriod_t qt_meta_stringdata_QDeclarativePeriod = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QDeclarativePeriod"
QT_MOC_LITERAL(1, 19, 16), // "startDateChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "startTimeChanged"
QT_MOC_LITERAL(4, 54, 14), // "endDateChanged"
QT_MOC_LITERAL(5, 69, 14), // "endTimeChanged"
QT_MOC_LITERAL(6, 84, 9), // "startDate"
QT_MOC_LITERAL(7, 94, 9), // "startTime"
QT_MOC_LITERAL(8, 104, 7), // "endDate"
QT_MOC_LITERAL(9, 112, 7) // "endTime"

    },
    "QDeclarativePeriod\0startDateChanged\0"
    "\0startTimeChanged\0endDateChanged\0"
    "endTimeChanged\0startDate\0startTime\0"
    "endDate\0endTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePeriod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QDate, 0x00495103,
       7, QMetaType::QTime, 0x00495103,
       8, QMetaType::QDate, 0x00495103,
       9, QMetaType::QTime, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QDeclarativePeriod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativePeriod *_t = static_cast<QDeclarativePeriod *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startDateChanged(); break;
        case 1: _t->startTimeChanged(); break;
        case 2: _t->endDateChanged(); break;
        case 3: _t->endTimeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativePeriod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePeriod::startDateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativePeriod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePeriod::startTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativePeriod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePeriod::endDateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativePeriod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePeriod::endTimeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativePeriod *_t = static_cast<QDeclarativePeriod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->startDate(); break;
        case 1: *reinterpret_cast< QTime*>(_v) = _t->startTime(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = _t->endDate(); break;
        case 3: *reinterpret_cast< QTime*>(_v) = _t->endTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePeriod *_t = static_cast<QDeclarativePeriod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setStartTime(*reinterpret_cast< QTime*>(_v)); break;
        case 2: _t->setEndDate(*reinterpret_cast< QDate*>(_v)); break;
        case 3: _t->setEndTime(*reinterpret_cast< QTime*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativePeriod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePeriod.data,
      qt_meta_data_QDeclarativePeriod,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePeriod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePeriod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePeriod.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativePeriod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePeriod::startDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativePeriod::startTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativePeriod::endDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativePeriod::endTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
