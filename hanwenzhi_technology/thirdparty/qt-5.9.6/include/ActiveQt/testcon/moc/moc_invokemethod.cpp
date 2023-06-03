/****************************************************************************
** Meta object code from reading C++ file 'invokemethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../invokemethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'invokemethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InvokeMethod_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InvokeMethod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InvokeMethod_t qt_meta_stringdata_InvokeMethod = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InvokeMethod"
QT_MOC_LITERAL(1, 13, 23), // "on_buttonInvoke_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "on_buttonSet_clicked"
QT_MOC_LITERAL(4, 59, 25), // "on_comboMethods_activated"
QT_MOC_LITERAL(5, 85, 6), // "method"
QT_MOC_LITERAL(6, 92, 36), // "on_listParameters_currentItem..."
QT_MOC_LITERAL(7, 129, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 146, 4) // "item"

    },
    "InvokeMethod\0on_buttonInvoke_clicked\0"
    "\0on_buttonSet_clicked\0on_comboMethods_activated\0"
    "method\0on_listParameters_currentItemChanged\0"
    "QTreeWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InvokeMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       6,    1,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void InvokeMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InvokeMethod *_t = static_cast<InvokeMethod *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonInvoke_clicked(); break;
        case 1: _t->on_buttonSet_clicked(); break;
        case 2: _t->on_comboMethods_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_listParameters_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject InvokeMethod::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InvokeMethod.data,
      qt_meta_data_InvokeMethod,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InvokeMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InvokeMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InvokeMethod.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::InvokeMethod"))
        return static_cast< Ui::InvokeMethod*>(this);
    return QDialog::qt_metacast(_clname);
}

int InvokeMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
