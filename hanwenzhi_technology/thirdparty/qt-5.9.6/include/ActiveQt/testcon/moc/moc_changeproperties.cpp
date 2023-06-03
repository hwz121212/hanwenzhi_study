/****************************************************************************
** Meta object code from reading C++ file 'changeproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../changeproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changeproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChangeProperties_t {
    QByteArrayData data[9];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangeProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangeProperties_t qt_meta_stringdata_ChangeProperties = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ChangeProperties"
QT_MOC_LITERAL(1, 17, 16), // "updateProperties"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 36), // "on_listProperties_currentItem..."
QT_MOC_LITERAL(4, 72, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 89, 7), // "current"
QT_MOC_LITERAL(6, 97, 31), // "on_listEditRequests_itemChanged"
QT_MOC_LITERAL(7, 129, 4), // "item"
QT_MOC_LITERAL(8, 134, 20) // "on_buttonSet_clicked"

    },
    "ChangeProperties\0updateProperties\0\0"
    "on_listProperties_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0"
    "on_listEditRequests_itemChanged\0item\0"
    "on_buttonSet_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangeProperties[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x09 /* Protected */,
       6,    1,   38,    2, 0x09 /* Protected */,
       8,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void,

       0        // eod
};

void ChangeProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChangeProperties *_t = static_cast<ChangeProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProperties(); break;
        case 1: _t->on_listProperties_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_listEditRequests_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_buttonSet_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ChangeProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeProperties.data,
      qt_meta_data_ChangeProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChangeProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangeProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeProperties.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ChangeProperties"))
        return static_cast< Ui::ChangeProperties*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChangeProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
