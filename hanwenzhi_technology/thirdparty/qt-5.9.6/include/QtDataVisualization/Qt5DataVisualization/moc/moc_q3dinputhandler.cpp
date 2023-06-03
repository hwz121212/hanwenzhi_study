/****************************************************************************
** Meta object code from reading C++ file 'q3dinputhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../q3dinputhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dinputhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Q3DInputHandler_t {
    QByteArrayData data[11];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Q3DInputHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Q3DInputHandler_t qt_meta_stringdata_QtDataVisualization__Q3DInputHandler = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QtDataVisualization::Q3DInput..."
QT_MOC_LITERAL(1, 37, 22), // "rotationEnabledChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 6), // "enable"
QT_MOC_LITERAL(4, 68, 18), // "zoomEnabledChanged"
QT_MOC_LITERAL(5, 87, 23), // "selectionEnabledChanged"
QT_MOC_LITERAL(6, 111, 26), // "zoomAtTargetEnabledChanged"
QT_MOC_LITERAL(7, 138, 15), // "rotationEnabled"
QT_MOC_LITERAL(8, 154, 11), // "zoomEnabled"
QT_MOC_LITERAL(9, 166, 16), // "selectionEnabled"
QT_MOC_LITERAL(10, 183, 19) // "zoomAtTargetEnabled"

    },
    "QtDataVisualization::Q3DInputHandler\0"
    "rotationEnabledChanged\0\0enable\0"
    "zoomEnabledChanged\0selectionEnabledChanged\0"
    "zoomAtTargetEnabledChanged\0rotationEnabled\0"
    "zoomEnabled\0selectionEnabled\0"
    "zoomAtTargetEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Q3DInputHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QtDataVisualization::Q3DInputHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q3DInputHandler *_t = static_cast<Q3DInputHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotationEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->zoomEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->selectionEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->zoomAtTargetEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Q3DInputHandler::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DInputHandler::rotationEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Q3DInputHandler::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DInputHandler::zoomEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Q3DInputHandler::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DInputHandler::selectionEnabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Q3DInputHandler::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DInputHandler::zoomAtTargetEnabledChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q3DInputHandler *_t = static_cast<Q3DInputHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRotationEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isZoomEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSelectionEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isZoomAtTargetEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q3DInputHandler *_t = static_cast<Q3DInputHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRotationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setZoomEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSelectionEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setZoomAtTargetEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::Q3DInputHandler::staticMetaObject = {
    { &QAbstract3DInputHandler::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Q3DInputHandler.data,
      qt_meta_data_QtDataVisualization__Q3DInputHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Q3DInputHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Q3DInputHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Q3DInputHandler.stringdata0))
        return static_cast<void*>(this);
    return QAbstract3DInputHandler::qt_metacast(_clname);
}

int QtDataVisualization::Q3DInputHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstract3DInputHandler::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::Q3DInputHandler::rotationEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::Q3DInputHandler::zoomEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::Q3DInputHandler::selectionEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::Q3DInputHandler::zoomAtTargetEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
