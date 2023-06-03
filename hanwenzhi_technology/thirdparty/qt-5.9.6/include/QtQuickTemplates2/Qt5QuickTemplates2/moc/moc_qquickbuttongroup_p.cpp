/****************************************************************************
** Meta object code from reading C++ file 'qquickbuttongroup_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickbuttongroup_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickbuttongroup_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickButtonGroup_t {
    QByteArrayData data[13];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickButtonGroup_t qt_meta_stringdata_QQuickButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickButtonGroup"
QT_MOC_LITERAL(1, 18, 20), // "checkedButtonChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "buttonsChanged"
QT_MOC_LITERAL(4, 55, 7), // "clicked"
QT_MOC_LITERAL(5, 63, 21), // "QQuickAbstractButton*"
QT_MOC_LITERAL(6, 85, 6), // "button"
QT_MOC_LITERAL(7, 92, 9), // "addButton"
QT_MOC_LITERAL(8, 102, 12), // "removeButton"
QT_MOC_LITERAL(9, 115, 16), // "_q_updateCurrent"
QT_MOC_LITERAL(10, 132, 13), // "checkedButton"
QT_MOC_LITERAL(11, 146, 7), // "buttons"
QT_MOC_LITERAL(12, 154, 38) // "QQmlListProperty<QQuickAbstra..."

    },
    "QQuickButtonGroup\0checkedButtonChanged\0"
    "\0buttonsChanged\0clicked\0QQuickAbstractButton*\0"
    "button\0addButton\0removeButton\0"
    "_q_updateCurrent\0checkedButton\0buttons\0"
    "QQmlListProperty<QQuickAbstractButton>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   50,    2, 0x06 /* Public */,
       3,    0,   51,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       1,

 // slots: revision
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 5, 0x0049510b,
      11, 0x80000000 | 12, 0x00495809,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickButtonGroup *_t = static_cast<QQuickButtonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkedButtonChanged(); break;
        case 1: _t->buttonsChanged(); break;
        case 2: _t->clicked((*reinterpret_cast< QQuickAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->addButton((*reinterpret_cast< QQuickAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->removeButton((*reinterpret_cast< QQuickAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_updateCurrent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickButtonGroup::checkedButtonChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickButtonGroup::buttonsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickButtonGroup::*_t)(QQuickAbstractButton * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickButtonGroup::clicked)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickButtonGroup *_t = static_cast<QQuickButtonGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickAbstractButton**>(_v) = _t->checkedButton(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickAbstractButton>*>(_v) = _t->buttons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickButtonGroup *_t = static_cast<QQuickButtonGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCheckedButton(*reinterpret_cast< QQuickAbstractButton**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickButtonGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickButtonGroup.data,
      qt_meta_data_QQuickButtonGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickButtonGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QQuickButtonGroup::checkedButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickButtonGroup::buttonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickButtonGroup::clicked(QQuickAbstractButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QQuickButtonGroupAttached_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickButtonGroupAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickButtonGroupAttached_t qt_meta_stringdata_QQuickButtonGroupAttached = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickButtonGroupAttached"
QT_MOC_LITERAL(1, 26, 12), // "groupChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "group"
QT_MOC_LITERAL(4, 46, 18) // "QQuickButtonGroup*"

    },
    "QQuickButtonGroupAttached\0groupChanged\0"
    "\0group\0QQuickButtonGroup*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickButtonGroupAttached[] = {

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
       3, 0x80000000 | 4, 0x0049590b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickButtonGroupAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickButtonGroupAttached *_t = static_cast<QQuickButtonGroupAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickButtonGroupAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickButtonGroupAttached::groupChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickButtonGroup* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickButtonGroupAttached *_t = static_cast<QQuickButtonGroupAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickButtonGroup**>(_v) = _t->group(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickButtonGroupAttached *_t = static_cast<QQuickButtonGroupAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroup(*reinterpret_cast< QQuickButtonGroup**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickButtonGroupAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickButtonGroupAttached.data,
      qt_meta_data_QQuickButtonGroupAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickButtonGroupAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickButtonGroupAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickButtonGroupAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickButtonGroupAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickButtonGroupAttached::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
