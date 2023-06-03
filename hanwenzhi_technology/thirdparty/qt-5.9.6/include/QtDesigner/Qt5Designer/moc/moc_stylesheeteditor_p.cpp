/****************************************************************************
** Meta object code from reading C++ file 'stylesheeteditor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/stylesheeteditor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stylesheeteditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__StyleSheetEditor_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__StyleSheetEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__StyleSheetEditor_t qt_meta_stringdata_qdesigner_internal__StyleSheetEditor = {
    {
QT_MOC_LITERAL(0, 0, 36) // "qdesigner_internal::StyleShee..."

    },
    "qdesigner_internal::StyleSheetEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__StyleSheetEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qdesigner_internal::StyleSheetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::StyleSheetEditor::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StyleSheetEditor.data,
      qt_meta_data_qdesigner_internal__StyleSheetEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::StyleSheetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::StyleSheetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StyleSheetEditor.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int qdesigner_internal::StyleSheetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog_t {
    QByteArrayData data[11];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog_t qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog = {
    {
QT_MOC_LITERAL(0, 0, 42), // "qdesigner_internal::StyleShee..."
QT_MOC_LITERAL(1, 43, 18), // "validateStyleSheet"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 24), // "slotContextMenuRequested"
QT_MOC_LITERAL(4, 88, 3), // "pos"
QT_MOC_LITERAL(5, 92, 15), // "slotAddResource"
QT_MOC_LITERAL(6, 108, 8), // "property"
QT_MOC_LITERAL(7, 117, 15), // "slotAddGradient"
QT_MOC_LITERAL(8, 133, 12), // "slotAddColor"
QT_MOC_LITERAL(9, 146, 11), // "slotAddFont"
QT_MOC_LITERAL(10, 158, 15) // "slotRequestHelp"

    },
    "qdesigner_internal::StyleSheetEditorDialog\0"
    "validateStyleSheet\0\0slotContextMenuRequested\0"
    "pos\0slotAddResource\0property\0"
    "slotAddGradient\0slotAddColor\0slotAddFont\0"
    "slotRequestHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__StyleSheetEditorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       8,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::StyleSheetEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StyleSheetEditorDialog *_t = static_cast<StyleSheetEditorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validateStyleSheet(); break;
        case 1: _t->slotContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->slotAddResource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotAddGradient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotAddColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotAddFont(); break;
        case 6: _t->slotRequestHelp(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::StyleSheetEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog.data,
      qt_meta_data_qdesigner_internal__StyleSheetEditorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::StyleSheetEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::StyleSheetEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StyleSheetEditorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::StyleSheetEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog_t {
    QByteArrayData data[3];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog_t qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog = {
    {
QT_MOC_LITERAL(0, 0, 50), // "qdesigner_internal::StyleShee..."
QT_MOC_LITERAL(1, 51, 15), // "applyStyleSheet"
QT_MOC_LITERAL(2, 67, 0) // ""

    },
    "qdesigner_internal::StyleSheetPropertyEditorDialog\0"
    "applyStyleSheet\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__StyleSheetPropertyEditorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::StyleSheetPropertyEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StyleSheetPropertyEditorDialog *_t = static_cast<StyleSheetPropertyEditorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyStyleSheet(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::StyleSheetPropertyEditorDialog::staticMetaObject = {
    { &StyleSheetEditorDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog.data,
      qt_meta_data_qdesigner_internal__StyleSheetPropertyEditorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::StyleSheetPropertyEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::StyleSheetPropertyEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StyleSheetPropertyEditorDialog.stringdata0))
        return static_cast<void*>(this);
    return StyleSheetEditorDialog::qt_metacast(_clname);
}

int qdesigner_internal::StyleSheetPropertyEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleSheetEditorDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
