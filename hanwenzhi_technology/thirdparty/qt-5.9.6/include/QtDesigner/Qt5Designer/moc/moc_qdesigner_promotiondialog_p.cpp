/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_promotiondialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/qdesigner_promotiondialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_promotiondialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel_t {
    QByteArrayData data[12];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel_t qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "qdesigner_internal::NewPromot..."
QT_MOC_LITERAL(1, 42, 16), // "newPromotedClass"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 19), // "PromotionParameters"
QT_MOC_LITERAL(4, 80, 5), // "bool*"
QT_MOC_LITERAL(5, 86, 2), // "ok"
QT_MOC_LITERAL(6, 89, 9), // "grabFocus"
QT_MOC_LITERAL(7, 99, 15), // "chooseBaseClass"
QT_MOC_LITERAL(8, 115, 15), // "slotNameChanged"
QT_MOC_LITERAL(9, 131, 22), // "slotIncludeFileChanged"
QT_MOC_LITERAL(10, 154, 7), // "slotAdd"
QT_MOC_LITERAL(11, 162, 9) // "slotReset"

    },
    "qdesigner_internal::NewPromotedClassPanel\0"
    "newPromotedClass\0\0PromotionParameters\0"
    "bool*\0ok\0grabFocus\0chooseBaseClass\0"
    "slotNameChanged\0slotIncludeFileChanged\0"
    "slotAdd\0slotReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__NewPromotedClassPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::NewPromotedClassPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewPromotedClassPanel *_t = static_cast<NewPromotedClassPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPromotedClass((*reinterpret_cast< const PromotionParameters(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 1: _t->grabFocus(); break;
        case 2: _t->chooseBaseClass((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotIncludeFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotAdd(); break;
        case 6: _t->slotReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NewPromotedClassPanel::*_t)(const PromotionParameters & , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewPromotedClassPanel::newPromotedClass)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::NewPromotedClassPanel::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel.data,
      qt_meta_data_qdesigner_internal__NewPromotedClassPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::NewPromotedClassPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::NewPromotedClassPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__NewPromotedClassPanel.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int qdesigner_internal::NewPromotedClassPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::NewPromotedClassPanel::newPromotedClass(const PromotionParameters & _t1, bool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog_t {
    QByteArrayData data[19];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog_t qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog = {
    {
QT_MOC_LITERAL(0, 0, 44), // "qdesigner_internal::QDesigner..."
QT_MOC_LITERAL(1, 45, 24), // "selectedBaseClassChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 10), // "slotRemove"
QT_MOC_LITERAL(4, 82, 19), // "slotAcceptPromoteTo"
QT_MOC_LITERAL(5, 102, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(6, 123, 14), // "QItemSelection"
QT_MOC_LITERAL(7, 138, 20), // "slotNewPromotedClass"
QT_MOC_LITERAL(8, 159, 19), // "PromotionParameters"
QT_MOC_LITERAL(9, 179, 5), // "bool*"
QT_MOC_LITERAL(10, 185, 2), // "ok"
QT_MOC_LITERAL(11, 188, 22), // "slotIncludeFileChanged"
QT_MOC_LITERAL(12, 211, 37), // "QDesignerWidgetDataBaseItemIn..."
QT_MOC_LITERAL(13, 249, 11), // "includeFile"
QT_MOC_LITERAL(14, 261, 20), // "slotClassNameChanged"
QT_MOC_LITERAL(15, 282, 7), // "newName"
QT_MOC_LITERAL(16, 290, 28), // "slotUpdateFromWidgetDatabase"
QT_MOC_LITERAL(17, 319, 23), // "slotTreeViewContextMenu"
QT_MOC_LITERAL(18, 343, 20) // "slotEditSignalsSlots"

    },
    "qdesigner_internal::QDesignerPromotionDialog\0"
    "selectedBaseClassChanged\0\0slotRemove\0"
    "slotAcceptPromoteTo\0slotSelectionChanged\0"
    "QItemSelection\0slotNewPromotedClass\0"
    "PromotionParameters\0bool*\0ok\0"
    "slotIncludeFileChanged\0"
    "QDesignerWidgetDataBaseItemInterface*\0"
    "includeFile\0slotClassNameChanged\0"
    "newName\0slotUpdateFromWidgetDatabase\0"
    "slotTreeViewContextMenu\0slotEditSignalsSlots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__QDesignerPromotionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x08 /* Private */,
       4,    0,   68,    2, 0x08 /* Private */,
       5,    2,   69,    2, 0x08 /* Private */,
       7,    2,   74,    2, 0x08 /* Private */,
      11,    2,   79,    2, 0x08 /* Private */,
      14,    2,   84,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,
      17,    1,   90,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,    2,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,    2,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::QDesignerPromotionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesignerPromotionDialog *_t = static_cast<QDesignerPromotionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedBaseClassChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotRemove(); break;
        case 2: _t->slotAcceptPromoteTo(); break;
        case 3: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->slotNewPromotedClass((*reinterpret_cast< const PromotionParameters(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->slotIncludeFileChanged((*reinterpret_cast< QDesignerWidgetDataBaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->slotClassNameChanged((*reinterpret_cast< QDesignerWidgetDataBaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->slotUpdateFromWidgetDatabase(); break;
        case 8: _t->slotTreeViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->slotEditSignalsSlots(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDesignerPromotionDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerPromotionDialog::selectedBaseClassChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::QDesignerPromotionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog.data,
      qt_meta_data_qdesigner_internal__QDesignerPromotionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::QDesignerPromotionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::QDesignerPromotionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerPromotionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerPromotionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::QDesignerPromotionDialog::selectedBaseClassChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
