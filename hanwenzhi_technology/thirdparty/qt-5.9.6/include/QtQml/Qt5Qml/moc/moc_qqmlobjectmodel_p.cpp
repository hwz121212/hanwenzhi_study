/****************************************************************************
** Meta object code from reading C++ file 'qqmlobjectmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmlobjectmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlobjectmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlInstanceModel_t {
    QByteArrayData data[13];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlInstanceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlInstanceModel_t qt_meta_stringdata_QQmlInstanceModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQmlInstanceModel"
QT_MOC_LITERAL(1, 18, 12), // "countChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "modelUpdated"
QT_MOC_LITERAL(4, 45, 13), // "QQmlChangeSet"
QT_MOC_LITERAL(5, 59, 9), // "changeSet"
QT_MOC_LITERAL(6, 69, 5), // "reset"
QT_MOC_LITERAL(7, 75, 11), // "createdItem"
QT_MOC_LITERAL(8, 87, 5), // "index"
QT_MOC_LITERAL(9, 93, 6), // "object"
QT_MOC_LITERAL(10, 100, 8), // "initItem"
QT_MOC_LITERAL(11, 109, 14), // "destroyingItem"
QT_MOC_LITERAL(12, 124, 5) // "count"

    },
    "QQmlInstanceModel\0countChanged\0\0"
    "modelUpdated\0QQmlChangeSet\0changeSet\0"
    "reset\0createdItem\0index\0object\0initItem\0"
    "destroyingItem\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlInstanceModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    2,   40,    2, 0x06 /* Public */,
       7,    2,   45,    2, 0x06 /* Public */,
      10,    2,   50,    2, 0x06 /* Public */,
      11,    1,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    8,    9,
    QMetaType::Void, QMetaType::QObjectStar,    9,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQmlInstanceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlInstanceModel *_t = static_cast<QQmlInstanceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->modelUpdated((*reinterpret_cast< const QQmlChangeSet(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->createdItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 3: _t->initItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 4: _t->destroyingItem((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlInstanceModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlInstanceModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlInstanceModel::*_t)(const QQmlChangeSet & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlInstanceModel::modelUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlInstanceModel::*_t)(int , QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlInstanceModel::createdItem)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlInstanceModel::*_t)(int , QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlInstanceModel::initItem)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQmlInstanceModel::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlInstanceModel::destroyingItem)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlInstanceModel *_t = static_cast<QQmlInstanceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlInstanceModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlInstanceModel.data,
      qt_meta_data_QQmlInstanceModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlInstanceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlInstanceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlInstanceModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlInstanceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQmlInstanceModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQmlInstanceModel::modelUpdated(const QQmlChangeSet & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlInstanceModel::createdItem(int _t1, QObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlInstanceModel::initItem(int _t1, QObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQmlInstanceModel::destroyingItem(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QQmlObjectModel_t {
    QByteArrayData data[17];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlObjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlObjectModel_t qt_meta_stringdata_QQmlObjectModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQmlObjectModel"
QT_MOC_LITERAL(1, 16, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 32, 8), // "children"
QT_MOC_LITERAL(3, 41, 15), // "childrenChanged"
QT_MOC_LITERAL(4, 57, 0), // ""
QT_MOC_LITERAL(5, 58, 5), // "clear"
QT_MOC_LITERAL(6, 64, 3), // "get"
QT_MOC_LITERAL(7, 68, 5), // "index"
QT_MOC_LITERAL(8, 74, 6), // "append"
QT_MOC_LITERAL(9, 81, 6), // "object"
QT_MOC_LITERAL(10, 88, 6), // "insert"
QT_MOC_LITERAL(11, 95, 4), // "move"
QT_MOC_LITERAL(12, 100, 4), // "from"
QT_MOC_LITERAL(13, 105, 2), // "to"
QT_MOC_LITERAL(14, 108, 1), // "n"
QT_MOC_LITERAL(15, 110, 6), // "remove"
QT_MOC_LITERAL(16, 117, 25) // "QQmlListProperty<QObject>"

    },
    "QQmlObjectModel\0DefaultProperty\0"
    "children\0childrenChanged\0\0clear\0get\0"
    "index\0append\0object\0insert\0move\0from\0"
    "to\0n\0remove\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlObjectModel[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       1,  103, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   70,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   71,    4, 0x8a /* Public | MethodRevisioned */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   72,    4, 0x82 /* Public | MethodRevisioned */,
       8,    1,   75,    4, 0x82 /* Public | MethodRevisioned */,
      10,    2,   78,    4, 0x82 /* Public | MethodRevisioned */,
      11,    3,   83,    4, 0x82 /* Public | MethodRevisioned */,
      11,    2,   90,    4, 0xa2 /* Public | MethodCloned | MethodRevisioned */,
      15,    2,   95,    4, 0x82 /* Public | MethodRevisioned */,
      15,    1,  100,    4, 0xa2 /* Public | MethodCloned | MethodRevisioned */,

 // signals: revision
       0,

 // slots: revision
       3,

 // methods: revision
       3,
       3,
       3,
       3,
       3,
       3,
       3,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QObjectStar, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    7,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,   14,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       2, 0x80000000 | 16, 0x00494009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQmlObjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlObjectModel *_t = static_cast<QQmlObjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->childrenChanged(); break;
        case 1: _t->clear(); break;
        case 2: { QObject* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->append((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->remove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->remove((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlObjectModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlObjectModel::childrenChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlObjectModel *_t = static_cast<QQmlObjectModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->children(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlObjectModel::staticMetaObject = {
    { &QQmlInstanceModel::staticMetaObject, qt_meta_stringdata_QQmlObjectModel.data,
      qt_meta_data_QQmlObjectModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlObjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlObjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlObjectModel.stringdata0))
        return static_cast<void*>(this);
    return QQmlInstanceModel::qt_metacast(_clname);
}

int QQmlObjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlInstanceModel::qt_metacall(_c, _id, _a);
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
void QQmlObjectModel::childrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQmlObjectModelAttached_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlObjectModelAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlObjectModelAttached_t qt_meta_stringdata_QQmlObjectModelAttached = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQmlObjectModelAttached"
QT_MOC_LITERAL(1, 24, 12), // "indexChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5) // "index"

    },
    "QQmlObjectModelAttached\0indexChanged\0"
    "\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlObjectModelAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQmlObjectModelAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlObjectModelAttached *_t = static_cast<QQmlObjectModelAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlObjectModelAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlObjectModelAttached::indexChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlObjectModelAttached *_t = static_cast<QQmlObjectModelAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->index(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQmlObjectModelAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlObjectModelAttached.data,
      qt_meta_data_QQmlObjectModelAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlObjectModelAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlObjectModelAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlObjectModelAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlObjectModelAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void QQmlObjectModelAttached::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
