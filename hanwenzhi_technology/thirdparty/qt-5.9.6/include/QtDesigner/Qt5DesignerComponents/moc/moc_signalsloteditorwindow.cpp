/****************************************************************************
** Meta object code from reading C++ file 'signalsloteditorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../signalsloteditor/signalsloteditorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalsloteditorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow_t {
    QByteArrayData data[18];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow_t qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 42), // "qdesigner_internal::SignalSlo..."
QT_MOC_LITERAL(1, 43, 19), // "setActiveFormWindow"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 29), // "QDesignerFormWindowInterface*"
QT_MOC_LITERAL(4, 94, 4), // "form"
QT_MOC_LITERAL(5, 99, 21), // "updateDialogSelection"
QT_MOC_LITERAL(6, 121, 11), // "Connection*"
QT_MOC_LITERAL(7, 133, 3), // "con"
QT_MOC_LITERAL(8, 137, 21), // "updateEditorSelection"
QT_MOC_LITERAL(9, 159, 5), // "index"
QT_MOC_LITERAL(10, 165, 17), // "objectNameChanged"
QT_MOC_LITERAL(11, 183, 10), // "formWindow"
QT_MOC_LITERAL(12, 194, 6), // "object"
QT_MOC_LITERAL(13, 201, 7), // "newName"
QT_MOC_LITERAL(14, 209, 7), // "oldName"
QT_MOC_LITERAL(15, 217, 13), // "addConnection"
QT_MOC_LITERAL(16, 231, 16), // "removeConnection"
QT_MOC_LITERAL(17, 248, 8) // "updateUi"

    },
    "qdesigner_internal::SignalSlotEditorWindow\0"
    "setActiveFormWindow\0\0QDesignerFormWindowInterface*\0"
    "form\0updateDialogSelection\0Connection*\0"
    "con\0updateEditorSelection\0index\0"
    "objectNameChanged\0formWindow\0object\0"
    "newName\0oldName\0addConnection\0"
    "removeConnection\0updateUi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__SignalSlotEditorWindow[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      10,    4,   58,    2, 0x08 /* Private */,
      15,    0,   67,    2, 0x08 /* Private */,
      16,    0,   68,    2, 0x08 /* Private */,
      17,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::SignalSlotEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalSlotEditorWindow *_t = static_cast<SignalSlotEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 1: _t->updateDialogSelection((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 2: _t->updateEditorSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->objectNameChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->addConnection(); break;
        case 5: _t->removeConnection(); break;
        case 6: _t->updateUi(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::SignalSlotEditorWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow.data,
      qt_meta_data_qdesigner_internal__SignalSlotEditorWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::SignalSlotEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::SignalSlotEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__SignalSlotEditorWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qdesigner_internal::SignalSlotEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
