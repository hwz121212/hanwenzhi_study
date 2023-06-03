/****************************************************************************
** Meta object code from reading C++ file 'qquickcalendarmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickcalendarmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcalendarmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickCalendarModel1_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCalendarModel1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCalendarModel1_t qt_meta_stringdata_QQuickCalendarModel1 = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickCalendarModel1"
QT_MOC_LITERAL(1, 21, 18), // "visibleDateChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "visibleDate"
QT_MOC_LITERAL(4, 53, 13), // "localeChanged"
QT_MOC_LITERAL(5, 67, 6), // "locale"
QT_MOC_LITERAL(6, 74, 12), // "countChanged"
QT_MOC_LITERAL(7, 87, 5), // "count"
QT_MOC_LITERAL(8, 93, 6), // "dateAt"
QT_MOC_LITERAL(9, 100, 5), // "index"
QT_MOC_LITERAL(10, 106, 7), // "indexAt"
QT_MOC_LITERAL(11, 114, 12), // "weekNumberAt"
QT_MOC_LITERAL(12, 127, 3) // "row"

    },
    "QQuickCalendarModel1\0visibleDateChanged\0"
    "\0visibleDate\0localeChanged\0locale\0"
    "countChanged\0count\0dateAt\0index\0indexAt\0"
    "weekNumberAt\0row"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCalendarModel1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x02 /* Public */,
      10,    1,   56,    2, 0x02 /* Public */,
      11,    1,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QLocale,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // methods: parameters
    QMetaType::QDateTime, QMetaType::Int,    9,
    QMetaType::Int, QMetaType::QDate,    3,
    QMetaType::Int, QMetaType::Int,   12,

 // properties: name, type, flags
       3, QMetaType::QDate, 0x00495103,
       5, QMetaType::QLocale, 0x00495103,
       7, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickCalendarModel1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickCalendarModel1 *_t = static_cast<QQuickCalendarModel1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->localeChanged((*reinterpret_cast< const QLocale(*)>(_a[1]))); break;
        case 2: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { QDateTime _r = _t->dateAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->indexAt((*reinterpret_cast< const QDate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->weekNumberAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickCalendarModel1::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCalendarModel1::visibleDateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickCalendarModel1::*_t)(const QLocale & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCalendarModel1::localeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickCalendarModel1::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCalendarModel1::countChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickCalendarModel1 *_t = static_cast<QQuickCalendarModel1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->visibleDate(); break;
        case 1: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCalendarModel1 *_t = static_cast<QQuickCalendarModel1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisibleDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setLocale(*reinterpret_cast< QLocale*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickCalendarModel1::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QQuickCalendarModel1.data,
      qt_meta_data_QQuickCalendarModel1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCalendarModel1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCalendarModel1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCalendarModel1.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QQuickCalendarModel1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QQuickCalendarModel1::visibleDateChanged(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickCalendarModel1::localeChanged(const QLocale & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickCalendarModel1::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
