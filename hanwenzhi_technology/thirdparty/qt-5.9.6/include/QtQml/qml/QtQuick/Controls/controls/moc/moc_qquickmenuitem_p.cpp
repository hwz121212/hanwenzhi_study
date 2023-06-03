/****************************************************************************
** Meta object code from reading C++ file 'qquickmenuitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickmenuitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmenuitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMenuItemType1_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenuItemType1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenuItemType1_t qt_meta_stringdata_QQuickMenuItemType1 = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickMenuItemType1"
QT_MOC_LITERAL(1, 20, 12), // "MenuItemType"
QT_MOC_LITERAL(2, 33, 9), // "Separator"
QT_MOC_LITERAL(3, 43, 4), // "Item"
QT_MOC_LITERAL(4, 48, 4), // "Menu"
QT_MOC_LITERAL(5, 53, 15) // "ScrollIndicator"

    },
    "QQuickMenuItemType1\0MenuItemType\0"
    "Separator\0Item\0Menu\0ScrollIndicator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenuItemType1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   18,

 // enum data: key, value
       2, uint(QQuickMenuItemType1::Separator),
       3, uint(QQuickMenuItemType1::Item),
       4, uint(QQuickMenuItemType1::Menu),
       5, uint(QQuickMenuItemType1::ScrollIndicator),

       0        // eod
};

const QMetaObject QQuickMenuItemType1::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QQuickMenuItemType1.data,
      qt_meta_data_QQuickMenuItemType1,  nullptr, nullptr, nullptr}
};

struct qt_meta_stringdata_QQuickMenuBase1_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenuBase1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenuBase1_t qt_meta_stringdata_QQuickMenuBase1 = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickMenuBase1"
QT_MOC_LITERAL(1, 16, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "visible"
QT_MOC_LITERAL(4, 40, 4), // "type"
QT_MOC_LITERAL(5, 45, 33), // "QQuickMenuItemType1::MenuItem..."
QT_MOC_LITERAL(6, 79, 12), // "__parentMenu"
QT_MOC_LITERAL(7, 92, 10), // "__isNative"
QT_MOC_LITERAL(8, 103, 12), // "__visualItem"
QT_MOC_LITERAL(9, 116, 11) // "QQuickItem*"

    },
    "QQuickMenuBase1\0visibleChanged\0\0visible\0"
    "type\0QQuickMenuItemType1::MenuItemType\0"
    "__parentMenu\0__isNative\0__visualItem\0"
    "QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenuBase1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       4, 0x80000000 | 5, 0x00095409,
       6, QMetaType::QObjectStar, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, 0x80000000 | 9, 0x0009500b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QQuickMenuBase1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMenuBase1 *_t = static_cast<QQuickMenuBase1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMenuBase1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuBase1::visibleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMenuBase1 *_t = static_cast<QQuickMenuBase1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 1: *reinterpret_cast< QQuickMenuItemType1::MenuItemType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->parentMenuOrMenuBar(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isNative(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->visualItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMenuBase1 *_t = static_cast<QQuickMenuBase1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVisualItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QQuickMenuBase1[] = {
        &QQuickMenuItemType1::staticMetaObject,
    nullptr
};

const QMetaObject QQuickMenuBase1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickMenuBase1.data,
      qt_meta_data_QQuickMenuBase1,  qt_static_metacall, qt_meta_extradata_QQuickMenuBase1, nullptr}
};


const QMetaObject *QQuickMenuBase1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMenuBase1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMenuBase1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickMenuBase1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickMenuBase1::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickMenuSeparator1_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenuSeparator1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenuSeparator1_t qt_meta_stringdata_QQuickMenuSeparator1 = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QQuickMenuSeparator1"

    },
    "QQuickMenuSeparator1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenuSeparator1[] = {

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

void QQuickMenuSeparator1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickMenuSeparator1::staticMetaObject = {
    { &QQuickMenuBase1::staticMetaObject, qt_meta_stringdata_QQuickMenuSeparator1.data,
      qt_meta_data_QQuickMenuSeparator1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMenuSeparator1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMenuSeparator1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMenuSeparator1.stringdata0))
        return static_cast<void*>(this);
    return QQuickMenuBase1::qt_metacast(_clname);
}

int QQuickMenuSeparator1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickMenuBase1::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickMenuText1_t {
    QByteArrayData data[14];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenuText1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenuText1_t qt_meta_stringdata_QQuickMenuText1 = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickMenuText1"
QT_MOC_LITERAL(1, 16, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "iconSourceChanged"
QT_MOC_LITERAL(4, 50, 15), // "iconNameChanged"
QT_MOC_LITERAL(5, 66, 13), // "__textChanged"
QT_MOC_LITERAL(6, 80, 13), // "__iconChanged"
QT_MOC_LITERAL(7, 94, 10), // "updateText"
QT_MOC_LITERAL(8, 105, 13), // "updateEnabled"
QT_MOC_LITERAL(9, 119, 10), // "updateIcon"
QT_MOC_LITERAL(10, 130, 7), // "enabled"
QT_MOC_LITERAL(11, 138, 10), // "iconSource"
QT_MOC_LITERAL(12, 149, 8), // "iconName"
QT_MOC_LITERAL(13, 158, 6) // "__icon"

    },
    "QQuickMenuText1\0enabledChanged\0\0"
    "iconSourceChanged\0iconNameChanged\0"
    "__textChanged\0__iconChanged\0updateText\0"
    "updateEnabled\0updateIcon\0enabled\0"
    "iconSource\0iconName\0__icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenuText1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x09 /* Protected */,
       8,    0,   60,    2, 0x09 /* Protected */,
       9,    0,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::QUrl, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,

       0        // eod
};

