/****************************************************************************
** Meta object code from reading C++ file 'qqmllistmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmllistmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmllistmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlListModel_t {
    QByteArrayData data[22];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlListModel_t qt_meta_stringdata_QQmlListModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QQmlListModel"
QT_MOC_LITERAL(1, 14, 12), // "countChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "clear"
QT_MOC_LITERAL(4, 34, 6), // "remove"
QT_MOC_LITERAL(5, 41, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(6, 57, 4), // "args"
QT_MOC_LITERAL(7, 62, 6), // "append"
QT_MOC_LITERAL(8, 69, 6), // "insert"
QT_MOC_LITERAL(9, 76, 3), // "get"
QT_MOC_LITERAL(10, 80, 12), // "QQmlV4Handle"
QT_MOC_LITERAL(11, 93, 5), // "index"
QT_MOC_LITERAL(12, 99, 3), // "set"
QT_MOC_LITERAL(13, 103, 11), // "setProperty"
QT_MOC_LITERAL(14, 115, 8), // "property"
QT_MOC_LITERAL(15, 124, 5), // "value"
QT_MOC_LITERAL(16, 130, 4), // "move"
QT_MOC_LITERAL(17, 135, 4), // "from"
QT_MOC_LITERAL(18, 140, 2), // "to"
QT_MOC_LITERAL(19, 143, 5), // "count"
QT_MOC_LITERAL(20, 149, 4), // "sync"
QT_MOC_LITERAL(21, 154, 12) // "dynamicRoles"

    },
    "QQmlListModel\0countChanged\0\0clear\0"
    "remove\0QQmlV4Function*\0args\0append\0"
    "insert\0get\0QQmlV4Handle\0index\0set\0"
    "setProperty\0property\0value\0move\0from\0"
    "to\0count\0sync\0dynamicRoles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x02 /* Public */,
       4,    1,   66,    2, 0x02 /* Public */,
       7,    1,   69,    2, 0x02 /* Public */,
       8,    1,   72,    2, 0x02 /* Public */,
       9,    1,   75,    2, 0x02 /* Public */,
      12,    2,   78,    2, 0x02 /* Public */,
      13,    3,   83,    2, 0x02 /* Public */,
      16,    3,   90,    2, 0x02 /* Public */,
      20,    0,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 10, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   11,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,   11,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,   19,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::Int, 0x00495001,
      21, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void QQmlListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlListModel *_t = static_cast<QQmlListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->clear(); break;
        case 2: _t->remove((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 3: _t->append((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 4: _t->insert((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 5: { QQmlV4Handle _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQmlV4Handle*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QQmlV4Handle(*)>(_a[2]))); break;
        case 7: _t->setProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 8: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->sync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlV4Handle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlListModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlListModel::countChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlListModel *_t = static_cast<QQmlListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dynamicRoles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlListModel *_t = static_cast<QQmlListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDynamicRoles(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QQmlListModel.data,
      qt_meta_data_QQmlListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QQmlListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQmlListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQmlListElement_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlListElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlListElement_t qt_meta_stringdata_QQmlListElement = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QQmlListElement"

    },
    "QQmlListElement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlListElement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQmlListElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQmlListElement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlListElement.data,
      qt_meta_data_QQmlListElement,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlListElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlListElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlListElement.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlListElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
