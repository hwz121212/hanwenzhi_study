/****************************************************************************
** Meta object code from reading C++ file 'connectdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../signalsloteditor/connectdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__ConnectDialog_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ConnectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ConnectDialog_t qt_meta_stringdata_qdesigner_internal__ConnectDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "qdesigner_internal::ConnectDi..."
QT_MOC_LITERAL(1, 34, 13), // "populateLists"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "selectSignal"
QT_MOC_LITERAL(4, 62, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 79, 4), // "item"
QT_MOC_LITERAL(6, 84, 10), // "selectSlot"
QT_MOC_LITERAL(7, 95, 18), // "populateSignalList"
QT_MOC_LITERAL(8, 114, 16), // "populateSlotList"
QT_MOC_LITERAL(9, 131, 6), // "signal"
QT_MOC_LITERAL(10, 138, 11), // "editSignals"
QT_MOC_LITERAL(11, 150, 9) // "editSlots"

    },
    "qdesigner_internal::ConnectDialog\0"
    "populateLists\0\0selectSignal\0"
    "QListWidgetItem*\0item\0selectSlot\0"
    "populateSignalList\0populateSlotList\0"
    "signal\0editSignals\0editSlots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ConnectDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x28 /* Private | MethodCloned */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::ConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectDialog *_t = static_cast<ConnectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateLists(); break;
        case 1: _t->selectSignal((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->selectSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->populateSignalList(); break;
        case 4: _t->populateSlotList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->populateSlotList(); break;
        case 6: _t->editSignals(); break;
        case 7: _t->editSlots(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::ConnectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ConnectDialog.data,
      qt_meta_data_qdesigner_internal__ConnectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ConnectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::ConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
