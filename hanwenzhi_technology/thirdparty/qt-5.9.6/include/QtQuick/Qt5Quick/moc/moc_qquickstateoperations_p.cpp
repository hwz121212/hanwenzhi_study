/****************************************************************************
** Meta object code from reading C++ file 'qquickstateoperations_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickstateoperations_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickstateoperations_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickParentChange_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickParentChange_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickParentChange_t qt_meta_stringdata_QQuickParentChange = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickParentChange"
QT_MOC_LITERAL(1, 19, 6), // "target"
QT_MOC_LITERAL(2, 26, 11), // "QQuickItem*"
QT_MOC_LITERAL(3, 38, 6), // "parent"
QT_MOC_LITERAL(4, 45, 1), // "x"
QT_MOC_LITERAL(5, 47, 16), // "QQmlScriptString"
QT_MOC_LITERAL(6, 64, 1), // "y"
QT_MOC_LITERAL(7, 66, 5), // "width"
QT_MOC_LITERAL(8, 72, 6), // "height"
QT_MOC_LITERAL(9, 79, 5), // "scale"
QT_MOC_LITERAL(10, 85, 8) // "rotation"

    },
    "QQuickParentChange\0target\0QQuickItem*\0"
    "parent\0x\0QQmlScriptString\0y\0width\0"
    "height\0scale\0rotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickParentChange[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009500b,
       3, 0x80000000 | 2, 0x0009510b,
       4, 0x80000000 | 5, 0x0009510b,
       6, 0x80000000 | 5, 0x0009510b,
       7, 0x80000000 | 5, 0x0009510b,
       8, 0x80000000 | 5, 0x0009510b,
       9, 0x80000000 | 5, 0x0009510b,
      10, 0x80000000 | 5, 0x0009510b,

       0        // eod
};

void QQuickParentChange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlScriptString >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickParentChange *_t = static_cast<QQuickParentChange *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->object(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->parent(); break;
        case 2: *reinterpret_cast< QQmlScriptString*>(_v) = _t->x(); break;
        case 3: *reinterpret_cast< QQmlScriptString*>(_v) = _t->y(); break;
        case 4: *reinterpret_cast< QQmlScriptString*>(_v) = _t->width(); break;
        case 5: *reinterpret_cast< QQmlScriptString*>(_v) = _t->height(); break;
        case 6: *reinterpret_cast< QQmlScriptString*>(_v) = _t->scale(); break;
        case 7: *reinterpret_cast< QQmlScriptString*>(_v) = _t->rotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickParentChange *_t = static_cast<QQuickParentChange *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObject(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setParent(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setX(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 3: _t->setY(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 4: _t->setWidth(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 5: _t->setHeight(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 6: _t->setScale(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 7: _t->setRotation(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickParentChange::staticMetaObject = {
    { &QQuickStateOperation::staticMetaObject, qt_meta_stringdata_QQuickParentChange.data,
      qt_meta_data_QQuickParentChange,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickParentChange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickParentChange::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickParentChange.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQuickStateActionEvent"))
        return static_cast< QQuickStateActionEvent*>(this);
    return QQuickStateOperation::qt_metacast(_clname);
}

int QQuickParentChange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickAnchorSet_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnchorSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnchorSet_t qt_meta_stringdata_QQuickAnchorSet = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickAnchorSet"
QT_MOC_LITERAL(1, 16, 4), // "left"
QT_MOC_LITERAL(2, 21, 16), // "QQmlScriptString"
QT_MOC_LITERAL(3, 38, 5), // "right"
QT_MOC_LITERAL(4, 44, 16), // "horizontalCenter"
QT_MOC_LITERAL(5, 61, 3), // "top"
QT_MOC_LITERAL(6, 65, 6), // "bottom"
QT_MOC_LITERAL(7, 72, 14), // "verticalCenter"
QT_MOC_LITERAL(8, 87, 8) // "baseline"

    },
    "QQuickAnchorSet\0left\0QQmlScriptString\0"
    "right\0horizontalCenter\0top\0bottom\0"
    "verticalCenter\0baseline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnchorSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510f,
       3, 0x80000000 | 2, 0x0009510f,
       4, 0x80000000 | 2, 0x0009510f,
       5, 0x80000000 | 2, 0x0009510f,
       6, 0x80000000 | 2, 0x0009510f,
       7, 0x80000000 | 2, 0x0009510f,
       8, 0x80000000 | 2, 0x0009510f,

       0        // eod
};

void QQuickAnchorSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlScriptString >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnchorSet *_t = static_cast<QQuickAnchorSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlScriptString*>(_v) = _t->left(); break;
        case 1: *reinterpret_cast< QQmlScriptString*>(_v) = _t->right(); break;
        case 2: *reinterpret_cast< QQmlScriptString*>(_v) = _t->horizontalCenter(); break;
        case 3: *reinterpret_cast< QQmlScriptString*>(_v) = _t->top(); break;
        case 4: *reinterpret_cast< QQmlScriptString*>(_v) = _t->bottom(); break;
        case 5: *reinterpret_cast< QQmlScriptString*>(_v) = _t->verticalCenter(); break;
        case 6: *reinterpret_cast< QQmlScriptString*>(_v) = _t->baseline(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAnchorSet *_t = static_cast<QQuickAnchorSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLeft(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 1: _t->setRight(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 2: _t->setHorizontalCenter(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 3: _t->setTop(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 4: _t->setBottom(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 5: _t->setVerticalCenter(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 6: _t->setBaseline(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickAnchorSet *_t = static_cast<QQuickAnchorSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetLeft(); break;
        case 1: _t->resetRight(); break;
        case 2: _t->resetHorizontalCenter(); break;
        case 3: _t->resetTop(); break;
        case 4: _t->resetBottom(); break;
        case 5: _t->resetVerticalCenter(); break;
        case 6: _t->resetBaseline(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickAnchorSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickAnchorSet.data,
      qt_meta_data_QQuickAnchorSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnchorSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnchorSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnchorSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickAnchorSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickAnchorChanges_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnchorChanges_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnchorChanges_t qt_meta_stringdata_QQuickAnchorChanges = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickAnchorChanges"
QT_MOC_LITERAL(1, 20, 6), // "target"
QT_MOC_LITERAL(2, 27, 11), // "QQuickItem*"
QT_MOC_LITERAL(3, 39, 7), // "anchors"
QT_MOC_LITERAL(4, 47, 16) // "QQuickAnchorSet*"

    },
    "QQuickAnchorChanges\0target\0QQuickItem*\0"
    "anchors\0QQuickAnchorSet*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnchorChanges[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009500b,
       3, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void QQuickAnchorChanges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickAnchorSet* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnchorChanges *_t = static_cast<QQuickAnchorChanges *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->object(); break;
        case 1: *reinterpret_cast< QQuickAnchorSet**>(_v) = _t->anchors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAnchorChanges *_t = static_cast<QQuickAnchorChanges *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObject(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickAnchorChanges::staticMetaObject = {
    { &QQuickStateOperation::staticMetaObject, qt_meta_stringdata_QQuickAnchorChanges.data,
      qt_meta_data_QQuickAnchorChanges,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnchorChanges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnchorChanges::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnchorChanges.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQuickStateActionEvent"))
        return static_cast< QQuickStateActionEvent*>(this);
    return QQuickStateOperation::qt_metacast(_clname);
}

int QQuickAnchorChanges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
