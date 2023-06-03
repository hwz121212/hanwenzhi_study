/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebugger_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebugger_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebugger_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebugger_t {
    QByteArrayData data[24];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebugger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebugger_t qt_meta_stringdata_QScriptDebugger = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QScriptDebugger"
QT_MOC_LITERAL(1, 16, 7), // "stopped"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "started"
QT_MOC_LITERAL(4, 33, 16), // "_q_onLineEntered"
QT_MOC_LITERAL(5, 50, 24), // "_q_onCurrentFrameChanged"
QT_MOC_LITERAL(6, 75, 25), // "_q_onCurrentScriptChanged"
QT_MOC_LITERAL(7, 101, 27), // "_q_onScriptLocationSelected"
QT_MOC_LITERAL(8, 129, 12), // "_q_interrupt"
QT_MOC_LITERAL(9, 142, 11), // "_q_continue"
QT_MOC_LITERAL(10, 154, 11), // "_q_stepInto"
QT_MOC_LITERAL(11, 166, 11), // "_q_stepOver"
QT_MOC_LITERAL(12, 178, 10), // "_q_stepOut"
QT_MOC_LITERAL(13, 189, 14), // "_q_runToCursor"
QT_MOC_LITERAL(14, 204, 17), // "_q_runToNewScript"
QT_MOC_LITERAL(15, 222, 19), // "_q_toggleBreakpoint"
QT_MOC_LITERAL(16, 242, 19), // "_q_clearDebugOutput"
QT_MOC_LITERAL(17, 262, 16), // "_q_clearErrorLog"
QT_MOC_LITERAL(18, 279, 15), // "_q_clearConsole"
QT_MOC_LITERAL(19, 295, 15), // "_q_findInScript"
QT_MOC_LITERAL(20, 311, 19), // "_q_findNextInScript"
QT_MOC_LITERAL(21, 331, 23), // "_q_findPreviousInScript"
QT_MOC_LITERAL(22, 355, 20), // "_q_onFindCodeRequest"
QT_MOC_LITERAL(23, 376, 11) // "_q_goToLine"

    },
    "QScriptDebugger\0stopped\0\0started\0"
    "_q_onLineEntered\0_q_onCurrentFrameChanged\0"
    "_q_onCurrentScriptChanged\0"
    "_q_onScriptLocationSelected\0_q_interrupt\0"
    "_q_continue\0_q_stepInto\0_q_stepOver\0"
    "_q_stepOut\0_q_runToCursor\0_q_runToNewScript\0"
    "_q_toggleBreakpoint\0_q_clearDebugOutput\0"
    "_q_clearErrorLog\0_q_clearConsole\0"
    "_q_findInScript\0_q_findNextInScript\0"
    "_q_findPreviousInScript\0_q_onFindCodeRequest\0"
    "_q_goToLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebugger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  126,    2, 0x08 /* Private */,
       5,    1,  129,    2, 0x08 /* Private */,
       6,    1,  132,    2, 0x08 /* Private */,
       7,    1,  135,    2, 0x08 /* Private */,
       8,    0,  138,    2, 0x08 /* Private */,
       9,    0,  139,    2, 0x08 /* Private */,
      10,    0,  140,    2, 0x08 /* Private */,
      11,    0,  141,    2, 0x08 /* Private */,
      12,    0,  142,    2, 0x08 /* Private */,
      13,    0,  143,    2, 0x08 /* Private */,
      14,    0,  144,    2, 0x08 /* Private */,
      15,    0,  145,    2, 0x08 /* Private */,
      16,    0,  146,    2, 0x08 /* Private */,
      17,    0,  147,    2, 0x08 /* Private */,
      18,    0,  148,    2, 0x08 /* Private */,
      19,    0,  149,    2, 0x08 /* Private */,
      20,    0,  150,    2, 0x08 /* Private */,
      21,    0,  151,    2, 0x08 /* Private */,
      22,    2,  152,    2, 0x08 /* Private */,
      23,    0,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void QScriptDebugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebugger *_t = static_cast<QScriptDebugger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->started(); break;
        case 2: _t->d_func()->_q_onLineEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_onCurrentFrameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_onCurrentScriptChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_onScriptLocationSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_interrupt(); break;
        case 7: _t->d_func()->_q_continue(); break;
        case 8: _t->d_func()->_q_stepInto(); break;
        case 9: _t->d_func()->_q_stepOver(); break;
        case 10: _t->d_func()->_q_stepOut(); break;
        case 11: _t->d_func()->_q_runToCursor(); break;
        case 12: _t->d_func()->_q_runToNewScript(); break;
        case 13: _t->d_func()->_q_toggleBreakpoint(); break;
        case 14: _t->d_func()->_q_clearDebugOutput(); break;
        case 15: _t->d_func()->_q_clearErrorLog(); break;
        case 16: _t->d_func()->_q_clearConsole(); break;
        case 17: _t->d_func()->_q_findInScript(); break;
        case 18: _t->d_func()->_q_findNextInScript(); break;
        case 19: _t->d_func()->_q_findPreviousInScript(); break;
        case 20: _t->d_func()->_q_onFindCodeRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->d_func()->_q_goToLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScriptDebugger::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebugger::stopped)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScriptDebugger::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScriptDebugger::started)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QScriptDebugger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScriptDebugger.data,
      qt_meta_data_QScriptDebugger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebugger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebugger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScriptDebugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QScriptDebugger::stopped()const
{
    QMetaObject::activate(const_cast< QScriptDebugger *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QScriptDebugger::started()const
{
    QMetaObject::activate(const_cast< QScriptDebugger *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
