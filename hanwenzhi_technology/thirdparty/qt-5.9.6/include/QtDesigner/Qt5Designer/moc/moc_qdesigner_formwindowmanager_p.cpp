/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_formwindowmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/qdesigner_formwindowmanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_formwindowmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager_t qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager = {
    {
QT_MOC_LITERAL(0, 0, 46) // "qdesigner_internal::QDesigner..."

    },
    "qdesigner_internal::QDesignerFormWindowManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__QDesignerFormWindowManager[] = {

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

void qdesigner_internal::QDesignerFormWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::QDesignerFormWindowManager::staticMetaObject = {
    { &QDesignerFormWindowManagerInterface::staticMetaObject, qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager.data,
      qt_meta_data_qdesigner_internal__QDesignerFormWindowManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::QDesignerFormWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::QDesignerFormWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__QDesignerFormWindowManager.stringdata0))
        return static_cast<void*>(this);
    return QDesignerFormWindowManagerInterface::qt_metacast(_clname);
}

int qdesigner_internal::QDesignerFormWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerFormWindowManagerInterface::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
