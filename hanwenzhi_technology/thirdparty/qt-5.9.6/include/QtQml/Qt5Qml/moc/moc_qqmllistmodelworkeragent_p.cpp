/****************************************************************************
** Meta object code from reading C++ file 'qqmllistmodelworkeragent_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmllistmodelworkeragent_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmllistmodelworkeragent_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlListModelWorkerAgent_t {
    QByteArrayData data[20];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlListModelWorkerAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlListModelWorkerAgent_t qt_meta_stringdata_QQmlListModelWorkerAgent = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQmlListModelWorkerAgent"
QT_MOC_LITERAL(1, 25, 5), // "clear"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "remove"
QT_MOC_LITERAL(4, 39, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(5, 55, 4), // "args"
QT_MOC_LITERAL(6, 60, 6), // "append"
QT_MOC_LITERAL(7, 67, 6), // "insert"
QT_MOC_LITERAL(8, 74, 3), // "get"
QT_MOC_LITERAL(9, 78, 12), // "QQmlV4Handle"
QT_MOC_LITERAL(10, 91, 5), // "index"
QT_MOC_LITERAL(11, 97, 3), // "set"
QT_MOC_LITERAL(12, 101, 11), // "setProperty"
QT_MOC_LITERAL(13, 113, 8), // "property"
QT_MOC_LITERAL(14, 122, 5), // "value"
QT_MOC_LITERAL(15, 128, 4), // "move"
QT_MOC_LITERAL(16, 133, 4), // "from"
QT_MOC_LITERAL(17, 138, 2), // "to"
QT_MOC_LITERAL(18, 141, 5), // "count"
QT_MOC_LITERAL(19, 147, 4) // "sync"

    },
    "QQmlListModelWorkerAgent\0clear\0\0remove\0"
    "QQmlV4Function*\0args\0append\0insert\0"
    "get\0QQmlV4Handle\0index\0set\0setProperty\0"
    "property\0value\0move\0from\0to\0count\0"
    "sync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlListModelWorkerAgent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x02 /* Public */,
       3,    1,   60,    2, 0x02 /* Public */,
       6,    1,   63,    2, 0x02 /* Public */,
       7,    1,   66,    2, 0x02 /* Public */,
       8,    1,   69,    2, 0x02 /* Public */,
      11,    2,   72,    2, 0x02 /* Public */,
      12,    3,   77,    2, 0x02 /* Public */,
      15,    3,   84,    2, 0x02 /* Public */,
      19,    0,   91,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 9, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,   10,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,   10,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   16,   17,   18,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Int, 0x00095001,

       0        // eod
};

void QQmlListModelWorkerAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlListModelWorkerAgent *_t = static_cast<QQmlListModelWorkerAgent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->remove((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 2: _t->append((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 3: _t->insert((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 4: { QQmlV4Handle _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQmlV4Handle*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QQmlV4Handle(*)>(_a[2]))); break;
        case 6: _t->setProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 7: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->sync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlV4Handle >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlListModelWorkerAgent *_t = static_cast<QQmlListModelWorkerAgent *>(_o);
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

const QMetaObject QQmlListModelWorkerAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlListModelWorkerAgent.data,
      qt_meta_data_QQmlListModelWorkerAgent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlListModelWorkerAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlListModelWorkerAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlListModelWorkerAgent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlListModelWorkerAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
