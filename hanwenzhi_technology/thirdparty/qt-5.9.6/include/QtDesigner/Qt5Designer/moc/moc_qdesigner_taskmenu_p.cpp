/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_taskmenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/qdesigner_taskmenu_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_taskmenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu_t {
    QByteArrayData data[16];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu_t qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 37), // "qdesigner_internal::QDesigner..."
QT_MOC_LITERAL(1, 38, 16), // "changeObjectName"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 13), // "changeToolTip"
QT_MOC_LITERAL(4, 70, 15), // "changeWhatsThis"
QT_MOC_LITERAL(5, 86, 16), // "changeStyleSheet"
QT_MOC_LITERAL(6, 103, 13), // "createMenuBar"
QT_MOC_LITERAL(7, 117, 10), // "addToolBar"
QT_MOC_LITERAL(8, 128, 15), // "createStatusBar"
QT_MOC_LITERAL(9, 144, 15), // "removeStatusBar"
QT_MOC_LITERAL(10, 160, 20), // "containerFakeMethods"
QT_MOC_LITERAL(11, 181, 18), // "slotNavigateToSlot"
QT_MOC_LITERAL(12, 200, 9), // "applySize"
QT_MOC_LITERAL(13, 210, 8), // "QAction*"
QT_MOC_LITERAL(14, 219, 1), // "a"
QT_MOC_LITERAL(15, 221, 19) // "slotLayoutAlignment"

    },
    "qdesigner_internal::QDesignerTaskMenu\0"
    "changeObjectName\0\0changeToolTip\0"
    "changeWhatsThis\0changeStyleSheet\0"
    "createMenuBar\0addToolBar\0createStatusBar\0"
    "removeStatusBar\0containerFakeMethods\0"
    "slotNavigateToSlot\0applySize\0QAction*\0"
    "a\0slotLayoutAlignment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__QDesignerTaskMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::QDesignerTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesignerTaskMenu *_t = static_cast<QDesignerTaskMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeObjectName(); break;
        case 1: _t->changeToolTip(); break;
        case 2: _t->changeWhatsThis(); break;
        case 3: _t->changeStyleSheet(); break;
        case 4: _t->createMenuBar(); break;
        case 5: _t->addToolBar(); break;
        case 6: _t->createStatusBar(); break;
        case 7: _t->removeStatusBar(); break;
        case 8: _t->containerFakeMethods(); break;
        case 9: _t->slotNavigateToSlot(); break;
        case 10: _t->applySize((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->slotLayoutAlignment(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::QDesignerTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu.data,
      qt_meta_data_qdesigner_internal__QDesignerTaskMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::QDesignerTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::QDesignerTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerTaskMenu.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(this);
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
