/****************************************************************************
** Meta object code from reading C++ file 'inplace_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../taskmenu/inplace_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inplace_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__InPlaceEditor_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__InPlaceEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__InPlaceEditor_t qt_meta_stringdata_qdesigner_internal__InPlaceEditor = {
    {
QT_MOC_LITERAL(0, 0, 33) // "qdesigner_internal::InPlaceEd..."

    },
    "qdesigner_internal::InPlaceEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__InPlaceEditor[] = {

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

void qdesigner_internal::InPlaceEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::InPlaceEditor::staticMetaObject = {
    { &TextPropertyEditor::staticMetaObject, qt_meta_stringdata_qdesigner_internal__InPlaceEditor.data,
      qt_meta_data_qdesigner_internal__InPlaceEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::InPlaceEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::InPlaceEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__InPlaceEditor.stringdata0))
        return static_cast<void*>(this);
    return TextPropertyEditor::qt_metacast(_clname);
}

int qdesigner_internal::InPlaceEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextPropertyEditor::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor_t qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor = {
    {
QT_MOC_LITERAL(0, 0, 40), // "qdesigner_internal::TaskMenuI..."
QT_MOC_LITERAL(1, 41, 8), // "editText"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 10), // "updateText"
QT_MOC_LITERAL(4, 62, 4), // "text"
QT_MOC_LITERAL(5, 67, 15) // "updateSelection"

    },
    "qdesigner_internal::TaskMenuInlineEditor\0"
    "editText\0\0updateText\0text\0updateSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__TaskMenuInlineEditor[] = {

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
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::TaskMenuInlineEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskMenuInlineEditor *_t = static_cast<TaskMenuInlineEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editText(); break;
        case 1: _t->updateText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateSelection(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::TaskMenuInlineEditor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor.data,
      qt_meta_data_qdesigner_internal__TaskMenuInlineEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::TaskMenuInlineEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::TaskMenuInlineEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__TaskMenuInlineEditor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::TaskMenuInlineEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
