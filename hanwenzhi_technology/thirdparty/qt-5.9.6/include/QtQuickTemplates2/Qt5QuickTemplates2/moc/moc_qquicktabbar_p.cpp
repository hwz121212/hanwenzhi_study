/****************************************************************************
** Meta object code from reading C++ file 'qquicktabbar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquicktabbar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktabbar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTabBar_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTabBar_t qt_meta_stringdata_QQuickTabBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQuickTabBar"
QT_MOC_LITERAL(1, 13, 15), // "positionChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "contentWidthChanged"
QT_MOC_LITERAL(4, 50, 20), // "contentHeightChanged"
QT_MOC_LITERAL(5, 71, 8), // "position"
QT_MOC_LITERAL(6, 80, 8), // "Position"
QT_MOC_LITERAL(7, 89, 12), // "contentWidth"
QT_MOC_LITERAL(8, 102, 13), // "contentHeight"
QT_MOC_LITERAL(9, 116, 6), // "Header"
QT_MOC_LITERAL(10, 123, 6) // "Footer"

    },
    "QQuickTabBar\0positionChanged\0\0"
    "contentWidthChanged\0contentHeightChanged\0"
    "position\0Position\0contentWidth\0"
    "contentHeight\0Header\0Footer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   32,    2, 0x06 /* Public */,
       3,    0,   33,    2, 0x86 /* Public | MethodRevisioned */,
       4,    0,   34,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       2,
       2,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049590b,
       7, QMetaType::QReal, 0x00c95907,
       8, QMetaType::QReal, 0x00c95907,

 // properties: notify_signal_id
       0,
       1,
       2,

 // properties: revision
       0,
       2,
       2,

 // enums: name, flags, count, data
       6, 0x0,    2,   54,

 // enum data: key, value
       9, uint(QQuickTabBar::Header),
      10, uint(QQuickTabBar::Footer),

       0        // eod
};

void QQuickTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTabBar *_t = static_cast<QQuickTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->contentWidthChanged(); break;
        case 2: _t->contentHeightChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickTabBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTabBar::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickTabBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTabBar::contentWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickTabBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTabBar::contentHeightChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTabBar *_t = static_cast<QQuickTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Position*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->contentWidth(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->contentHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickTabBar *_t = static_cast<QQuickTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< Position*>(_v)); break;
        case 1: _t->setContentWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setContentHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickTabBar *_t = static_cast<QQuickTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: _t->resetContentWidth(); break;
        case 2: _t->resetContentHeight(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickTabBar::staticMetaObject = {
    { &QQuickContainer::staticMetaObject, qt_meta_stringdata_QQuickTabBar.data,
      qt_meta_data_QQuickTabBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTabBar.stringdata0))
        return static_cast<void*>(this);
    return QQuickContainer::qt_metacast(_clname);
}

int QQuickTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickContainer::qt_metacall(_c, _id, _a);
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
void QQuickTabBar::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickTabBar::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickTabBar::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
