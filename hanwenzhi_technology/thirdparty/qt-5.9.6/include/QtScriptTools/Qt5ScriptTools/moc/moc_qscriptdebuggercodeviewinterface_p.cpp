/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggercodeviewinterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebuggercodeviewinterface_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggercodeviewinterface_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebuggerCodeViewInterface_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerCodeViewInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerCodeViewInterface_t qt_meta_stringdata_QScriptDebuggerCodeViewInterface = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QScriptDebuggerCodeViewInterface"
QT_MOC_LITERAL(1, 33, 23), // "breakpointToggleRequest"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 10), // "lineNumber"
QT_MOC_LITERAL(4, 69, 2), // "on"
QT_MOC_LITERAL(5, 72, 23), // "breakpointEnableRequest"
QT_MOC_LITERAL(6, 96, 6), // "enable"
QT_MOC_LITERAL(7, 103, 14), // "toolTipRequest"
QT_MOC_LITERAL(8, 118, 3), // "pos"
QT_MOC_LITERAL(9, 122, 4) // "path"

    },
    "QScriptDebuggerCodeViewInterface\0"
    "breakpointToggleRequest\0\0lineNumber\0"
    "on\0breakpointEnableRequest\0enable\0"
    "toolTipRequest\0pos\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerCodeViewInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,
       7,    3,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    6,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int, QMetaType::QStringList,    8,    3,    9,

       0        // eod
};

void QScriptDebuggerCodeViewInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerCodeViewInterface *_t = static_cast<QScriptDebuggerCodeViewInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->breakpointToggleRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->breakpointEnableRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->toolTipRequest((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScriptDebuggerCodeViewInterface::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebuggerCodeViewInterface::breakpointToggleRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScriptDebuggerCodeViewInterface::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebuggerCodeViewInterface::breakpointEnableRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScriptDebuggerCodeViewInterface::*_t)(const QPoint & , int , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebuggerCodeViewInterface::toolTipRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QScriptDebuggerCodeViewInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QScriptDebuggerCodeViewInterface.data,
      qt_meta_data_QScriptDebuggerCodeViewInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebuggerCodeViewInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerCodeViewInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerCodeViewInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QScriptDebuggerCodeViewInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QScriptDebuggerCodeViewInterface::breakpointToggleRequest(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScriptDebuggerCodeViewInterface::breakpointEnableRequest(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QScriptDebuggerCodeViewInterface::toolTipRequest(const QPoint & _t1, int _t2, const QStringList & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
