/****************************************************************************
** Meta object code from reading C++ file 'qt3dquickwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt3dquickwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt3dquickwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__Quick__Qt3DQuickWindow_t {
    QByteArrayData data[8];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__Quick__Qt3DQuickWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__Quick__Qt3DQuickWindow_t qt_meta_stringdata_Qt3DExtras__Quick__Qt3DQuickWindow = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Qt3DExtras::Quick::Qt3DQuickW..."
QT_MOC_LITERAL(1, 35, 28), // "cameraAspectRatioModeChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 21), // "CameraAspectRatioMode"
QT_MOC_LITERAL(4, 87, 4), // "mode"
QT_MOC_LITERAL(5, 92, 21), // "cameraAspectRatioMode"
QT_MOC_LITERAL(6, 114, 20), // "AutomaticAspectRatio"
QT_MOC_LITERAL(7, 135, 15) // "UserAspectRatio"

    },
    "Qt3DExtras::Quick::Qt3DQuickWindow\0"
    "cameraAspectRatioModeChanged\0\0"
    "CameraAspectRatioMode\0mode\0"
    "cameraAspectRatioMode\0AutomaticAspectRatio\0"
    "UserAspectRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__Quick__Qt3DQuickWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       3, 0x0,    2,   30,

 // enum data: key, value
       6, uint(Qt3DExtras::Quick::Qt3DQuickWindow::AutomaticAspectRatio),
       7, uint(Qt3DExtras::Quick::Qt3DQuickWindow::UserAspectRatio),

       0        // eod
};

void Qt3DExtras::Quick::Qt3DQuickWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qt3DQuickWindow *_t = static_cast<Qt3DQuickWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraAspectRatioModeChanged((*reinterpret_cast< CameraAspectRatioMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Qt3DQuickWindow::*_t)(CameraAspectRatioMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Qt3DQuickWindow::cameraAspectRatioModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Qt3DQuickWindow *_t = static_cast<Qt3DQuickWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CameraAspectRatioMode*>(_v) = _t->cameraAspectRatioMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Qt3DQuickWindow *_t = static_cast<Qt3DQuickWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCameraAspectRatioMode(*reinterpret_cast< CameraAspectRatioMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::Quick::Qt3DQuickWindow::staticMetaObject = {
    { &QWindow::staticMetaObject, qt_meta_stringdata_Qt3DExtras__Quick__Qt3DQuickWindow.data,
      qt_meta_data_Qt3DExtras__Quick__Qt3DQuickWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::Quick::Qt3DQuickWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::Quick::Qt3DQuickWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__Quick__Qt3DQuickWindow.stringdata0))
        return static_cast<void*>(this);
    return QWindow::qt_metacast(_clname);
}

int Qt3DExtras::Quick::Qt3DQuickWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DExtras::Quick::Qt3DQuickWindow::cameraAspectRatioModeChanged(CameraAspectRatioMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
