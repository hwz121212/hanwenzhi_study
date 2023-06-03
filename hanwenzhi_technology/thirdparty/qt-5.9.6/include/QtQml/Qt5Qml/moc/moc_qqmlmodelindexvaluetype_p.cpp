/****************************************************************************
** Meta object code from reading C++ file 'qqmlmodelindexvaluetype_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmlmodelindexvaluetype_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlmodelindexvaluetype_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlModelIndexValueType_t {
    QByteArrayData data[10];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlModelIndexValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlModelIndexValueType_t qt_meta_stringdata_QQmlModelIndexValueType = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQmlModelIndexValueType"
QT_MOC_LITERAL(1, 24, 8), // "toString"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "row"
QT_MOC_LITERAL(4, 38, 6), // "column"
QT_MOC_LITERAL(5, 45, 6), // "parent"
QT_MOC_LITERAL(6, 52, 5), // "valid"
QT_MOC_LITERAL(7, 58, 5), // "model"
QT_MOC_LITERAL(8, 64, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(9, 84, 10) // "internalId"

    },
    "QQmlModelIndexValueType\0toString\0\0row\0"
    "column\0parent\0valid\0model\0QAbstractItemModel*\0"
    "internalId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlModelIndexValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095c01,
       4, QMetaType::Int, 0x00095c01,
       5, QMetaType::QModelIndex, 0x00095801,
       6, QMetaType::Bool, 0x00095c01,
       7, 0x80000000 | 8, 0x00095c09,
       9, QMetaType::ULongLong, 0x00095c01,

       0        // eod
};

void QQmlModelIndexValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlModelIndexValueType *_t = reinterpret_cast<QQmlModelIndexValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlModelIndexValueType *_t = reinterpret_cast<QQmlModelIndexValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->column(); break;
        case 2: *reinterpret_cast< QModelIndex*>(_v) = _t->parent(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 4: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 5: *reinterpret_cast< quint64*>(_v) = _t->internalId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlModelIndexValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlModelIndexValueType.data,
      qt_meta_data_QQmlModelIndexValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlPersistentModelIndexValueType_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlPersistentModelIndexValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlPersistentModelIndexValueType_t qt_meta_stringdata_QQmlPersistentModelIndexValueType = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QQmlPersistentModelIndexValue..."
QT_MOC_LITERAL(1, 34, 8), // "toString"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "row"
QT_MOC_LITERAL(4, 48, 6), // "column"
QT_MOC_LITERAL(5, 55, 6), // "parent"
QT_MOC_LITERAL(6, 62, 5), // "valid"
QT_MOC_LITERAL(7, 68, 5), // "model"
QT_MOC_LITERAL(8, 74, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(9, 94, 10) // "internalId"

    },
    "QQmlPersistentModelIndexValueType\0"
    "toString\0\0row\0column\0parent\0valid\0"
    "model\0QAbstractItemModel*\0internalId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlPersistentModelIndexValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095801,
       4, QMetaType::Int, 0x00095801,
       5, QMetaType::QModelIndex, 0x00095801,
       6, QMetaType::Bool, 0x00095801,
       7, 0x80000000 | 8, 0x00095809,
       9, QMetaType::ULongLong, 0x00095801,

       0        // eod
};

void QQmlPersistentModelIndexValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlPersistentModelIndexValueType *_t = reinterpret_cast<QQmlPersistentModelIndexValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlPersistentModelIndexValueType *_t = reinterpret_cast<QQmlPersistentModelIndexValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->column(); break;
        case 2: *reinterpret_cast< QModelIndex*>(_v) = _t->parent(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 4: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 5: *reinterpret_cast< quint64*>(_v) = _t->internalId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlPersistentModelIndexValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlPersistentModelIndexValueType.data,
      qt_meta_data_QQmlPersistentModelIndexValueType,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_QQmlItemSelectionRangeValueType_t {
    QByteArrayData data[25];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlItemSelectionRangeValueType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlItemSelectionRangeValueType_t qt_meta_stringdata_QQmlItemSelectionRangeValueType = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QQmlItemSelectionRangeValueType"
QT_MOC_LITERAL(1, 32, 8), // "toString"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "contains"
QT_MOC_LITERAL(4, 51, 5), // "index"
QT_MOC_LITERAL(5, 57, 3), // "row"
QT_MOC_LITERAL(6, 61, 6), // "column"
QT_MOC_LITERAL(7, 68, 11), // "parentIndex"
QT_MOC_LITERAL(8, 80, 10), // "intersects"
QT_MOC_LITERAL(9, 91, 19), // "QItemSelectionRange"
QT_MOC_LITERAL(10, 111, 5), // "other"
QT_MOC_LITERAL(11, 117, 11), // "intersected"
QT_MOC_LITERAL(12, 129, 3), // "top"
QT_MOC_LITERAL(13, 133, 4), // "left"
QT_MOC_LITERAL(14, 138, 6), // "bottom"
QT_MOC_LITERAL(15, 145, 5), // "right"
QT_MOC_LITERAL(16, 151, 5), // "width"
QT_MOC_LITERAL(17, 157, 6), // "height"
QT_MOC_LITERAL(18, 164, 7), // "topLeft"
QT_MOC_LITERAL(19, 172, 11), // "bottomRight"
QT_MOC_LITERAL(20, 184, 6), // "parent"
QT_MOC_LITERAL(21, 191, 5), // "valid"
QT_MOC_LITERAL(22, 197, 5), // "empty"
QT_MOC_LITERAL(23, 203, 5), // "model"
QT_MOC_LITERAL(24, 209, 19) // "QAbstractItemModel*"

    },
    "QQmlItemSelectionRangeValueType\0"
    "toString\0\0contains\0index\0row\0column\0"
    "parentIndex\0intersects\0QItemSelectionRange\0"
    "other\0intersected\0top\0left\0bottom\0"
    "right\0width\0height\0topLeft\0bottomRight\0"
    "parent\0valid\0empty\0model\0QAbstractItemModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlItemSelectionRangeValueType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      12,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x02 /* Public */,
       3,    1,   40,    2, 0x02 /* Public */,
       3,    3,   43,    2, 0x02 /* Public */,
       8,    1,   50,    2, 0x02 /* Public */,
      11,    1,   53,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QModelIndex,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    5,    6,    7,
    QMetaType::Bool, 0x80000000 | 9,   10,
    0x80000000 | 9, 0x80000000 | 9,   10,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00095801,
      13, QMetaType::Int, 0x00095801,
      14, QMetaType::Int, 0x00095801,
      15, QMetaType::Int, 0x00095801,
      16, QMetaType::Int, 0x00095801,
      17, QMetaType::Int, 0x00095801,
      18, QMetaType::QPersistentModelIndex, 0x00095801,
      19, QMetaType::QPersistentModelIndex, 0x00095801,
      20, QMetaType::QModelIndex, 0x00095801,
      21, QMetaType::Bool, 0x00095801,
      22, QMetaType::Bool, 0x00095801,
      23, 0x80000000 | 24, 0x00095809,

       0        // eod
};

void QQmlItemSelectionRangeValueType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlItemSelectionRangeValueType *_t = reinterpret_cast<QQmlItemSelectionRangeValueType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->contains((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->contains((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->intersects((*reinterpret_cast< const QItemSelectionRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { QItemSelectionRange _r = _t->intersected((*reinterpret_cast< const QItemSelectionRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelectionRange >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelectionRange >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlItemSelectionRangeValueType *_t = reinterpret_cast<QQmlItemSelectionRangeValueType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->top(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->left(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->right(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 6: *reinterpret_cast< QPersistentModelIndex*>(_v) = _t->topLeft(); break;
        case 7: *reinterpret_cast< QPersistentModelIndex*>(_v) = _t->bottomRight(); break;
        case 8: *reinterpret_cast< QModelIndex*>(_v) = _t->parent(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        case 11: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlItemSelectionRangeValueType::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQmlItemSelectionRangeValueType.data,
      qt_meta_data_QQmlItemSelectionRangeValueType,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
