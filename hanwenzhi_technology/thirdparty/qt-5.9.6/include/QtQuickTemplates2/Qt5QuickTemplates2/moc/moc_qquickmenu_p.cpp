/****************************************************************************
** Meta object code from reading C++ file 'qquickmenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickmenu_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMenu_t {
    QByteArrayData data[18];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMenu_t qt_meta_stringdata_QQuickMenu = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickMenu"
QT_MOC_LITERAL(1, 11, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 27, 11), // "contentData"
QT_MOC_LITERAL(3, 39, 12), // "titleChanged"
QT_MOC_LITERAL(4, 52, 0), // ""
QT_MOC_LITERAL(5, 53, 6), // "itemAt"
QT_MOC_LITERAL(6, 60, 11), // "QQuickItem*"
QT_MOC_LITERAL(7, 72, 5), // "index"
QT_MOC_LITERAL(8, 78, 7), // "addItem"
QT_MOC_LITERAL(9, 86, 4), // "item"
QT_MOC_LITERAL(10, 91, 10), // "insertItem"
QT_MOC_LITERAL(11, 102, 8), // "moveItem"
QT_MOC_LITERAL(12, 111, 4), // "from"
QT_MOC_LITERAL(13, 116, 2), // "to"
QT_MOC_LITERAL(14, 119, 10), // "removeItem"
QT_MOC_LITERAL(15, 130, 12), // "contentModel"
QT_MOC_LITERAL(16, 143, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(17, 169, 5) // "title"

    },
    "QQuickMenu\0DefaultProperty\0contentData\0"
    "titleChanged\0\0itemAt\0QQuickItem*\0index\0"
    "addItem\0item\0insertItem\0moveItem\0from\0"
    "to\0removeItem\0contentModel\0"
    "QQmlListProperty<QObject>\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       3,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   46,    4, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   47,    4, 0x02 /* Public */,
       8,    1,   50,    4, 0x02 /* Public */,
      10,    2,   53,    4, 0x02 /* Public */,
      11,    2,   58,    4, 0x02 /* Public */,
      14,    1,   63,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 6,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    7,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
      15, QMetaType::QVariant, 0x00095c01,
       2, 0x80000000 | 16, 0x00095809,
      17, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void QQuickMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMenu *_t = static_cast<QQuickMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: { QQuickItem* _r = _t->itemAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->addItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 3: _t->insertItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 4: _t->moveItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->removeItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 3:
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
            typedef void (QQuickMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMenu::titleChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMenu *_t = static_cast<QQuickMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->contentModel(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->contentData(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMenu *_t = static_cast<QQuickMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMenu::staticMetaObject = {
    { &QQuickPopup::staticMetaObject, qt_meta_stringdata_QQuickMenu.data,
      qt_meta_data_QQuickMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMenu.stringdata0))
        return static_cast<void*>(this);
    return QQuickPopup::qt_metacast(_clname);
}

int QQuickMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPopup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
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
void QQuickMenu::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
