/****************************************************************************
** Meta object code from reading C++ file 'qabstract3dinputhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstract3dinputhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstract3dinputhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QAbstract3DInputHandler_t {
    QByteArrayData data[16];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QAbstract3DInputHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QAbstract3DInputHandler_t qt_meta_stringdata_QtDataVisualization__QAbstract3DInputHandler = {
    {
QT_MOC_LITERAL(0, 0, 44), // "QtDataVisualization::QAbstrac..."
QT_MOC_LITERAL(1, 45, 15), // "positionChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 8), // "position"
QT_MOC_LITERAL(4, 71, 16), // "inputViewChanged"
QT_MOC_LITERAL(5, 88, 34), // "QAbstract3DInputHandler::Inpu..."
QT_MOC_LITERAL(6, 123, 4), // "view"
QT_MOC_LITERAL(7, 128, 12), // "sceneChanged"
QT_MOC_LITERAL(8, 141, 9), // "Q3DScene*"
QT_MOC_LITERAL(9, 151, 5), // "scene"
QT_MOC_LITERAL(10, 157, 9), // "inputView"
QT_MOC_LITERAL(11, 167, 9), // "InputView"
QT_MOC_LITERAL(12, 177, 13), // "inputPosition"
QT_MOC_LITERAL(13, 191, 13), // "InputViewNone"
QT_MOC_LITERAL(14, 205, 18), // "InputViewOnPrimary"
QT_MOC_LITERAL(15, 224, 20) // "InputViewOnSecondary"

    },
    "QtDataVisualization::QAbstract3DInputHandler\0"
    "positionChanged\0\0position\0inputViewChanged\0"
    "QAbstract3DInputHandler::InputView\0"
    "view\0sceneChanged\0Q3DScene*\0scene\0"
    "inputView\0InputView\0inputPosition\0"
    "InputViewNone\0InputViewOnPrimary\0"
    "InputViewOnSecondary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QAbstract3DInputHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::QPoint, 0x00495103,
       9, 0x80000000 | 8, 0x0049510b,

 // properties: notify_signal_id
       1,
       0,
       2,

 // enums: name, flags, count, data
      11, 0x0,    3,   54,

 // enum data: key, value
      13, uint(QtDataVisualization::QAbstract3DInputHandler::InputViewNone),
      14, uint(QtDataVisualization::QAbstract3DInputHandler::InputViewOnPrimary),
      15, uint(QtDataVisualization::QAbstract3DInputHandler::InputViewOnSecondary),

       0        // eod
};

void QtDataVisualization::QAbstract3DInputHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstract3DInputHandler *_t = static_cast<QAbstract3DInputHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->inputViewChanged((*reinterpret_cast< QAbstract3DInputHandler::InputView(*)>(_a[1]))); break;
        case 2: _t->sceneChanged((*reinterpret_cast< Q3DScene*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Q3DScene* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstract3DInputHandler::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstract3DInputHandler::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstract3DInputHandler::*_t)(QAbstract3DInputHandler::InputView );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstract3DInputHandler::inputViewChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstract3DInputHandler::*_t)(Q3DScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstract3DInputHandler::sceneChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Q3DScene* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstract3DInputHandler *_t = static_cast<QAbstract3DInputHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< InputView*>(_v) = _t->inputView(); break;
        case 1: *reinterpret_cast< QPoint*>(_v) = _t->inputPosition(); break;
        case 2: *reinterpret_cast< Q3DScene**>(_v) = _t->scene(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstract3DInputHandler *_t = static_cast<QAbstract3DInputHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInputView(*reinterpret_cast< InputView*>(_v)); break;
        case 1: _t->setInputPosition(*reinterpret_cast< QPoint*>(_v)); break;
        case 2: _t->setScene(*reinterpret_cast< Q3DScene**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QAbstract3DInputHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QAbstract3DInputHandler.data,
      qt_meta_data_QtDataVisualization__QAbstract3DInputHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QAbstract3DInputHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QAbstract3DInputHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QAbstract3DInputHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtDataVisualization::QAbstract3DInputHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QAbstract3DInputHandler::positionChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QAbstract3DInputHandler::inputViewChanged(QAbstract3DInputHandler::InputView _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QAbstract3DInputHandler::sceneChanged(Q3DScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
