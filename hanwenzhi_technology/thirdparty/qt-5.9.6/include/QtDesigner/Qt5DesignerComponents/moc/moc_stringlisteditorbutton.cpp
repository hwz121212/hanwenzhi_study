/****************************************************************************
** Meta object code from reading C++ file 'stringlisteditorbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertyeditor/stringlisteditorbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stringlisteditorbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__StringListEditorButton_t {
    QByteArrayData data[6];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__StringListEditorButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__StringListEditorButton_t qt_meta_stringdata_qdesigner_internal__StringListEditorButton = {
    {
QT_MOC_LITERAL(0, 0, 42), // "qdesigner_internal::StringLis..."
QT_MOC_LITERAL(1, 43, 17), // "stringListChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 10), // "stringList"
QT_MOC_LITERAL(4, 73, 13), // "setStringList"
QT_MOC_LITERAL(5, 87, 20) // "showStringListEditor"

    },
    "qdesigner_internal::StringListEditorButton\0"
    "stringListChanged\0\0stringList\0"
    "setStringList\0showStringListEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__StringListEditorButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::StringListEditorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringListEditorButton *_t = static_cast<StringListEditorButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stringListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->setStringList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->showStringListEditor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StringListEditorButton::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringListEditorButton::stringListChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::StringListEditorButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StringListEditorButton.data,
      qt_meta_data_qdesigner_internal__StringListEditorButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::StringListEditorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::StringListEditorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StringListEditorButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int qdesigner_internal::StringListEditorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qdesigner_internal::StringListEditorButton::stringListChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
