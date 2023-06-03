/****************************************************************************
** Meta object code from reading C++ file 'qquickmenubar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickmenubar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmenubar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMenuBar1_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenuBar1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenuBar1_t qt_meta_stringdata_QQuickMenuBar1 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickMenuBar1"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 5), // "menus"
QT_MOC_LITERAL(3, 37, 12), // "menusChanged"
QT_MOC_LITERAL(4, 50, 0), // ""
QT_MOC_LITERAL(5, 51, 13), // "nativeChanged"
QT_MOC_LITERAL(6, 65, 18), // "contentItemChanged"
QT_MOC_LITERAL(7, 84, 29), // "QQmlListProperty<QQuickMenu1>"
QT_MOC_LITERAL(8, 114, 13), // "__contentItem"
QT_MOC_LITERAL(9, 128, 11), // "QQuickItem*"
QT_MOC_LITERAL(10, 140, 14), // "__parentWindow"
QT_MOC_LITERAL(11, 155, 13), // "QQuickWindow*"
QT_MOC_LITERAL(12, 169, 10) // "__isNative"

    },
    "QQuickMenuBar1\0DefaultProperty\0menus\0"
    "menusChanged\0\0nativeChanged\0"
    "contentItemChanged\0QQmlListProperty<QQuickMenu1>\0"
    "__contentItem\0QQuickItem*\0__parentWindow\0"
    "QQuickWindow*\0__isNative"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenuBar1[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,
       6,    0,   33,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 7, 0x00495009,
       8, 0x80000000 | 9, 0x0049500b,
      10, 0x80000000 | 11, 0x0009500b,
      12, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       2,
       0,
       1,

       0        // eod
};

void QQuickMenuBar1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMenuBar1 *_t = static_cast<QQuickMenuBar1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menusChanged(); break;
        case 1: _t->nativeChanged(); break;
        case 2: _t->contentItemChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMenuBar1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuBar1::menusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickMenuBar1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuBar1::nativeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickMenuBar1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenuBar1::contentItemChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickMenu1> >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMenuBar1 *_t = static_cast<QQuickMenuBar1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QQuickMenu1>*>(_v) = _t->menus(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 2: *reinterpret_cast< QQuickWindow**>(_v) = _t->parentWindow(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isNative(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMenuBar1 *_t = static_cast<QQuickMenuBar1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setContentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setParentWindow(*reinterpret_cast< QQuickWindow**>(_v)); break;
        case 3: _t->setNative(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMenuBar1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickMenuBar1.data,
      qt_meta_data_QQuickMenuBar1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMenuBar1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMenuBar1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMenuBar1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickMenuBar1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QQuickMenuBar1::menusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickMenuBar1::nativeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickMenuBar1::contentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