void QQuickMenuText1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMenuText1 *_t = static_cast<QQuickMenuText1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->iconSourceChanged(); break;
        case 2: _t->iconNameChanged(); break;
        case 3: _t->__textChanged(); break;
        case 4: _t->__iconChanged(); break;
        case 5: _t->updateText(); break;
        case 6: _t->updateEnabled(); break;
        case 7: _t->updateIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMenuText1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuText1::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickMenuText1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuText1::iconSourceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickMenuText1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuText1::iconNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickMenuText1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuText1::__textChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickMenuText1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuText1::__iconChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMenuText1 *_t = static_cast<QQuickMenuText1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->iconSource(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->iconVariant(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMenuText1 *_t = static_cast<QQuickMenuText1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIconSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setIconName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickMenuText1::staticMetaObject = {
    { &QQuickMenuBase1::staticMetaObject, qt_meta_stringdata_QQuickMenuText1.data,
      qt_meta_data_QQuickMenuText1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMenuText1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMenuText1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMenuText1.stringdata0))
        return static_cast<void*>(this);
    return QQuickMenuBase1::qt_metacast(_clname);
}

int QQuickMenuText1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickMenuBase1::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QQuickMenuText1::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickMenuText1::iconSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickMenuText1::iconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickMenuText1::__textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickMenuText1::__iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QQuickMenuItem1_t {
    QByteArrayData data[23];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenuItem1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenuItem1_t qt_meta_stringdata_QQuickMenuItem1 = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickMenuItem1"
QT_MOC_LITERAL(1, 16, 9), // "triggered"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "toggled"
QT_MOC_LITERAL(4, 35, 7), // "checked"
QT_MOC_LITERAL(5, 43, 11), // "textChanged"
QT_MOC_LITERAL(6, 55, 16), // "checkableChanged"
QT_MOC_LITERAL(7, 72, 21), // "exclusiveGroupChanged"
QT_MOC_LITERAL(8, 94, 15), // "shortcutChanged"
QT_MOC_LITERAL(9, 110, 13), // "actionChanged"
QT_MOC_LITERAL(10, 124, 7), // "trigger"
QT_MOC_LITERAL(11, 132, 14), // "updateShortcut"
QT_MOC_LITERAL(12, 147, 15), // "updateCheckable"
QT_MOC_LITERAL(13, 163, 13), // "updateChecked"
QT_MOC_LITERAL(14, 177, 12), // "bindToAction"
QT_MOC_LITERAL(15, 190, 14), // "QQuickAction1*"
QT_MOC_LITERAL(16, 205, 6), // "action"
QT_MOC_LITERAL(17, 212, 16), // "unbindFromAction"
QT_MOC_LITERAL(18, 229, 4), // "text"
QT_MOC_LITERAL(19, 234, 9), // "checkable"
QT_MOC_LITERAL(20, 244, 14), // "exclusiveGroup"
QT_MOC_LITERAL(21, 259, 22), // "QQuickExclusiveGroup1*"
QT_MOC_LITERAL(22, 282, 8) // "shortcut"

    },
    "QQuickMenuItem1\0triggered\0\0toggled\0"
    "checked\0textChanged\0checkableChanged\0"
    "exclusiveGroupChanged\0shortcutChanged\0"
    "actionChanged\0trigger\0updateShortcut\0"
    "updateCheckable\0updateChecked\0"
    "bindToAction\0QQuickAction1*\0action\0"
    "unbindFromAction\0text\0checkable\0"
    "exclusiveGroup\0QQuickExclusiveGroup1*\0"
    "shortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenuItem1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    0,   83,    2, 0x06 /* Public */,
       6,    0,   84,    2, 0x06 /* Public */,
       7,    0,   85,    2, 0x06 /* Public */,
       8,    0,   86,    2, 0x06 /* Public */,
       9,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x09 /* Protected */,
      12,    0,   90,    2, 0x09 /* Protected */,
      13,    0,   91,    2, 0x09 /* Protected */,
      14,    1,   92,    2, 0x09 /* Protected */,
      17,    1,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QObjectStar,   16,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
       4, QMetaType::Bool, 0x00495103,
      20, 0x80000000 | 21, 0x0049510b,
      22, QMetaType::QVariant, 0x00495103,
      16, 0x80000000 | 15, 0x0049500b,

 // properties: notify_signal_id
       2,
       3,
       1,
       4,
       5,
       6,

       0        // eod
};

