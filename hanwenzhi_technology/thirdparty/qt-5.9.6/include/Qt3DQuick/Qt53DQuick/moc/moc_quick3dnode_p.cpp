/****************************************************************************
** Meta object code from reading C++ file 'quick3dnode_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuick/private/quick3dnode_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quick3dnode_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DNode_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DNode_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DNode = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Qt3DCore::Quick::Quick3DNode"
QT_MOC_LITERAL(1, 29, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 45, 4), // "data"
QT_MOC_LITERAL(3, 50, 13), // "childAppended"
QT_MOC_LITERAL(4, 64, 0), // ""
QT_MOC_LITERAL(5, 65, 3), // "idx"
QT_MOC_LITERAL(6, 69, 5), // "child"
QT_MOC_LITERAL(7, 75, 12), // "childRemoved"
QT_MOC_LITERAL(8, 88, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(9, 114, 10), // "childNodes"
QT_MOC_LITERAL(10, 125, 33) // "QQmlListProperty<Qt3DCore::QN..."

    },
    "Qt3DCore::Quick::Quick3DNode\0"
    "DefaultProperty\0data\0childAppended\0\0"
    "idx\0child\0childRemoved\0QQmlListProperty<QObject>\0"
    "childNodes\0QQmlListProperty<Qt3DCore::QNode>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DNode[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    2,   26,    4, 0x08 /* Private */,
       7,    2,   31,    4, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    5,    6,

 // properties: name, type, flags
       2, 0x80000000 | 8, 0x00095009,
       9, 0x80000000 | 10, 0x00095009,

       0        // eod
};

void Qt3DCore::Quick::Quick3DNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DNode *_t = static_cast<Quick3DNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->childAppended((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: _t->childRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        default: ;
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
        Quick3DNode *_t = static_cast<Quick3DNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< QQmlListProperty<Qt3DCore::QNode>*>(_v) = _t->childNodes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DCore__Quick__Quick3DNode.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::Quick::Quick3DNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::Quick::Quick3DNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__Quick__Quick3DNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DCore::Quick::Quick3DNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
