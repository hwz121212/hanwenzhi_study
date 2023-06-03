/****************************************************************************
** Meta object code from reading C++ file 'qquicktoolseparator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquicktoolseparator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktoolseparator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickToolSeparator_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickToolSeparator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickToolSeparator_t qt_meta_stringdata_QQuickToolSeparator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickToolSeparator"
QT_MOC_LITERAL(1, 20, 18), // "orientationChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "orientation"
QT_MOC_LITERAL(4, 52, 15), // "Qt::Orientation"
QT_MOC_LITERAL(5, 68, 10), // "horizontal"
QT_MOC_LITERAL(6, 79, 8) // "vertical"

    },
    "QQuickToolSeparator\0orientationChanged\0"
    "\0orientation\0Qt::Orientation\0horizontal\0"
    "vertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickToolSeparator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
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
       5, QMetaType::Bool, 0x00495801,
       6, QMetaType::Bool, 0x00495801,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void QQuickToolSeparator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickToolSeparator *_t = static_cast<QQuickToolSeparator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->orientationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickToolSeparator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolSeparator::orientationChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickToolSeparator *_t = static_cast<QQuickToolSeparator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isHorizontal(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isVertical(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickToolSeparator *_t = static_cast<QQuickToolSeparator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickToolSeparator::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickToolSeparator.data,
      qt_meta_data_QQuickToolSeparator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickToolSeparator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickToolSeparator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickToolSeparator.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickToolSeparator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
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
void QQuickToolSeparator::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
