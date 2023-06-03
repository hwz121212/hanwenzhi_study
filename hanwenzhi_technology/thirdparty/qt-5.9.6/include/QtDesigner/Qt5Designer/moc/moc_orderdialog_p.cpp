/****************************************************************************
** Meta object code from reading C++ file 'orderdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/orderdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orderdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__OrderDialog_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__OrderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__OrderDialog_t qt_meta_stringdata_qdesigner_internal__OrderDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "qdesigner_internal::OrderDialog"
QT_MOC_LITERAL(1, 32, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 21), // "on_downButton_clicked"
QT_MOC_LITERAL(4, 75, 29), // "on_pageList_currentRowChanged"
QT_MOC_LITERAL(5, 105, 3), // "row"
QT_MOC_LITERAL(6, 109, 25), // "slotEnableButtonsAfterDnD"
QT_MOC_LITERAL(7, 135, 9) // "slotReset"

    },
    "qdesigner_internal::OrderDialog\0"
    "on_upButton_clicked\0\0on_downButton_clicked\0"
    "on_pageList_currentRowChanged\0row\0"
    "slotEnableButtonsAfterDnD\0slotReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__OrderDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::OrderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrderDialog *_t = static_cast<OrderDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_upButton_clicked(); break;
        case 1: _t->on_downButton_clicked(); break;
        case 2: _t->on_pageList_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotEnableButtonsAfterDnD(); break;
        case 4: _t->slotReset(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::OrderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__OrderDialog.data,
      qt_meta_data_qdesigner_internal__OrderDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::OrderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::OrderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__OrderDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::OrderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
