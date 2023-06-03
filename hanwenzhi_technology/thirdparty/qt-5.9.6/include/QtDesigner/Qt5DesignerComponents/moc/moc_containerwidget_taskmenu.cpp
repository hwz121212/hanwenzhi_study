/****************************************************************************
** Meta object code from reading C++ file 'containerwidget_taskmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../taskmenu/containerwidget_taskmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'containerwidget_taskmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenu_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenu_t qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 43), // "qdesigner_internal::Container..."
QT_MOC_LITERAL(1, 44, 17), // "removeCurrentPage"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 7), // "addPage"
QT_MOC_LITERAL(4, 71, 12) // "addPageAfter"

    },
    "qdesigner_internal::ContainerWidgetTaskMenu\0"
    "removeCurrentPage\0\0addPage\0addPageAfter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ContainerWidgetTaskMenu[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::ContainerWidgetTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContainerWidgetTaskMenu *_t = static_cast<ContainerWidgetTaskMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeCurrentPage(); break;
        case 1: _t->addPage(); break;
        case 2: _t->addPageAfter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::ContainerWidgetTaskMenu::staticMetaObject = {
    { &QDesignerTaskMenu::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenu.data,
      qt_meta_data_qdesigner_internal__ContainerWidgetTaskMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ContainerWidgetTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ContainerWidgetTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenu.stringdata0))
        return static_cast<void*>(this);
    return QDesignerTaskMenu::qt_metacast(_clname);
}

int qdesigner_internal::ContainerWidgetTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerTaskMenu::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_qdesigner_internal__WizardContainerWidgetTaskMenu_t {
    QByteArrayData data[1];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__WizardContainerWidgetTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__WizardContainerWidgetTaskMenu_t qt_meta_stringdata_qdesigner_internal__WizardContainerWidgetTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 49) // "qdesigner_internal::WizardCon..."

    },
    "qdesigner_internal::WizardContainerWidgetTaskMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__WizardContainerWidgetTaskMenu[] = {

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

void qdesigner_internal::WizardContainerWidgetTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::WizardContainerWidgetTaskMenu::staticMetaObject = {
    { &ContainerWidgetTaskMenu::staticMetaObject, qt_meta_stringdata_qdesigner_internal__WizardContainerWidgetTaskMenu.data,
      qt_meta_data_qdesigner_internal__WizardContainerWidgetTaskMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::WizardContainerWidgetTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::WizardContainerWidgetTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__WizardContainerWidgetTaskMenu.stringdata0))
        return static_cast<void*>(this);
    return ContainerWidgetTaskMenu::qt_metacast(_clname);
}

int qdesigner_internal::WizardContainerWidgetTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContainerWidgetTaskMenu::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qdesigner_internal__MdiContainerWidgetTaskMenu_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__MdiContainerWidgetTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__MdiContainerWidgetTaskMenu_t qt_meta_stringdata_qdesigner_internal__MdiContainerWidgetTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 46) // "qdesigner_internal::MdiContai..."

    },
    "qdesigner_internal::MdiContainerWidgetTaskMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__MdiContainerWidgetTaskMenu[] = {

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

void qdesigner_internal::MdiContainerWidgetTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::MdiContainerWidgetTaskMenu::staticMetaObject = {
    { &ContainerWidgetTaskMenu::staticMetaObject, qt_meta_stringdata_qdesigner_internal__MdiContainerWidgetTaskMenu.data,
      qt_meta_data_qdesigner_internal__MdiContainerWidgetTaskMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::MdiContainerWidgetTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::MdiContainerWidgetTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__MdiContainerWidgetTaskMenu.stringdata0))
        return static_cast<void*>(this);
    return ContainerWidgetTaskMenu::qt_metacast(_clname);
}

int qdesigner_internal::MdiContainerWidgetTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContainerWidgetTaskMenu::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenuFactory_t {
    QByteArrayData data[1];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenuFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenuFactory_t qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenuFactory = {
    {
QT_MOC_LITERAL(0, 0, 50) // "qdesigner_internal::Container..."

    },
    "qdesigner_internal::ContainerWidgetTaskMenuFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ContainerWidgetTaskMenuFactory[] = {

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

void qdesigner_internal::ContainerWidgetTaskMenuFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::ContainerWidgetTaskMenuFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenuFactory.data,
      qt_meta_data_qdesigner_internal__ContainerWidgetTaskMenuFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ContainerWidgetTaskMenuFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ContainerWidgetTaskMenuFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ContainerWidgetTaskMenuFactory.stringdata0))
        return static_cast<void*>(this);
    return QExtensionFactory::qt_metacast(_clname);
}

int qdesigner_internal::ContainerWidgetTaskMenuFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
