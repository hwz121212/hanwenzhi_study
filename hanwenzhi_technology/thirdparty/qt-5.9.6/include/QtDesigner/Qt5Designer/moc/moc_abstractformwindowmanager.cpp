/****************************************************************************
** Meta object code from reading C++ file 'abstractformwindowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../abstractformwindowmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractformwindowmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDesignerFormWindowManagerInterface_t {
    QByteArrayData data[15];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDesignerFormWindowManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDesignerFormWindowManagerInterface_t qt_meta_stringdata_QDesignerFormWindowManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QDesignerFormWindowManagerInt..."
QT_MOC_LITERAL(1, 36, 15), // "formWindowAdded"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 29), // "QDesignerFormWindowInterface*"
QT_MOC_LITERAL(4, 83, 10), // "formWindow"
QT_MOC_LITERAL(5, 94, 17), // "formWindowRemoved"
QT_MOC_LITERAL(6, 112, 23), // "activeFormWindowChanged"
QT_MOC_LITERAL(7, 136, 25), // "formWindowSettingsChanged"
QT_MOC_LITERAL(8, 162, 2), // "fw"
QT_MOC_LITERAL(9, 165, 13), // "addFormWindow"
QT_MOC_LITERAL(10, 179, 16), // "removeFormWindow"
QT_MOC_LITERAL(11, 196, 19), // "setActiveFormWindow"
QT_MOC_LITERAL(12, 216, 11), // "showPreview"
QT_MOC_LITERAL(13, 228, 16), // "closeAllPreviews"
QT_MOC_LITERAL(14, 245, 16) // "showPluginDialog"

    },
    "QDesignerFormWindowManagerInterface\0"
    "formWindowAdded\0\0QDesignerFormWindowInterface*\0"
    "formWindow\0formWindowRemoved\0"
    "activeFormWindowChanged\0"
    "formWindowSettingsChanged\0fw\0addFormWindow\0"
    "removeFormWindow\0setActiveFormWindow\0"
    "showPreview\0closeAllPreviews\0"
    "showPluginDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDesignerFormWindowManagerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QDesignerFormWindowManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesignerFormWindowManagerInterface *_t = static_cast<QDesignerFormWindowManagerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->formWindowAdded((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 1: _t->formWindowRemoved((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 2: _t->activeFormWindowChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 3: _t->formWindowSettingsChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 4: _t->addFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 5: _t->removeFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 6: _t->setActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 7: _t->showPreview(); break;
        case 8: _t->closeAllPreviews(); break;
        case 9: _t->showPluginDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDesignerFormWindowInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDesignerFormWindowManagerInterface::*_t)(QDesignerFormWindowInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerFormWindowManagerInterface::formWindowAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDesignerFormWindowManagerInterface::*_t)(QDesignerFormWindowInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerFormWindowManagerInterface::formWindowRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDesignerFormWindowManagerInterface::*_t)(QDesignerFormWindowInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerFormWindowManagerInterface::activeFormWindowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDesignerFormWindowManagerInterface::*_t)(QDesignerFormWindowInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerFormWindowManagerInterface::formWindowSettingsChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QDesignerFormWindowManagerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerFormWindowManagerInterface.data,
      qt_meta_data_QDesignerFormWindowManagerInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDesignerFormWindowManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDesignerFormWindowManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerFormWindowManagerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDesignerFormWindowManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QDesignerFormWindowManagerInterface::formWindowAdded(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerFormWindowManagerInterface::formWindowRemoved(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDesignerFormWindowManagerInterface::activeFormWindowChanged(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDesignerFormWindowManagerInterface::formWindowSettingsChanged(QDesignerFormWindowInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
