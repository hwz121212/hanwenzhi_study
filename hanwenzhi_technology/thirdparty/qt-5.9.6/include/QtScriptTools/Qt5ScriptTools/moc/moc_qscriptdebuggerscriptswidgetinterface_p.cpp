/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggerscriptswidgetinterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebuggerscriptswidgetinterface_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggerscriptswidgetinterface_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebuggerScriptsWidgetInterface_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerScriptsWidgetInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerScriptsWidgetInterface_t qt_meta_stringdata_QScriptDebuggerScriptsWidgetInterface = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QScriptDebuggerScriptsWidgetI..."
QT_MOC_LITERAL(1, 38, 20), // "currentScriptChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 8), // "scriptId"
QT_MOC_LITERAL(4, 69, 22), // "scriptLocationSelected"
QT_MOC_LITERAL(5, 92, 10) // "lineNumber"

    },
    "QScriptDebuggerScriptsWidgetInterface\0"
    "currentScriptChanged\0\0scriptId\0"
    "scriptLocationSelected\0lineNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerScriptsWidgetInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QScriptDebuggerScriptsWidgetInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerScriptsWidgetInterface *_t = static_cast<QScriptDebuggerScriptsWidgetInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentScriptChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->scriptLocationSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScriptDebuggerScriptsWidgetInterface::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebuggerScriptsWidgetInterface::currentScriptChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScriptDebuggerScriptsWidgetInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebuggerScriptsWidgetInterface::scriptLocationSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QScriptDebuggerScriptsWidgetInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QScriptDebuggerScriptsWidgetInterface.data,
      qt_meta_data_QScriptDebuggerScriptsWidgetInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebuggerScriptsWidgetInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerScriptsWidgetInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerScriptsWidgetInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QScriptDebuggerScriptsWidgetInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QScriptDebuggerScriptsWidgetInterface::currentScriptChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScriptDebuggerScriptsWidgetInterface::scriptLocationSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
