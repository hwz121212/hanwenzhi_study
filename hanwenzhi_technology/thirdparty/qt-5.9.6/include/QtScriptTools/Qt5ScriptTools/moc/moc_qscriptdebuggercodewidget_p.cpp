/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggercodewidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebuggercodewidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggercodewidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebuggerCodeWidget_t {
    QByteArrayData data[9];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerCodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerCodeWidget_t qt_meta_stringdata_QScriptDebuggerCodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QScriptDebuggerCodeWidget"
QT_MOC_LITERAL(1, 26, 28), // "_q_onBreakpointToggleRequest"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 28), // "_q_onBreakpointEnableRequest"
QT_MOC_LITERAL(4, 85, 32), // "_q_onBreakpointsAboutToBeRemoved"
QT_MOC_LITERAL(5, 118, 24), // "_q_onBreakpointsInserted"
QT_MOC_LITERAL(6, 143, 27), // "_q_onBreakpointsDataChanged"
QT_MOC_LITERAL(7, 171, 19), // "_q_onScriptsChanged"
QT_MOC_LITERAL(8, 191, 19) // "_q_onToolTipRequest"

    },
    "QScriptDebuggerCodeWidget\0"
    "_q_onBreakpointToggleRequest\0\0"
    "_q_onBreakpointEnableRequest\0"
    "_q_onBreakpointsAboutToBeRemoved\0"
    "_q_onBreakpointsInserted\0"
    "_q_onBreakpointsDataChanged\0"
    "_q_onScriptsChanged\0_q_onToolTipRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerCodeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       3,    2,   54,    2, 0x08 /* Private */,
       4,    3,   59,    2, 0x08 /* Private */,
       5,    3,   66,    2, 0x08 /* Private */,
       6,    2,   73,    2, 0x08 /* Private */,
       7,    0,   78,    2, 0x08 /* Private */,
       8,    3,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int, QMetaType::QStringList,    2,    2,    2,

       0        // eod
};

void QScriptDebuggerCodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerCodeWidget *_t = static_cast<QScriptDebuggerCodeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_onBreakpointToggleRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->d_func()->_q_onBreakpointEnableRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->d_func()->_q_onBreakpointsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d_func()->_q_onBreakpointsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_onBreakpointsDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->d_func()->_q_onScriptsChanged(); break;
        case 6: _t->d_func()->_q_onToolTipRequest((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QScriptDebuggerCodeWidget::staticMetaObject = {
    { &QScriptDebuggerCodeWidgetInterface::staticMetaObject, qt_meta_stringdata_QScriptDebuggerCodeWidget.data,
      qt_meta_data_QScriptDebuggerCodeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebuggerCodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerCodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerCodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QScriptDebuggerCodeWidgetInterface::qt_metacast(_clname);
}

int QScriptDebuggerCodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptDebuggerCodeWidgetInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
