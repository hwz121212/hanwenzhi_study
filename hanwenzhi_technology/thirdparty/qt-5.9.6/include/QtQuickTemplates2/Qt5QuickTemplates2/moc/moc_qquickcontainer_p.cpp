/****************************************************************************
** Meta object code from reading C++ file 'qquickcontainer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qquickcontainer_p_p.h"
#include "qquickaccessibleattached_p.h"
#include "../../5.9.6/QtQuickTemplates2/private/qquickcontainer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcontainer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickContainer_t {
    QByteArrayData data[29];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickContainer_t qt_meta_stringdata_QQuickContainer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickContainer"
QT_MOC_LITERAL(1, 16, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 32, 11), // "contentData"
QT_MOC_LITERAL(3, 44, 12), // "countChanged"
QT_MOC_LITERAL(4, 57, 0), // ""
QT_MOC_LITERAL(5, 58, 22), // "contentChildrenChanged"
QT_MOC_LITERAL(6, 81, 19), // "currentIndexChanged"
QT_MOC_LITERAL(7, 101, 18), // "currentItemChanged"
QT_MOC_LITERAL(8, 120, 15), // "setCurrentIndex"
QT_MOC_LITERAL(9, 136, 5), // "index"
QT_MOC_LITERAL(10, 142, 21), // "incrementCurrentIndex"
QT_MOC_LITERAL(11, 164, 21), // "decrementCurrentIndex"
QT_MOC_LITERAL(12, 186, 22), // "_q_currentIndexChanged"
QT_MOC_LITERAL(13, 209, 6), // "itemAt"
QT_MOC_LITERAL(14, 216, 11), // "QQuickItem*"
QT_MOC_LITERAL(15, 228, 7), // "addItem"
QT_MOC_LITERAL(16, 236, 4), // "item"
QT_MOC_LITERAL(17, 241, 10), // "insertItem"
QT_MOC_LITERAL(18, 252, 8), // "moveItem"
QT_MOC_LITERAL(19, 261, 4), // "from"
QT_MOC_LITERAL(20, 266, 2), // "to"
QT_MOC_LITERAL(21, 269, 10), // "removeItem"
QT_MOC_LITERAL(22, 280, 5), // "count"
QT_MOC_LITERAL(23, 286, 12), // "contentModel"
QT_MOC_LITERAL(24, 299, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(25, 325, 15), // "contentChildren"
QT_MOC_LITERAL(26, 341, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(27, 370, 12), // "currentIndex"
QT_MOC_LITERAL(28, 383, 11) // "currentItem"

    },
    "QQuickContainer\0DefaultProperty\0"
    "contentData\0countChanged\0\0"
    "contentChildrenChanged\0currentIndexChanged\0"
    "currentItemChanged\0setCurrentIndex\0"
    "index\0incrementCurrentIndex\0"
    "decrementCurrentIndex\0_q_currentIndexChanged\0"
    "itemAt\0QQuickItem*\0addItem\0item\0"
    "insertItem\0moveItem\0from\0to\0removeItem\0"
    "count\0contentModel\0QQmlListProperty<QObject>\0"
    "contentChildren\0QQmlListProperty<QQuickItem>\0"
    "currentIndex\0currentItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       6,  123, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   94,    4, 0x06 /* Public */,
       5,    0,   95,    4, 0x06 /* Public */,
       6,    0,   96,    4, 0x06 /* Public */,
       7,    0,   97,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   98,    4, 0x0a /* Public */,
      10,    0,  101,    4, 0x8a /* Public | MethodRevisioned */,
      11,    0,  102,    4, 0x8a /* Public | MethodRevisioned */,
      12,    0,  103,    4, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    1,  104,    4, 0x02 /* Public */,
      15,    1,  107,    4, 0x02 /* Public */,
      17,    2,  110,    4, 0x02 /* Public */,
      18,    2,  115,    4, 0x02 /* Public */,
      21,    1,  120,    4, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       1,
       1,
       0,

 // methods: revision
       0,
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 14, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 14,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,    9,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      22, QMetaType::Int, 0x00495801,
      23, QMetaType::QVariant, 0x00095c01,
       2, 0x80000000 | 24, 0x00095809,
      25, 0x80000000 | 26, 0x00495809,
      27, QMetaType::Int, 0x00495903,
      28, 0x80000000 | 14, 0x00495809,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickContainer *_t = static_cast<QQuickContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->contentChildrenChanged(); break;
        case 2: _t->currentIndexChanged(); break;
        case 3: _t->currentItemChanged(); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->incrementCurrentIndex(); break;
        case 6: _t->decrementCurrentIndex(); break;
        case 7: _t->d_func()->_q_currentIndexChanged(); break;
        case 8: { QQuickItem* _r = _t->itemAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->addItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 10: _t->insertItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 11: _t->moveItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->removeItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickContainer::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickContainer::contentChildrenChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickContainer::currentIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickContainer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickContainer::currentItemChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickContainer *_t = static_cast<QQuickContainer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->contentModel(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->contentData(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->contentChildren(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->currentItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickContainer *_t = static_cast<QQuickContainer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickContainer::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickContainer.data,
      qt_meta_data_QQuickContainer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickContainer.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickContainer::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickContainer::contentChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickContainer::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickContainer::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
