/****************************************************************************
** Meta object code from reading C++ file 'qquickplatformmenubar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickplatformmenubar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickplatformmenubar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPlatformMenuBar_t {
    QByteArrayData data[18];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPlatformMenuBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPlatformMenuBar_t qt_meta_stringdata_QQuickPlatformMenuBar = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickPlatformMenuBar"
QT_MOC_LITERAL(1, 22, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 38, 4), // "data"
QT_MOC_LITERAL(3, 43, 12), // "menusChanged"
QT_MOC_LITERAL(4, 56, 0), // ""
QT_MOC_LITERAL(5, 57, 13), // "windowChanged"
QT_MOC_LITERAL(6, 71, 7), // "addMenu"
QT_MOC_LITERAL(7, 79, 19), // "QQuickPlatformMenu*"
QT_MOC_LITERAL(8, 99, 4), // "menu"
QT_MOC_LITERAL(9, 104, 10), // "insertMenu"
QT_MOC_LITERAL(10, 115, 5), // "index"
QT_MOC_LITERAL(11, 121, 10), // "removeMenu"
QT_MOC_LITERAL(12, 132, 5), // "clear"
QT_MOC_LITERAL(13, 138, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(14, 164, 5), // "menus"
QT_MOC_LITERAL(15, 170, 36), // "QQmlListProperty<QQuickPlatfo..."
QT_MOC_LITERAL(16, 207, 6), // "window"
QT_MOC_LITERAL(17, 214, 8) // "QWindow*"

    },
    "QQuickPlatformMenuBar\0DefaultProperty\0"
    "data\0menusChanged\0\0windowChanged\0"
    "addMenu\0QQuickPlatformMenu*\0menu\0"
    "insertMenu\0index\0removeMenu\0clear\0"
    "QQmlListProperty<QObject>\0menus\0"
    "QQmlListProperty<QQuickPlatformMenu>\0"
    "window\0QWindow*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPlatformMenuBar[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       3,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   46,    4, 0x06 /* Public */,
       5,    0,   47,    4, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   48,    4, 0x02 /* Public */,
       9,    2,   51,    4, 0x02 /* Public */,
      11,    1,   56,    4, 0x02 /* Public */,
      12,    0,   59,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,   10,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 13, 0x00095809,
      14, 0x80000000 | 15, 0x00495809,
      16, 0x80000000 | 17, 0x0049590b,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void QQuickPlatformMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPlatformMenuBar *_t = static_cast<QQuickPlatformMenuBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menusChanged(); break;
        case 1: _t->windowChanged(); break;
        case 2: _t->addMenu((*reinterpret_cast< QQuickPlatformMenu*(*)>(_a[1]))); break;
        case 3: _t->insertMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickPlatformMenu*(*)>(_a[2]))); break;
        case 4: _t->removeMenu((*reinterpret_cast< QQuickPlatformMenu*(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPlatformMenuBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuBar::menusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPlatformMenuBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPlatformMenuBar::windowChanged)) {
                *result = 1;
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
        QQuickPlatformMenuBar *_t = static_cast<QQuickPlatformMenuBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickPlatformMenu>*>(_v) = _t->menus(); break;
        case 2: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPlatformMenuBar *_t = static_cast<QQuickPlatformMenuBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPlatformMenuBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPlatformMenuBar.data,
      qt_meta_data_QQuickPlatformMenuBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPlatformMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPlatformMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPlatformMenuBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPlatformMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickPlatformMenuBar::menusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPlatformMenuBar::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
