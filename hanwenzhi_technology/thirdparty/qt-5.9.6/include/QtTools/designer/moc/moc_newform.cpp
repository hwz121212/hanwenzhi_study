/****************************************************************************
** Meta object code from reading C++ file 'newform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewForm_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewForm_t qt_meta_stringdata_NewForm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NewForm"
QT_MOC_LITERAL(1, 8, 20), // "slotButtonBoxClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 47, 3), // "btn"
QT_MOC_LITERAL(5, 51, 16), // "recentFileChosen"
QT_MOC_LITERAL(6, 68, 26), // "slotCurrentTemplateChanged"
QT_MOC_LITERAL(7, 95, 16), // "templateSelected"
QT_MOC_LITERAL(8, 112, 21) // "slotTemplateActivated"

    },
    "NewForm\0slotButtonBoxClicked\0\0"
    "QAbstractButton*\0btn\0recentFileChosen\0"
    "slotCurrentTemplateChanged\0templateSelected\0"
    "slotTemplateActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewForm[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void NewForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewForm *_t = static_cast<NewForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotButtonBoxClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->recentFileChosen(); break;
        case 2: _t->slotCurrentTemplateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotTemplateActivated(); break;
        default: ;
        }
    }
}

const QMetaObject NewForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewForm.data,
      qt_meta_data_NewForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NewForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
