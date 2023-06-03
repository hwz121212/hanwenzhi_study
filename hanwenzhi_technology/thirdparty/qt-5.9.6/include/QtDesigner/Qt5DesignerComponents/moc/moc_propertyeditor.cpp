/****************************************************************************
** Meta object code from reading C++ file 'propertyeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertyeditor/propertyeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__PropertyEditor_t {
    QByteArrayData data[21];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__PropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__PropertyEditor_t qt_meta_stringdata_qdesigner_internal__PropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::PropertyE..."
QT_MOC_LITERAL(1, 35, 17), // "slotResetProperty"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 66, 8), // "property"
QT_MOC_LITERAL(5, 75, 16), // "slotValueChanged"
QT_MOC_LITERAL(6, 92, 5), // "value"
QT_MOC_LITERAL(7, 98, 25), // "enableSubPropertyHandling"
QT_MOC_LITERAL(8, 124, 17), // "slotViewTriggered"
QT_MOC_LITERAL(9, 142, 8), // "QAction*"
QT_MOC_LITERAL(10, 151, 6), // "action"
QT_MOC_LITERAL(11, 158, 22), // "slotAddDynamicProperty"
QT_MOC_LITERAL(12, 181, 25), // "slotRemoveDynamicProperty"
QT_MOC_LITERAL(13, 207, 11), // "slotSorting"
QT_MOC_LITERAL(14, 219, 4), // "sort"
QT_MOC_LITERAL(15, 224, 12), // "slotColoring"
QT_MOC_LITERAL(16, 237, 5), // "color"
QT_MOC_LITERAL(17, 243, 22), // "slotCurrentItemChanged"
QT_MOC_LITERAL(18, 266, 14), // "QtBrowserItem*"
QT_MOC_LITERAL(19, 281, 9), // "setFilter"
QT_MOC_LITERAL(20, 291, 7) // "pattern"

    },
    "qdesigner_internal::PropertyEditor\0"
    "slotResetProperty\0\0QtProperty*\0property\0"
    "slotValueChanged\0value\0enableSubPropertyHandling\0"
    "slotViewTriggered\0QAction*\0action\0"
    "slotAddDynamicProperty\0slotRemoveDynamicProperty\0"
    "slotSorting\0sort\0slotColoring\0color\0"
    "slotCurrentItemChanged\0QtBrowserItem*\0"
    "setFilter\0pattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__PropertyEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       5,    3,   62,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    1,   76,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,
      17,    1,   82,    2, 0x08 /* Private */,
      19,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void qdesigner_internal::PropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyEditor *_t = static_cast<PropertyEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotResetProperty((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 1: _t->slotValueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->slotViewTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->slotAddDynamicProperty((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->slotRemoveDynamicProperty(); break;
        case 5: _t->slotSorting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotColoring((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotCurrentItemChanged((*reinterpret_cast< QtBrowserItem*(*)>(_a[1]))); break;
        case 8: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::PropertyEditor::staticMetaObject = {
    { &QDesignerPropertyEditor::staticMetaObject, qt_meta_stringdata_qdesigner_internal__PropertyEditor.data,
      qt_meta_data_qdesigner_internal__PropertyEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::PropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::PropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__PropertyEditor.stringdata0))
        return static_cast<void*>(this);
    return QDesignerPropertyEditor::qt_metacast(_clname);
}

int qdesigner_internal::PropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerPropertyEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
