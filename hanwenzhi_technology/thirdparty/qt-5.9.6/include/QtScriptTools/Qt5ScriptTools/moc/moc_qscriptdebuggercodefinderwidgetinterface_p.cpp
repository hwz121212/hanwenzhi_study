/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggercodefinderwidgetinterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebuggercodefinderwidgetinterface_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggercodefinderwidgetinterface_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebuggerCodeFinderWidgetInterface_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerCodeFinderWidgetInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerCodeFinderWidgetInterface_t qt_meta_stringdata_QScriptDebuggerCodeFinderWidgetInterface = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QScriptDebuggerCodeFinderWidg..."
QT_MOC_LITERAL(1, 41, 11), // "findRequest"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 3), // "exp"
QT_MOC_LITERAL(4, 58, 7) // "options"

    },
    "QScriptDebuggerCodeFinderWidgetInterface\0"
    "findRequest\0\0exp\0options"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerCodeFinderWidgetInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

       0        // eod
};

void QScriptDebuggerCodeFinderWidgetInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerCodeFinderWidgetInterface *_t = static_cast<QScriptDebuggerCodeFinderWidgetInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScriptDebuggerCodeFinderWidgetInterface::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebuggerCodeFinderWidgetInterface::findRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QScriptDebuggerCodeFinderWidgetInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QScriptDebuggerCodeFinderWidgetInterface.data,
      qt_meta_data_QScriptDebuggerCodeFinderWidgetInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebuggerCodeFinderWidgetInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerCodeFinderWidgetInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerCodeFinderWidgetInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QScriptDebuggerCodeFinderWidgetInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QScriptDebuggerCodeFinderWidgetInterface::findRequest(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
