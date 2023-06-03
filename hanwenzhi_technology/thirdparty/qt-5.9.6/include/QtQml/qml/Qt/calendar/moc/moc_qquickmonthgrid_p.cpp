/****************************************************************************
** Meta object code from reading C++ file 'qquickmonthgrid_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickmonthgrid_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmonthgrid_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMonthGrid_t {
    QByteArrayData data[18];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMonthGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMonthGrid_t qt_meta_stringdata_QQuickMonthGrid = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickMonthGrid"
QT_MOC_LITERAL(1, 16, 12), // "monthChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "yearChanged"
QT_MOC_LITERAL(4, 42, 13), // "sourceChanged"
QT_MOC_LITERAL(5, 56, 12), // "titleChanged"
QT_MOC_LITERAL(6, 69, 15), // "delegateChanged"
QT_MOC_LITERAL(7, 85, 7), // "pressed"
QT_MOC_LITERAL(8, 93, 4), // "date"
QT_MOC_LITERAL(9, 98, 8), // "released"
QT_MOC_LITERAL(10, 107, 7), // "clicked"
QT_MOC_LITERAL(11, 115, 12), // "pressAndHold"
QT_MOC_LITERAL(12, 128, 5), // "month"
QT_MOC_LITERAL(13, 134, 4), // "year"
QT_MOC_LITERAL(14, 139, 6), // "source"
QT_MOC_LITERAL(15, 146, 5), // "title"
QT_MOC_LITERAL(16, 152, 8), // "delegate"
QT_MOC_LITERAL(17, 161, 14) // "QQmlComponent*"

    },
    "QQuickMonthGrid\0monthChanged\0\0yearChanged\0"
    "sourceChanged\0titleChanged\0delegateChanged\0"
    "pressed\0date\0released\0clicked\0"
    "pressAndHold\0month\0year\0source\0title\0"
    "delegate\0QQmlComponent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMonthGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,
      10,    1,   70,    2, 0x06 /* Public */,
      11,    1,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void, QMetaType::QDate,    8,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495903,
      13, QMetaType::Int, 0x00495903,
      14, QMetaType::QVariant, 0x00495903,
      15, QMetaType::QString, 0x00495903,
      16, 0x80000000 | 17, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QQuickMonthGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMonthGrid *_t = static_cast<QQuickMonthGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->monthChanged(); break;
        case 1: _t->yearChanged(); break;
        case 2: _t->sourceChanged(); break;
        case 3: _t->titleChanged(); break;
        case 4: _t->delegateChanged(); break;
        case 5: _t->pressed((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 6: _t->released((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->pressAndHold((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMonthGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::monthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::yearChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::titleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::delegateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::pressed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::released)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::clicked)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickMonthGrid::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthGrid::pressAndHold)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMonthGrid *_t = static_cast<QQuickMonthGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->month(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->year(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->source(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 4: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMonthGrid *_t = static_cast<QQuickMonthGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMonth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setYear(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSource(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMonthGrid::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickMonthGrid.data,
      qt_meta_data_QQuickMonthGrid,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMonthGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMonthGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMonthGrid.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickMonthGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickMonthGrid::monthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickMonthGrid::yearChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickMonthGrid::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickMonthGrid::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickMonthGrid::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickMonthGrid::pressed(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQuickMonthGrid::released(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQuickMonthGrid::clicked(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QQuickMonthGrid::pressAndHold(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
