/****************************************************************************
** Meta object code from reading C++ file 'qquickplatformmenuitemgroup_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickplatformmenuitemgroup_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickplatformmenuitemgroup_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPlatformMenuItemGroup_t {
    QByteArrayData data[20];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPlatformMenuItemGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPlatformMenuItemGroup_t qt_meta_stringdata_QQuickPlatformMenuItemGroup = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QQuickPlatformMenuItemGroup"
QT_MOC_LITERAL(1, 28, 9), // "triggered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "QQuickPlatformMenuItem*"
QT_MOC_LITERAL(4, 63, 4), // "item"
QT_MOC_LITERAL(5, 68, 7), // "hovered"
QT_MOC_LITERAL(6, 76, 14), // "enabledChanged"
QT_MOC_LITERAL(7, 91, 14), // "visibleChanged"
QT_MOC_LITERAL(8, 106, 16), // "exclusiveChanged"
QT_MOC_LITERAL(9, 123, 18), // "checkedItemChanged"
QT_MOC_LITERAL(10, 142, 12), // "itemsChanged"
QT_MOC_LITERAL(11, 155, 7), // "addItem"
QT_MOC_LITERAL(12, 163, 10), // "removeItem"
QT_MOC_LITERAL(13, 174, 5), // "clear"
QT_MOC_LITERAL(14, 180, 7), // "enabled"
QT_MOC_LITERAL(15, 188, 7), // "visible"
QT_MOC_LITERAL(16, 196, 9), // "exclusive"
QT_MOC_LITERAL(17, 206, 11), // "checkedItem"
QT_MOC_LITERAL(18, 218, 5), // "items"
QT_MOC_LITERAL(19, 224, 40) // "QQmlListProperty<QQuickPlatfo..."

    },
    "QQuickPlatformMenuItemGroup\0triggered\0"
    "\0QQuickPlatformMenuItem*\0item\0hovered\0"
    "enabledChanged\0visibleChanged\0"
    "exclusiveChanged\0checkedItemChanged\0"
    "itemsChanged\0addItem\0removeItem\0clear\0"
    "enabled\0visible\0exclusive\0checkedItem\0"
    "items\0QQmlListProperty<QQuickPlatformMenuItem>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPlatformMenuItemGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,
       7,    0,   71,    2, 0x06 /* Public */,
       8,    0,   72,    2, 0x06 /* Public */,
       9,    0,   73,    2, 0x06 /* Public */,
      10,    0,   74,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   75,    2, 0x02 /* Public */,
      12,    1,   78,    2, 0x02 /* Public */,
      13,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495903,
      15, QMetaType::Bool, 0x00495903,
      16, QMetaType::Bool, 0x00495903,
      17, 0x80000000 | 3, 0x0049590b,
      18, 0x80000000 | 19, 0x00495809,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QQuickPlatformMenuItemGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPlatformMenuItemGroup *_t = static_cast<QQuickPlatformMenuItemGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QQuickPlatformMenuItem*(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< QQuickPlatformMenuItem*(*)>(_a[1]))); break;
        case 2: _t->enabledChanged(); break;
        case 3: _t->visibleChanged(); break;
        case 4: _t->exclusiveChanged(); break;
        case 5: _t->checkedItemChanged(); break;
        case 6: _t->itemsChanged(); break;
        case 7: _t->addItem((*reinterpret_cast< QQuickPlatformMenuItem*(*)>(_a[1]))); break;
        case 8: _t->removeItem((*reinterpret_cast< QQuickPlatformMenuItem*(*)>(_a[1]))); break;
        case 9: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)(QQuickPlatformMenuItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::triggered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)(QQuickPlatformMenuItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::enabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::visibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::exclusiveChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::checkedItemChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuItemGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuItemGroup::itemsChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPlatformMenuItemGroup *_t = static_cast<QQuickPlatformMenuItemGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isExclusive(); break;
        case 3: *reinterpret_cast< QQuickPlatformMenuItem**>(_v) = _t->checkedItem(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QQuickPlatformMenuItem>*>(_v) = _t->items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPlatformMenuItemGroup *_t = static_cast<QQuickPlatformMenuItemGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setExclusive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCheckedItem(*reinterpret_cast< QQuickPlatformMenuItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPlatformMenuItemGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPlatformMenuItemGroup.data,
      qt_meta_data_QQuickPlatformMenuItemGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPlatformMenuItemGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPlatformMenuItemGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPlatformMenuItemGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPlatformMenuItemGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void QQuickPlatformMenuItemGroup::triggered(QQuickPlatformMenuItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickPlatformMenuItemGroup::hovered(QQuickPlatformMenuItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickPlatformMenuItemGroup::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPlatformMenuItemGroup::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPlatformMenuItemGroup::exclusiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickPlatformMenuItemGroup::checkedItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickPlatformMenuItemGroup::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
