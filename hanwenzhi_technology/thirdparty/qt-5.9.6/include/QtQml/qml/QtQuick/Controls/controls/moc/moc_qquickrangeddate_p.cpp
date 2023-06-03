/****************************************************************************
** Meta object code from reading C++ file 'qquickrangeddate_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickrangeddate_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickrangeddate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickRangedDate1_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRangedDate1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRangedDate1_t qt_meta_stringdata_QQuickRangedDate1 = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickRangedDate1"
QT_MOC_LITERAL(1, 18, 11), // "dateChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "minimumDateChanged"
QT_MOC_LITERAL(4, 50, 18), // "maximumDateChanged"
QT_MOC_LITERAL(5, 69, 4), // "date"
QT_MOC_LITERAL(6, 74, 11), // "minimumDate"
QT_MOC_LITERAL(7, 86, 11) // "maximumDate"

    },
    "QQuickRangedDate1\0dateChanged\0\0"
    "minimumDateChanged\0maximumDateChanged\0"
    "date\0minimumDate\0maximumDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRangedDate1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QDateTime, 0x00495107,
       6, QMetaType::QDateTime, 0x00495107,
       7, QMetaType::QDateTime, 0x00495107,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickRangedDate1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRangedDate1 *_t = static_cast<QQuickRangedDate1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateChanged(); break;
        case 1: _t->minimumDateChanged(); break;
        case 2: _t->maximumDateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRangedDate1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangedDate1::dateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickRangedDate1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangedDate1::minimumDateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickRangedDate1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangedDate1::maximumDateChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRangedDate1 *_t = static_cast<QQuickRangedDate1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDateTime*>(_v) = _t->date(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->minimumDate(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->maximumDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRangedDate1 *_t = static_cast<QQuickRangedDate1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDate(*reinterpret_cast< QDateTime*>(_v)); break;
        case 1: _t->setMinimumDate(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: _t->setMaximumDate(*reinterpret_cast< QDateTime*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickRangedDate1 *_t = static_cast<QQuickRangedDate1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetDate(); break;
        case 1: _t->resetMinimumDate(); break;
        case 2: _t->resetMaximumDate(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickRangedDate1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickRangedDate1.data,
      qt_meta_data_QQuickRangedDate1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRangedDate1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRangedDate1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRangedDate1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickRangedDate1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickRangedDate1::dateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickRangedDate1::minimumDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickRangedDate1::maximumDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
