/****************************************************************************
** Meta object code from reading C++ file 'qquickdrawer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickdrawer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdrawer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDrawer_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDrawer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDrawer_t qt_meta_stringdata_QQuickDrawer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQuickDrawer"
QT_MOC_LITERAL(1, 13, 11), // "edgeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "positionChanged"
QT_MOC_LITERAL(4, 42, 17), // "dragMarginChanged"
QT_MOC_LITERAL(5, 60, 18), // "interactiveChanged"
QT_MOC_LITERAL(6, 79, 4), // "edge"
QT_MOC_LITERAL(7, 84, 8), // "Qt::Edge"
QT_MOC_LITERAL(8, 93, 8), // "position"
QT_MOC_LITERAL(9, 102, 10), // "dragMargin"
QT_MOC_LITERAL(10, 113, 11) // "interactive"

    },
    "QQuickDrawer\0edgeChanged\0\0positionChanged\0"
    "dragMarginChanged\0interactiveChanged\0"
    "edge\0Qt::Edge\0position\0dragMargin\0"
    "interactive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDrawer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   38,    2, 0x06 /* Public */,
       3,    0,   39,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x06 /* Public */,
       5,    0,   41,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       2,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0049590b,
       8, QMetaType::QReal, 0x00495903,
       9, QMetaType::QReal, 0x00495907,
      10, QMetaType::Bool, 0x00c95903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // properties: revision
       0,
       0,
       0,
       2,

       0        // eod
};

void QQuickDrawer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDrawer *_t = static_cast<QQuickDrawer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->edgeChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->dragMarginChanged(); break;
        case 3: _t->interactiveChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDrawer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrawer::edgeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDrawer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrawer::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDrawer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrawer::dragMarginChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDrawer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrawer::interactiveChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDrawer *_t = static_cast<QQuickDrawer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Edge*>(_v) = _t->edge(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->dragMargin(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDrawer *_t = static_cast<QQuickDrawer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEdge(*reinterpret_cast< Qt::Edge*>(_v)); break;
        case 1: _t->setPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setDragMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickDrawer *_t = static_cast<QQuickDrawer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->resetDragMargin(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickDrawer::staticMetaObject = {
    { &QQuickPopup::staticMetaObject, qt_meta_stringdata_QQuickDrawer.data,
      qt_meta_data_QQuickDrawer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDrawer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDrawer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDrawer.stringdata0))
        return static_cast<void*>(this);
    return QQuickPopup::qt_metacast(_clname);
}

int QQuickDrawer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPopup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QQuickDrawer::edgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDrawer::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickDrawer::dragMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDrawer::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
