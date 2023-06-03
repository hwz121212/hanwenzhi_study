/****************************************************************************
** Meta object code from reading C++ file 'qquickmonthmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickmonthmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmonthmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMonthModel_t {
    QByteArrayData data[15];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMonthModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMonthModel_t qt_meta_stringdata_QQuickMonthModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickMonthModel"
QT_MOC_LITERAL(1, 17, 12), // "monthChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "yearChanged"
QT_MOC_LITERAL(4, 43, 13), // "localeChanged"
QT_MOC_LITERAL(5, 57, 12), // "titleChanged"
QT_MOC_LITERAL(6, 70, 6), // "dateAt"
QT_MOC_LITERAL(7, 77, 5), // "index"
QT_MOC_LITERAL(8, 83, 7), // "indexOf"
QT_MOC_LITERAL(9, 91, 4), // "date"
QT_MOC_LITERAL(10, 96, 5), // "month"
QT_MOC_LITERAL(11, 102, 4), // "year"
QT_MOC_LITERAL(12, 107, 6), // "locale"
QT_MOC_LITERAL(13, 114, 5), // "title"
QT_MOC_LITERAL(14, 120, 5) // "count"

    },
    "QQuickMonthModel\0monthChanged\0\0"
    "yearChanged\0localeChanged\0titleChanged\0"
    "dateAt\0index\0indexOf\0date\0month\0year\0"
    "locale\0title\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMonthModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x02 /* Public */,
       8,    1,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QDate, QMetaType::Int,    7,
    QMetaType::Int, QMetaType::QDate,    9,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495903,
      11, QMetaType::Int, 0x00495903,
      12, QMetaType::QLocale, 0x00495903,
      13, QMetaType::QString, 0x00495903,
      14, QMetaType::Int, 0x00095c01,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

       0        // eod
};

void QQuickMonthModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMonthModel *_t = static_cast<QQuickMonthModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->monthChanged(); break;
        case 1: _t->yearChanged(); break;
        case 2: _t->localeChanged(); break;
        case 3: _t->titleChanged(); break;
        case 4: { QDate _r = _t->dateAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDate*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->indexOf((*reinterpret_cast< const QDate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMonthModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthModel::monthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickMonthModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthModel::yearChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickMonthModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthModel::localeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickMonthModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMonthModel::titleChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMonthModel *_t = static_cast<QQuickMonthModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->month(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->year(); break;
        case 2: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMonthModel *_t = static_cast<QQuickMonthModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMonth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setYear(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLocale(*reinterpret_cast< QLocale*>(_v)); break;
        case 3: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMonthModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QQuickMonthModel.data,
      qt_meta_data_QQuickMonthModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMonthModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMonthModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMonthModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QQuickMonthModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickMonthModel::monthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickMonthModel::yearChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickMonthModel::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickMonthModel::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
