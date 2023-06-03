/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggercodefinderwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebuggercodefinderwidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggercodefinderwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebuggerCodeFinderWidget_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerCodeFinderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerCodeFinderWidget_t qt_meta_stringdata_QScriptDebuggerCodeFinderWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QScriptDebuggerCodeFinderWidget"
QT_MOC_LITERAL(1, 32, 16), // "_q_updateButtons"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "_q_onTextChanged"
QT_MOC_LITERAL(4, 67, 7), // "_q_next"
QT_MOC_LITERAL(5, 75, 11) // "_q_previous"

    },
    "QScriptDebuggerCodeFinderWidget\0"
    "_q_updateButtons\0\0_q_onTextChanged\0"
    "_q_next\0_q_previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerCodeFinderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QScriptDebuggerCodeFinderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerCodeFinderWidget *_t = static_cast<QScriptDebuggerCodeFinderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_updateButtons(); break;
        case 1: _t->d_func()->_q_onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_next(); break;
        case 3: _t->d_func()->_q_previous(); break;
        default: ;
        }
    }
}

const QMetaObject QScriptDebuggerCodeFinderWidget::staticMetaObject = {
    { &QScriptDebuggerCodeFinderWidgetInterface::staticMetaObject, qt_meta_stringdata_QScriptDebuggerCodeFinderWidget.data,
      qt_meta_data_QScriptDebuggerCodeFinderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebuggerCodeFinderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerCodeFinderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerCodeFinderWidget.stringdata0))
        return static_cast<void*>(this);
    return QScriptDebuggerCodeFinderWidgetInterface::qt_metacast(_clname);
}

int QScriptDebuggerCodeFinderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptDebuggerCodeFinderWidgetInterface::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
