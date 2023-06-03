/****************************************************************************
** Meta object code from reading C++ file 'itemlisteditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../taskmenu/itemlisteditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemlisteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__AbstractItemEditor_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__AbstractItemEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__AbstractItemEditor_t qt_meta_stringdata_qdesigner_internal__AbstractItemEditor = {
    {
QT_MOC_LITERAL(0, 0, 38), // "qdesigner_internal::AbstractI..."
QT_MOC_LITERAL(1, 39, 13), // "cacheReloaded"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 15), // "propertyChanged"
QT_MOC_LITERAL(4, 70, 11), // "QtProperty*"
QT_MOC_LITERAL(5, 82, 8), // "property"
QT_MOC_LITERAL(6, 91, 13) // "resetProperty"

    },
    "qdesigner_internal::AbstractItemEditor\0"
    "cacheReloaded\0\0propertyChanged\0"
    "QtProperty*\0property\0resetProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__AbstractItemEditor[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void qdesigner_internal::AbstractItemEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractItemEditor *_t = static_cast<AbstractItemEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cacheReloaded(); break;
        case 1: _t->propertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 2: _t->resetProperty((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::AbstractItemEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__AbstractItemEditor.data,
      qt_meta_data_qdesigner_internal__AbstractItemEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::AbstractItemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::AbstractItemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__AbstractItemEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::AbstractItemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_qdesigner_internal__ItemListEditor_t {
    QByteArrayData data[21];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ItemListEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ItemListEditor_t qt_meta_stringdata_qdesigner_internal__ItemListEditor = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::ItemListE..."
QT_MOC_LITERAL(1, 35, 12), // "indexChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "idx"
QT_MOC_LITERAL(4, 53, 11), // "itemChanged"
QT_MOC_LITERAL(5, 65, 4), // "role"
QT_MOC_LITERAL(6, 70, 1), // "v"
QT_MOC_LITERAL(7, 72, 12), // "itemInserted"
QT_MOC_LITERAL(8, 85, 11), // "itemDeleted"
QT_MOC_LITERAL(9, 97, 11), // "itemMovedUp"
QT_MOC_LITERAL(10, 109, 13), // "itemMovedDown"
QT_MOC_LITERAL(11, 123, 28), // "on_newListItemButton_clicked"
QT_MOC_LITERAL(12, 152, 31), // "on_deleteListItemButton_clicked"
QT_MOC_LITERAL(13, 184, 31), // "on_moveListItemUpButton_clicked"
QT_MOC_LITERAL(14, 216, 33), // "on_moveListItemDownButton_cli..."
QT_MOC_LITERAL(15, 250, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(16, 282, 25), // "on_listWidget_itemChanged"
QT_MOC_LITERAL(17, 308, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(18, 325, 4), // "item"
QT_MOC_LITERAL(19, 330, 21), // "togglePropertyBrowser"
QT_MOC_LITERAL(20, 352, 13) // "cacheReloaded"

    },
    "qdesigner_internal::ItemListEditor\0"
    "indexChanged\0\0idx\0itemChanged\0role\0v\0"
    "itemInserted\0itemDeleted\0itemMovedUp\0"
    "itemMovedDown\0on_newListItemButton_clicked\0"
    "on_deleteListItemButton_clicked\0"
    "on_moveListItemUpButton_clicked\0"
    "on_moveListItemDownButton_clicked\0"
    "on_listWidget_currentRowChanged\0"
    "on_listWidget_itemChanged\0QListWidgetItem*\0"
    "item\0togglePropertyBrowser\0cacheReloaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ItemListEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    3,   87,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       8,    1,   97,    2, 0x06 /* Public */,
       9,    1,  100,    2, 0x06 /* Public */,
      10,    1,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,    3,    5,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::ItemListEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemListEditor *_t = static_cast<ItemListEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->itemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 2: _t->itemInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->itemDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->itemMovedUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->itemMovedDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_newListItemButton_clicked(); break;
        case 7: _t->on_deleteListItemButton_clicked(); break;
        case 8: _t->on_moveListItemUpButton_clicked(); break;
        case 9: _t->on_moveListItemDownButton_clicked(); break;
        case 10: _t->on_listWidget_currentRowChanged(); break;
        case 11: _t->on_listWidget_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->togglePropertyBrowser(); break;
        case 13: _t->cacheReloaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ItemListEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemListEditor::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemListEditor::*_t)(int , int , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemListEditor::itemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ItemListEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemListEditor::itemInserted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ItemListEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemListEditor::itemDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ItemListEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemListEditor::itemMovedUp)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ItemListEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemListEditor::itemMovedDown)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ItemListEditor::staticMetaObject = {
    { &AbstractItemEditor::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ItemListEditor.data,
      qt_meta_data_qdesigner_internal__ItemListEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ItemListEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ItemListEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ItemListEditor.stringdata0))
        return static_cast<void*>(this);
    return AbstractItemEditor::qt_metacast(_clname);
}

int qdesigner_internal::ItemListEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractItemEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ItemListEditor::indexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ItemListEditor::itemChanged(int _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ItemListEditor::itemInserted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qdesigner_internal::ItemListEditor::itemDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qdesigner_internal::ItemListEditor::itemMovedUp(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qdesigner_internal::ItemListEditor::itemMovedDown(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
