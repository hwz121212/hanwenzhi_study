/****************************************************************************
** Meta object code from reading C++ file 'qquickweeknumbermodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickweeknumbermodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickweeknumbermodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWeekNumberModel_t {
    QByteArrayData data[13];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWeekNumberModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWeekNumberModel_t qt_meta_stringdata_QQuickWeekNumberModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickWeekNumberModel"
QT_MOC_LITERAL(1, 22, 12), // "monthChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "yearChanged"
QT_MOC_LITERAL(4, 48, 13), // "localeChanged"
QT_MOC_LITERAL(5, 62, 12), // "weekNumberAt"
QT_MOC_LITERAL(6, 75, 5), // "index"
QT_MOC_LITERAL(7, 81, 7), // "indexOf"
QT_MOC_LITERAL(8, 89, 10), // "weekNumber"
QT_MOC_LITERAL(9, 100, 5), // "month"
QT_MOC_LITERAL(10, 106, 4), // "year"
QT_MOC_LITERAL(11, 111, 6), // "locale"
QT_MOC_LITERAL(12, 118, 5) // "count"

    },
    "QQuickWeekNumberModel\0monthChanged\0\0"
    "yearChanged\0localeChanged\0weekNumberAt\0"
    "index\0indexOf\0weekNumber\0month\0year\0"
    "locale\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWeekNumberModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x02 /* Public */,
       7,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::Int,    6,
    QMetaType::Int, QMetaType::Int,    8,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495903,
      10, QMetaType::Int, 0x00495903,
      11, QMetaType::QLocale, 0x00495903,
      12, QMetaType::Int, 0x00095c01,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

void QQuickWeekNumberModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWeekNumberModel *_t = static_cast<QQuickWeekNumberModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->monthChanged(); break;
        case 1: _t->yearChanged(); break;
        case 2: _t->localeChanged(); break;
        case 3: { int _r = _t->weekNumberAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->indexOf((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWeekNumberModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWeekNumberModel::monthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWeekNumberModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWeekNumberModel::yearChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickWeekNumberModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWeekNumberModel::localeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWeekNumberModel *_t = static_cast<QQuickWeekNumberModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->month(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->year(); break;
        case 2: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWeekNumberModel *_t = static_cast<QQuickWeekNumberModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMonth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setYear(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLocale(*reinterpret_cast< QLocale*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickWeekNumberModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QQuickWeekNumberModel.data,
      qt_meta_data_QQuickWeekNumberModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWeekNumberModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWeekNumberModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWeekNumberModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QQuickWeekNumberModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QQuickWeekNumberModel::monthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickWeekNumberModel::yearChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickWeekNumberModel::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
