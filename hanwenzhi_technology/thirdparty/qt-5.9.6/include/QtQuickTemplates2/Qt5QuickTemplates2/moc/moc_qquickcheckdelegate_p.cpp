/****************************************************************************
** Meta object code from reading C++ file 'qquickcheckdelegate_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickcheckdelegate_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcheckdelegate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickCheckDelegate_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCheckDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCheckDelegate_t qt_meta_stringdata_QQuickCheckDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickCheckDelegate"
QT_MOC_LITERAL(1, 20, 15), // "tristateChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "checkStateChanged"
QT_MOC_LITERAL(4, 55, 8), // "tristate"
QT_MOC_LITERAL(5, 64, 10), // "checkState"
QT_MOC_LITERAL(6, 75, 14) // "Qt::CheckState"

    },
    "QQuickCheckDelegate\0tristateChanged\0"
    "\0checkStateChanged\0tristate\0checkState\0"
    "Qt::CheckState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCheckDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495903,
       5, 0x80000000 | 6, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickCheckDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickCheckDelegate *_t = static_cast<QQuickCheckDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tristateChanged(); break;
        case 1: _t->checkStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickCheckDelegate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCheckDelegate::tristateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickCheckDelegate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCheckDelegate::checkStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickCheckDelegate *_t = static_cast<QQuickCheckDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTristate(); break;
        case 1: *reinterpret_cast< Qt::CheckState*>(_v) = _t->checkState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCheckDelegate *_t = static_cast<QQuickCheckDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTristate(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCheckState(*reinterpret_cast< Qt::CheckState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickCheckDelegate::staticMetaObject = {
    { &QQuickItemDelegate::staticMetaObject, qt_meta_stringdata_QQuickCheckDelegate.data,
      qt_meta_data_QQuickCheckDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCheckDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCheckDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCheckDelegate.stringdata0))
        return static_cast<void*>(this);
    return QQuickItemDelegate::qt_metacast(_clname);
}

int QQuickCheckDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void QQuickCheckDelegate::tristateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickCheckDelegate::checkStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