void QQuickMenuItem1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMenuItem1 *_t = static_cast<QQuickMenuItem1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->textChanged(); break;
        case 3: _t->checkableChanged(); break;
        case 4: _t->exclusiveGroupChanged(); break;
        case 5: _t->shortcutChanged(); break;
        case 6: _t->actionChanged(); break;
        case 7: _t->trigger(); break;
        case 8: _t->updateShortcut(); break;
        case 9: _t->updateCheckable(); break;
        case 10: _t->updateChecked(); break;
        case 11: _t->bindToAction((*reinterpret_cast< QQuickAction1*(*)>(_a[1]))); break;
        case 12: _t->unbindFromAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMenuItem1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::triggered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickMenuItem1::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::toggled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickMenuItem1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::textChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickMenuItem1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::checkableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickMenuItem1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::exclusiveGroupChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickMenuItem1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::shortcutChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickMenuItem1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuItem1::actionChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMenuItem1 *_t = static_cast<QQuickMenuItem1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->checkable(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        case 3: *reinterpret_cast< QQuickExclusiveGroup1**>(_v) = _t->exclusiveGroup(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->shortcut(); break;
        case 5: *reinterpret_cast< QQuickAction1**>(_v) = _t->boundAction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMenuItem1 *_t = static_cast<QQuickMenuItem1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setExclusiveGroup(*reinterpret_cast< QQuickExclusiveGroup1**>(_v)); break;
        case 4: _t->setShortcut(*reinterpret_cast< QVariant*>(_v)); break;
        case 5: _t->setBoundAction(*reinterpret_cast< QQuickAction1**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMenuItem1::staticMetaObject = {
    { &QQuickMenuText1::staticMetaObject, qt_meta_stringdata_QQuickMenuItem1.data,
      qt_meta_data_QQuickMenuItem1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMenuItem1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMenuItem1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMenuItem1.stringdata0))
        return static_cast<void*>(this);
    return QQuickMenuText1::qt_metacast(_clname);
}

int QQuickMenuItem1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickMenuText1::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
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
void QQuickMenuItem1::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickMenuItem1::toggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickMenuItem1::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickMenuItem1::checkableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickMenuItem1::exclusiveGroupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickMenuItem1::shortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickMenuItem1::actionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
