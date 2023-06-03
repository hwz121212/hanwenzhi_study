/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggerconsoleglobalobject_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtScriptTools/private/qscriptdebuggerconsoleglobalobject_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggerconsoleglobalobject_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScriptDebuggerConsoleGlobalObject_t {
    QByteArrayData data[71];
    char stringdata0[1281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerConsoleGlobalObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerConsoleGlobalObject_t qt_meta_stringdata_QScriptDebuggerConsoleGlobalObject = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QScriptDebuggerConsoleGlobalO..."
QT_MOC_LITERAL(1, 35, 17), // "scheduleInterrupt"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 16), // "scheduleContinue"
QT_MOC_LITERAL(4, 71, 16), // "scheduleStepInto"
QT_MOC_LITERAL(5, 88, 5), // "count"
QT_MOC_LITERAL(6, 94, 16), // "scheduleStepOver"
QT_MOC_LITERAL(7, 111, 15), // "scheduleStepOut"
QT_MOC_LITERAL(8, 127, 21), // "scheduleRunToLocation"
QT_MOC_LITERAL(9, 149, 8), // "fileName"
QT_MOC_LITERAL(10, 158, 10), // "lineNumber"
QT_MOC_LITERAL(11, 169, 8), // "scriptId"
QT_MOC_LITERAL(12, 178, 19), // "scheduleForceReturn"
QT_MOC_LITERAL(13, 198, 12), // "contextIndex"
QT_MOC_LITERAL(14, 211, 20), // "QScriptDebuggerValue"
QT_MOC_LITERAL(15, 232, 5), // "value"
QT_MOC_LITERAL(16, 238, 21), // "scheduleSetBreakpoint"
QT_MOC_LITERAL(17, 260, 21), // "QScriptBreakpointData"
QT_MOC_LITERAL(18, 282, 4), // "data"
QT_MOC_LITERAL(19, 287, 24), // "scheduleDeleteBreakpoint"
QT_MOC_LITERAL(20, 312, 2), // "id"
QT_MOC_LITERAL(21, 315, 28), // "scheduleDeleteAllBreakpoints"
QT_MOC_LITERAL(22, 344, 22), // "scheduleGetBreakpoints"
QT_MOC_LITERAL(23, 367, 25), // "scheduleGetBreakpointData"
QT_MOC_LITERAL(24, 393, 25), // "scheduleSetBreakpointData"
QT_MOC_LITERAL(25, 419, 18), // "scheduleGetScripts"
QT_MOC_LITERAL(26, 438, 21), // "scheduleGetScriptData"
QT_MOC_LITERAL(27, 460, 25), // "scheduleScriptsCheckpoint"
QT_MOC_LITERAL(28, 486, 23), // "scheduleGetScriptsDelta"
QT_MOC_LITERAL(29, 510, 21), // "scheduleResolveScript"
QT_MOC_LITERAL(30, 532, 20), // "scheduleGetBacktrace"
QT_MOC_LITERAL(31, 553, 21), // "scheduleGetThisObject"
QT_MOC_LITERAL(32, 575, 27), // "scheduleGetActivationObject"
QT_MOC_LITERAL(33, 603, 23), // "scheduleGetContextCount"
QT_MOC_LITERAL(34, 627, 22), // "scheduleGetContextInfo"
QT_MOC_LITERAL(35, 650, 30), // "scheduleNewScriptValueIterator"
QT_MOC_LITERAL(36, 681, 6), // "object"
QT_MOC_LITERAL(37, 688, 31), // "scheduleGetPropertiesByIterator"
QT_MOC_LITERAL(38, 720, 33), // "scheduleDeleteScriptValueIter..."
QT_MOC_LITERAL(39, 754, 16), // "scheduleEvaluate"
QT_MOC_LITERAL(40, 771, 7), // "program"
QT_MOC_LITERAL(41, 779, 27), // "scheduleScriptValueToString"
QT_MOC_LITERAL(42, 807, 23), // "scheduleClearExceptions"
QT_MOC_LITERAL(43, 831, 15), // "scheduleCommand"
QT_MOC_LITERAL(44, 847, 22), // "QScriptDebuggerCommand"
QT_MOC_LITERAL(45, 870, 7), // "command"
QT_MOC_LITERAL(46, 878, 7), // "message"
QT_MOC_LITERAL(47, 886, 4), // "text"
QT_MOC_LITERAL(48, 891, 12), // "columnNumber"
QT_MOC_LITERAL(49, 904, 7), // "warning"
QT_MOC_LITERAL(50, 912, 5), // "error"
QT_MOC_LITERAL(51, 918, 20), // "getCurrentFrameIndex"
QT_MOC_LITERAL(52, 939, 20), // "setCurrentFrameIndex"
QT_MOC_LITERAL(53, 960, 5), // "index"
QT_MOC_LITERAL(54, 966, 18), // "getCurrentScriptId"
QT_MOC_LITERAL(55, 985, 18), // "setCurrentScriptId"
QT_MOC_LITERAL(56, 1004, 12), // "getSessionId"
QT_MOC_LITERAL(57, 1017, 20), // "getCurrentLineNumber"
QT_MOC_LITERAL(58, 1038, 20), // "setCurrentLineNumber"
QT_MOC_LITERAL(59, 1059, 16), // "getCommandGroups"
QT_MOC_LITERAL(60, 1076, 37), // "QScriptDebuggerConsoleCommand..."
QT_MOC_LITERAL(61, 1114, 11), // "findCommand"
QT_MOC_LITERAL(62, 1126, 30), // "QScriptDebuggerConsoleCommand*"
QT_MOC_LITERAL(63, 1157, 18), // "getCommandsInGroup"
QT_MOC_LITERAL(64, 1176, 33), // "QScriptDebuggerConsoleCommand..."
QT_MOC_LITERAL(65, 1210, 4), // "name"
QT_MOC_LITERAL(66, 1215, 21), // "getCommandCompletions"
QT_MOC_LITERAL(67, 1237, 6), // "prefix"
QT_MOC_LITERAL(68, 1244, 11), // "checkSyntax"
QT_MOC_LITERAL(69, 1256, 17), // "setEvaluateAction"
QT_MOC_LITERAL(70, 1274, 6) // "action"

    },
    "QScriptDebuggerConsoleGlobalObject\0"
    "scheduleInterrupt\0\0scheduleContinue\0"
    "scheduleStepInto\0count\0scheduleStepOver\0"
    "scheduleStepOut\0scheduleRunToLocation\0"
    "fileName\0lineNumber\0scriptId\0"
    "scheduleForceReturn\0contextIndex\0"
    "QScriptDebuggerValue\0value\0"
    "scheduleSetBreakpoint\0QScriptBreakpointData\0"
    "data\0scheduleDeleteBreakpoint\0id\0"
    "scheduleDeleteAllBreakpoints\0"
    "scheduleGetBreakpoints\0scheduleGetBreakpointData\0"
    "scheduleSetBreakpointData\0scheduleGetScripts\0"
    "scheduleGetScriptData\0scheduleScriptsCheckpoint\0"
    "scheduleGetScriptsDelta\0scheduleResolveScript\0"
    "scheduleGetBacktrace\0scheduleGetThisObject\0"
    "scheduleGetActivationObject\0"
    "scheduleGetContextCount\0scheduleGetContextInfo\0"
    "scheduleNewScriptValueIterator\0object\0"
    "scheduleGetPropertiesByIterator\0"
    "scheduleDeleteScriptValueIterator\0"
    "scheduleEvaluate\0program\0"
    "scheduleScriptValueToString\0"
    "scheduleClearExceptions\0scheduleCommand\0"
    "QScriptDebuggerCommand\0command\0message\0"
    "text\0columnNumber\0warning\0error\0"
    "getCurrentFrameIndex\0setCurrentFrameIndex\0"
    "index\0getCurrentScriptId\0setCurrentScriptId\0"
    "getSessionId\0getCurrentLineNumber\0"
    "setCurrentLineNumber\0getCommandGroups\0"
    "QScriptDebuggerConsoleCommandGroupMap\0"
    "findCommand\0QScriptDebuggerConsoleCommand*\0"
    "getCommandsInGroup\0QScriptDebuggerConsoleCommandList\0"
    "name\0getCommandCompletions\0prefix\0"
    "checkSyntax\0setEvaluateAction\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerConsoleGlobalObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  314,    2, 0x0a /* Public */,
       3,    0,  315,    2, 0x0a /* Public */,
       4,    1,  316,    2, 0x0a /* Public */,
       4,    0,  319,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  320,    2, 0x0a /* Public */,
       6,    0,  323,    2, 0x2a /* Public | MethodCloned */,
       7,    0,  324,    2, 0x0a /* Public */,
       8,    2,  325,    2, 0x0a /* Public */,
       8,    2,  330,    2, 0x0a /* Public */,
      12,    2,  335,    2, 0x0a /* Public */,
      16,    1,  340,    2, 0x0a /* Public */,
      19,    1,  343,    2, 0x0a /* Public */,
      21,    0,  346,    2, 0x0a /* Public */,
      22,    0,  347,    2, 0x0a /* Public */,
      23,    1,  348,    2, 0x0a /* Public */,
      24,    2,  351,    2, 0x0a /* Public */,
      25,    0,  356,    2, 0x0a /* Public */,
      26,    1,  357,    2, 0x0a /* Public */,
      27,    0,  360,    2, 0x0a /* Public */,
      28,    0,  361,    2, 0x0a /* Public */,
      29,    1,  362,    2, 0x0a /* Public */,
      30,    0,  365,    2, 0x0a /* Public */,
      31,    1,  366,    2, 0x0a /* Public */,
      32,    1,  369,    2, 0x0a /* Public */,
      33,    0,  372,    2, 0x0a /* Public */,
      34,    1,  373,    2, 0x0a /* Public */,
      35,    1,  376,    2, 0x0a /* Public */,
      37,    2,  379,    2, 0x0a /* Public */,
      38,    1,  384,    2, 0x0a /* Public */,
      39,    4,  387,    2, 0x0a /* Public */,
      39,    3,  396,    2, 0x2a /* Public | MethodCloned */,
      39,    2,  403,    2, 0x2a /* Public | MethodCloned */,
      41,    1,  408,    2, 0x0a /* Public */,
      42,    0,  411,    2, 0x0a /* Public */,
      43,    1,  412,    2, 0x0a /* Public */,
      46,    4,  415,    2, 0x0a /* Public */,
      46,    3,  424,    2, 0x2a /* Public | MethodCloned */,
      46,    2,  431,    2, 0x2a /* Public | MethodCloned */,
      46,    1,  436,    2, 0x2a /* Public | MethodCloned */,
      49,    4,  439,    2, 0x0a /* Public */,
      49,    3,  448,    2, 0x2a /* Public | MethodCloned */,
      49,    2,  455,    2, 0x2a /* Public | MethodCloned */,
      49,    1,  460,    2, 0x2a /* Public | MethodCloned */,
      50,    4,  463,    2, 0x0a /* Public */,
      50,    3,  472,    2, 0x2a /* Public | MethodCloned */,
      50,    2,  479,    2, 0x2a /* Public | MethodCloned */,
      50,    1,  484,    2, 0x2a /* Public | MethodCloned */,
      51,    0,  487,    2, 0x0a /* Public */,
      52,    1,  488,    2, 0x0a /* Public */,
      54,    0,  491,    2, 0x0a /* Public */,
      55,    1,  492,    2, 0x0a /* Public */,
      56,    0,  495,    2, 0x0a /* Public */,
      57,    0,  496,    2, 0x0a /* Public */,
      58,    1,  497,    2, 0x0a /* Public */,
      59,    0,  500,    2, 0x0a /* Public */,
      61,    1,  501,    2, 0x0a /* Public */,
      63,    1,  504,    2, 0x0a /* Public */,
      66,    1,  507,    2, 0x0a /* Public */,
      68,    1,  510,    2, 0x0a /* Public */,
      69,    1,  513,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Int, QMetaType::LongLong, QMetaType::Int,   11,   10,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Int, 0x80000000 | 17,   18,
    QMetaType::Int, QMetaType::Int,   20,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,   20,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 17,   20,   18,
    QMetaType::Int,
    QMetaType::Int, QMetaType::LongLong,   20,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString,    9,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,   13,
    QMetaType::Int, QMetaType::Int,   13,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,   13,
    QMetaType::Int, 0x80000000 | 14,   36,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,    5,
    QMetaType::Int, QMetaType::Int,   20,
    QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   13,   40,    9,   10,
    QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   13,   40,    9,
    QMetaType::Int, QMetaType::Int, QMetaType::QString,   13,   40,
    QMetaType::Int, 0x80000000 | 14,   15,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 44,   45,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   47,    9,   10,   48,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   47,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,    9,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   47,    9,   10,   48,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   47,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,    9,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   47,    9,   10,   48,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   47,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,    9,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::LongLong,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::LongLong,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   10,
    0x80000000 | 60,
    0x80000000 | 62, QMetaType::QString,   45,
    0x80000000 | 64, QMetaType::QString,   65,
    QMetaType::QStringList, QMetaType::QString,   67,
    QMetaType::Bool, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Int,   70,

       0        // eod
};

void QScriptDebuggerConsoleGlobalObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerConsoleGlobalObject *_t = static_cast<QScriptDebuggerConsoleGlobalObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->scheduleInterrupt();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->scheduleContinue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->scheduleStepInto((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->scheduleStepInto();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->scheduleStepOver((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->scheduleStepOver();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->scheduleStepOut();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->scheduleRunToLocation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->scheduleRunToLocation((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->scheduleForceReturn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QScriptDebuggerValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->scheduleSetBreakpoint((*reinterpret_cast< const QScriptBreakpointData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->scheduleDeleteBreakpoint((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->scheduleDeleteAllBreakpoints();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->scheduleGetBreakpoints();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->scheduleGetBreakpointData((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->scheduleSetBreakpointData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QScriptBreakpointData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->scheduleGetScripts();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->scheduleGetScriptData((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->scheduleScriptsCheckpoint();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: { int _r = _t->scheduleGetScriptsDelta();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: { int _r = _t->scheduleResolveScript((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 21: { int _r = _t->scheduleGetBacktrace();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: { int _r = _t->scheduleGetThisObject((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 23: { int _r = _t->scheduleGetActivationObject((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 24: { int _r = _t->scheduleGetContextCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: { int _r = _t->scheduleGetContextInfo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 26: { int _r = _t->scheduleNewScriptValueIterator((*reinterpret_cast< const QScriptDebuggerValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 27: { int _r = _t->scheduleGetPropertiesByIterator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 28: { int _r = _t->scheduleDeleteScriptValueIterator((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 29: { int _r = _t->scheduleEvaluate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 30: { int _r = _t->scheduleEvaluate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 31: { int _r = _t->scheduleEvaluate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: { int _r = _t->scheduleScriptValueToString((*reinterpret_cast< const QScriptDebuggerValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 33: { int _r = _t->scheduleClearExceptions();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: { int _r = _t->scheduleCommand((*reinterpret_cast< const QScriptDebuggerCommand(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 36: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 38: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 40: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 41: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 42: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 44: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 45: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: { int _r = _t->getCurrentFrameIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->setCurrentFrameIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: { qint64 _r = _t->getCurrentScriptId();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->setCurrentScriptId((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 51: { qint64 _r = _t->getSessionId();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 52: { int _r = _t->getCurrentLineNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setCurrentLineNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: { QScriptDebuggerConsoleCommandGroupMap _r = _t->getCommandGroups();
            if (_a[0]) *reinterpret_cast< QScriptDebuggerConsoleCommandGroupMap*>(_a[0]) = std::move(_r); }  break;
        case 55: { QScriptDebuggerConsoleCommand* _r = _t->findCommand((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptDebuggerConsoleCommand**>(_a[0]) = std::move(_r); }  break;
        case 56: { QScriptDebuggerConsoleCommandList _r = _t->getCommandsInGroup((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptDebuggerConsoleCommandList*>(_a[0]) = std::move(_r); }  break;
        case 57: { QStringList _r = _t->getCommandCompletions((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 58: { bool _r = _t->checkSyntax((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setEvaluateAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QScriptDebuggerConsoleGlobalObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScriptDebuggerConsoleGlobalObject.data,
      qt_meta_data_QScriptDebuggerConsoleGlobalObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDebuggerConsoleGlobalObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerConsoleGlobalObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerConsoleGlobalObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScriptDebuggerConsoleGlobalObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 60;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
