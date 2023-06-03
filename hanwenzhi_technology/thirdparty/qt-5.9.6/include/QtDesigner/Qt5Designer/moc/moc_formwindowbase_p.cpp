/****************************************************************************
** Meta object code from reading C++ file 'formwindowbase_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/formwindowbase_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formwindowbase_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__FormWindowBase_t {
    QByteArrayData data[11];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__FormWindowBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__FormWindowBase_t qt_meta_stringdata_qdesigner_internal__FormWindowBase = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::FormWindo..."
QT_MOC_LITERAL(1, 35, 20), // "resourceSetActivated"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 14), // "QtResourceSet*"
QT_MOC_LITERAL(4, 72, 11), // "resourceSet"
QT_MOC_LITERAL(5, 84, 18), // "resourceSetChanged"
QT_MOC_LITERAL(6, 103, 20), // "triggerDefaultAction"
QT_MOC_LITERAL(7, 124, 8), // "QWidget*"
QT_MOC_LITERAL(8, 133, 1), // "w"
QT_MOC_LITERAL(9, 135, 14), // "sheetDestroyed"
QT_MOC_LITERAL(10, 150, 6) // "object"

    },
    "qdesigner_internal::FormWindowBase\0"
    "resourceSetActivated\0\0QtResourceSet*\0"
    "resourceSet\0resourceSetChanged\0"
    "triggerDefaultAction\0QWidget*\0w\0"
    "sheetDestroyed\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__FormWindowBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    1,   34,    2, 0x08 /* Private */,
       9,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QObjectStar,   10,

       0        // eod
};

void qdesigner_internal::FormWindowBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormWindowBase *_t = static_cast<FormWindowBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resourceSetActivated((*reinterpret_cast< QtResourceSet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->triggerDefaultAction((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->sheetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject qdesigner_internal::FormWindowBase::staticMetaObject = {
    { &QDesignerFormWindowInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__FormWindowBase.data,
      qt_meta_data_qdesigner_internal__FormWindowBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::FormWindowBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::FormWindowBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__FormWindowBase.stringdata0))
        return static_cast<void*>(this);
    return QDesignerFormWindowInterface::qt_metacast(_clname);
}

int qdesigner_internal::FormWindowBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerFormWindowInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
