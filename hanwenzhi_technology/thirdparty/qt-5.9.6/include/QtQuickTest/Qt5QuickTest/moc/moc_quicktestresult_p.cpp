/****************************************************************************
** Meta object code from reading C++ file 'quicktestresult_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTest/private/quicktestresult_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quicktestresult_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QuickTestResult_t {
    QByteArrayData data[71];
    char stringdata0[796];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickTestResult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickTestResult_t qt_meta_stringdata_QuickTestResult = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QuickTestResult"
QT_MOC_LITERAL(1, 16, 18), // "programNameChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "testCaseNameChanged"
QT_MOC_LITERAL(4, 56, 19), // "functionNameChanged"
QT_MOC_LITERAL(5, 76, 14), // "dataTagChanged"
QT_MOC_LITERAL(6, 91, 14), // "skippedChanged"
QT_MOC_LITERAL(7, 106, 5), // "reset"
QT_MOC_LITERAL(8, 112, 12), // "startLogging"
QT_MOC_LITERAL(9, 125, 11), // "stopLogging"
QT_MOC_LITERAL(10, 137, 13), // "initTestTable"
QT_MOC_LITERAL(11, 151, 14), // "clearTestTable"
QT_MOC_LITERAL(12, 166, 14), // "finishTestData"
QT_MOC_LITERAL(13, 181, 21), // "finishTestDataCleanup"
QT_MOC_LITERAL(14, 203, 18), // "finishTestFunction"
QT_MOC_LITERAL(15, 222, 9), // "stringify"
QT_MOC_LITERAL(16, 232, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(17, 248, 4), // "args"
QT_MOC_LITERAL(18, 253, 4), // "fail"
QT_MOC_LITERAL(19, 258, 7), // "message"
QT_MOC_LITERAL(20, 266, 8), // "location"
QT_MOC_LITERAL(21, 275, 4), // "line"
QT_MOC_LITERAL(22, 280, 6), // "verify"
QT_MOC_LITERAL(23, 287, 7), // "success"
QT_MOC_LITERAL(24, 295, 7), // "compare"
QT_MOC_LITERAL(25, 303, 4), // "val1"
QT_MOC_LITERAL(26, 308, 4), // "val2"
QT_MOC_LITERAL(27, 313, 12), // "fuzzyCompare"
QT_MOC_LITERAL(28, 326, 6), // "actual"
QT_MOC_LITERAL(29, 333, 8), // "expected"
QT_MOC_LITERAL(30, 342, 5), // "delta"
QT_MOC_LITERAL(31, 348, 4), // "skip"
QT_MOC_LITERAL(32, 353, 10), // "expectFail"
QT_MOC_LITERAL(33, 364, 3), // "tag"
QT_MOC_LITERAL(34, 368, 7), // "comment"
QT_MOC_LITERAL(35, 376, 18), // "expectFailContinue"
QT_MOC_LITERAL(36, 395, 4), // "warn"
QT_MOC_LITERAL(37, 400, 13), // "ignoreWarning"
QT_MOC_LITERAL(38, 414, 4), // "wait"
QT_MOC_LITERAL(39, 419, 2), // "ms"
QT_MOC_LITERAL(40, 422, 5), // "sleep"
QT_MOC_LITERAL(41, 428, 16), // "waitForRendering"
QT_MOC_LITERAL(42, 445, 11), // "QQuickItem*"
QT_MOC_LITERAL(43, 457, 4), // "item"
QT_MOC_LITERAL(44, 462, 7), // "timeout"
QT_MOC_LITERAL(45, 470, 16), // "startMeasurement"
QT_MOC_LITERAL(46, 487, 12), // "beginDataRun"
QT_MOC_LITERAL(47, 500, 10), // "endDataRun"
QT_MOC_LITERAL(48, 511, 19), // "measurementAccepted"
QT_MOC_LITERAL(49, 531, 21), // "needsMoreMeasurements"
QT_MOC_LITERAL(50, 553, 14), // "startBenchmark"
QT_MOC_LITERAL(51, 568, 7), // "RunMode"
QT_MOC_LITERAL(52, 576, 7), // "runMode"
QT_MOC_LITERAL(53, 584, 15), // "isBenchmarkDone"
QT_MOC_LITERAL(54, 600, 13), // "nextBenchmark"
QT_MOC_LITERAL(55, 614, 13), // "stopBenchmark"
QT_MOC_LITERAL(56, 628, 9), // "grabImage"
QT_MOC_LITERAL(57, 638, 9), // "findChild"
QT_MOC_LITERAL(58, 648, 6), // "parent"
QT_MOC_LITERAL(59, 655, 10), // "objectName"
QT_MOC_LITERAL(60, 666, 12), // "testCaseName"
QT_MOC_LITERAL(61, 679, 12), // "functionName"
QT_MOC_LITERAL(62, 692, 7), // "dataTag"
QT_MOC_LITERAL(63, 700, 6), // "failed"
QT_MOC_LITERAL(64, 707, 7), // "skipped"
QT_MOC_LITERAL(65, 715, 9), // "passCount"
QT_MOC_LITERAL(66, 725, 9), // "failCount"
QT_MOC_LITERAL(67, 735, 9), // "skipCount"
QT_MOC_LITERAL(68, 745, 14), // "functionsToRun"
QT_MOC_LITERAL(69, 760, 27), // "RepeatUntilValidMeasurement"
QT_MOC_LITERAL(70, 788, 7) // "RunOnce"

    },
    "QuickTestResult\0programNameChanged\0\0"
    "testCaseNameChanged\0functionNameChanged\0"
    "dataTagChanged\0skippedChanged\0reset\0"
    "startLogging\0stopLogging\0initTestTable\0"
    "clearTestTable\0finishTestData\0"
    "finishTestDataCleanup\0finishTestFunction\0"
    "stringify\0QQmlV4Function*\0args\0fail\0"
    "message\0location\0line\0verify\0success\0"
    "compare\0val1\0val2\0fuzzyCompare\0actual\0"
    "expected\0delta\0skip\0expectFail\0tag\0"
    "comment\0expectFailContinue\0warn\0"
    "ignoreWarning\0wait\0ms\0sleep\0"
    "waitForRendering\0QQuickItem*\0item\0"
    "timeout\0startMeasurement\0beginDataRun\0"
    "endDataRun\0measurementAccepted\0"
    "needsMoreMeasurements\0startBenchmark\0"
    "RunMode\0runMode\0isBenchmarkDone\0"
    "nextBenchmark\0stopBenchmark\0grabImage\0"
    "findChild\0parent\0objectName\0testCaseName\0"
    "functionName\0dataTag\0failed\0skipped\0"
    "passCount\0failCount\0skipCount\0"
    "functionsToRun\0RepeatUntilValidMeasurement\0"
    "RunOnce"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickTestResult[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       9,  364, // properties
       1,  400, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  242,    2, 0x06 /* Public */,
       3,    0,  243,    2, 0x06 /* Public */,
       4,    0,  244,    2, 0x06 /* Public */,
       5,    0,  245,    2, 0x06 /* Public */,
       6,    0,  246,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  247,    2, 0x0a /* Public */,
       8,    0,  248,    2, 0x0a /* Public */,
       9,    0,  249,    2, 0x0a /* Public */,
      10,    0,  250,    2, 0x0a /* Public */,
      11,    0,  251,    2, 0x0a /* Public */,
      12,    0,  252,    2, 0x0a /* Public */,
      13,    0,  253,    2, 0x0a /* Public */,
      14,    0,  254,    2, 0x0a /* Public */,
      15,    1,  255,    2, 0x0a /* Public */,
      18,    3,  258,    2, 0x0a /* Public */,
      22,    4,  265,    2, 0x0a /* Public */,
      24,    6,  274,    2, 0x0a /* Public */,
      27,    3,  287,    2, 0x0a /* Public */,
      31,    3,  294,    2, 0x0a /* Public */,
      32,    4,  301,    2, 0x0a /* Public */,
      35,    4,  310,    2, 0x0a /* Public */,
      36,    3,  319,    2, 0x0a /* Public */,
      37,    1,  326,    2, 0x0a /* Public */,
      38,    1,  329,    2, 0x0a /* Public */,
      40,    1,  332,    2, 0x0a /* Public */,
      41,    2,  335,    2, 0x0a /* Public */,
      41,    1,  340,    2, 0x2a /* Public | MethodCloned */,
      45,    0,  343,    2, 0x0a /* Public */,
      46,    0,  344,    2, 0x0a /* Public */,
      47,    0,  345,    2, 0x0a /* Public */,
      48,    0,  346,    2, 0x0a /* Public */,
      49,    0,  347,    2, 0x0a /* Public */,
      50,    2,  348,    2, 0x0a /* Public */,
      53,    0,  353,    2, 0x0a /* Public */,
      54,    0,  354,    2, 0x0a /* Public */,
      55,    0,  355,    2, 0x0a /* Public */,
      56,    1,  356,    2, 0x0a /* Public */,
      57,    2,  359,    2, 0x8a /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   19,   20,   21,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   23,   19,   20,   21,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QUrl, QMetaType::Int,   23,   19,   25,   26,   20,   21,
    QMetaType::Bool, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QReal,   28,   29,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   19,   20,   21,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   33,   34,   20,   21,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   33,   34,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   19,   20,   21,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Bool, 0x80000000 | 42, QMetaType::Int,   43,   44,
    QMetaType::Bool, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 51, QMetaType::QString,   52,   33,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QObjectStar, 0x80000000 | 42,   43,
    QMetaType::QObjectStar, QMetaType::QObjectStar, QMetaType::QString,   58,   59,

 // properties: name, type, flags
      60, QMetaType::QString, 0x00495103,
      61, QMetaType::QString, 0x00495103,
      62, QMetaType::QString, 0x00495103,
      63, QMetaType::Bool, 0x00095001,
      64, QMetaType::Bool, 0x00495103,
      65, QMetaType::Int, 0x00095001,
      66, QMetaType::Int, 0x00095001,
      67, QMetaType::Int, 0x00095001,
      68, QMetaType::QStringList, 0x00095001,

 // properties: notify_signal_id
       1,
       2,
       3,
       0,
       4,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      51, 0x0,    2,  404,

 // enum data: key, value
      69, uint(QuickTestResult::RepeatUntilValidMeasurement),
      70, uint(QuickTestResult::RunOnce),

       0        // eod
};

void QuickTestResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickTestResult *_t = static_cast<QuickTestResult *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->programNameChanged(); break;
        case 1: _t->testCaseNameChanged(); break;
        case 2: _t->functionNameChanged(); break;
        case 3: _t->dataTagChanged(); break;
        case 4: _t->skippedChanged(); break;
        case 5: _t->reset(); break;
        case 6: _t->startLogging(); break;
        case 7: _t->stopLogging(); break;
        case 8: _t->initTestTable(); break;
        case 9: _t->clearTestTable(); break;
        case 10: _t->finishTestData(); break;
        case 11: _t->finishTestDataCleanup(); break;
        case 12: _t->finishTestFunction(); break;
        case 13: _t->stringify((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 14: _t->fail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: { bool _r = _t->verify((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->compare((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QUrl(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->fuzzyCompare((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->skip((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: { bool _r = _t->expectFail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->expectFailContinue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->warn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->ignoreWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->wait((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->sleep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: { bool _r = _t->waitForRendering((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->waitForRendering((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->startMeasurement(); break;
        case 28: _t->beginDataRun(); break;
        case 29: _t->endDataRun(); break;
        case 30: { bool _r = _t->measurementAccepted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->needsMoreMeasurements();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->startBenchmark((*reinterpret_cast< RunMode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: { bool _r = _t->isBenchmarkDone();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->nextBenchmark(); break;
        case 35: _t->stopBenchmark(); break;
        case 36: { QObject* _r = _t->grabImage((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 37: { QObject* _r = _t->findChild((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QuickTestResult::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickTestResult::programNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QuickTestResult::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickTestResult::testCaseNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QuickTestResult::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickTestResult::functionNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QuickTestResult::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickTestResult::dataTagChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QuickTestResult::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickTestResult::skippedChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickTestResult *_t = static_cast<QuickTestResult *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->testCaseName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->functionName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->dataTag(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isFailed(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isSkipped(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->passCount(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->failCount(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->skipCount(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->functionsToRun(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QuickTestResult *_t = static_cast<QuickTestResult *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTestCaseName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFunctionName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDataTag(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setSkipped(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QuickTestResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuickTestResult.data,
      qt_meta_data_QuickTestResult,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QuickTestResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickTestResult::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickTestResult.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QuickTestResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QuickTestResult::programNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QuickTestResult::testCaseNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QuickTestResult::functionNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QuickTestResult::dataTagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QuickTestResult::skippedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
