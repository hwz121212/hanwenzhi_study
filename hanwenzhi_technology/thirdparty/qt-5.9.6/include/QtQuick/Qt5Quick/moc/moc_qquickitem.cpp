/****************************************************************************
** Meta object code from reading C++ file 'qquickitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTransform_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTransform_t qt_meta_stringdata_QQuickTransform = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickTransform"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "QQuickTransform\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QQuickTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTransform *_t = static_cast<QQuickTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QQuickTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickTransform.data,
      qt_meta_data_QQuickTransform,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTransform.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QQuickItem_t {
    QByteArrayData data[113];
    char stringdata0[1479];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickItem_t qt_meta_stringdata_QQuickItem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickItem"
QT_MOC_LITERAL(1, 11, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 27, 4), // "data"
QT_MOC_LITERAL(3, 32, 28), // "qt_QmlJSWrapperFactoryMethod"
QT_MOC_LITERAL(4, 61, 41), // "_q_createJSWrapper(QV4::Execu..."
QT_MOC_LITERAL(5, 103, 19), // "childrenRectChanged"
QT_MOC_LITERAL(6, 123, 0), // ""
QT_MOC_LITERAL(7, 124, 21), // "baselineOffsetChanged"
QT_MOC_LITERAL(8, 146, 12), // "stateChanged"
QT_MOC_LITERAL(9, 159, 12), // "focusChanged"
QT_MOC_LITERAL(10, 172, 18), // "activeFocusChanged"
QT_MOC_LITERAL(11, 191, 23), // "activeFocusOnTabChanged"
QT_MOC_LITERAL(12, 215, 13), // "parentChanged"
QT_MOC_LITERAL(13, 229, 11), // "QQuickItem*"
QT_MOC_LITERAL(14, 241, 22), // "transformOriginChanged"
QT_MOC_LITERAL(15, 264, 15), // "TransformOrigin"
QT_MOC_LITERAL(16, 280, 13), // "smoothChanged"
QT_MOC_LITERAL(17, 294, 19), // "antialiasingChanged"
QT_MOC_LITERAL(18, 314, 11), // "clipChanged"
QT_MOC_LITERAL(19, 326, 13), // "windowChanged"
QT_MOC_LITERAL(20, 340, 13), // "QQuickWindow*"
QT_MOC_LITERAL(21, 354, 6), // "window"
QT_MOC_LITERAL(22, 361, 15), // "childrenChanged"
QT_MOC_LITERAL(23, 377, 14), // "opacityChanged"
QT_MOC_LITERAL(24, 392, 14), // "enabledChanged"
QT_MOC_LITERAL(25, 407, 14), // "visibleChanged"
QT_MOC_LITERAL(26, 422, 22), // "visibleChildrenChanged"
QT_MOC_LITERAL(27, 445, 15), // "rotationChanged"
QT_MOC_LITERAL(28, 461, 12), // "scaleChanged"
QT_MOC_LITERAL(29, 474, 8), // "xChanged"
QT_MOC_LITERAL(30, 483, 8), // "yChanged"
QT_MOC_LITERAL(31, 492, 12), // "widthChanged"
QT_MOC_LITERAL(32, 505, 13), // "heightChanged"
QT_MOC_LITERAL(33, 519, 8), // "zChanged"
QT_MOC_LITERAL(34, 528, 20), // "implicitWidthChanged"
QT_MOC_LITERAL(35, 549, 21), // "implicitHeightChanged"
QT_MOC_LITERAL(36, 571, 6), // "update"
QT_MOC_LITERAL(37, 578, 24), // "_q_resourceObjectDeleted"
QT_MOC_LITERAL(38, 603, 18), // "_q_createJSWrapper"
QT_MOC_LITERAL(39, 622, 21), // "QV4::ExecutionEngine*"
QT_MOC_LITERAL(40, 644, 11), // "grabToImage"
QT_MOC_LITERAL(41, 656, 8), // "QJSValue"
QT_MOC_LITERAL(42, 665, 8), // "callback"
QT_MOC_LITERAL(43, 674, 10), // "targetSize"
QT_MOC_LITERAL(44, 685, 8), // "contains"
QT_MOC_LITERAL(45, 694, 5), // "point"
QT_MOC_LITERAL(46, 700, 11), // "mapFromItem"
QT_MOC_LITERAL(47, 712, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(48, 728, 9), // "mapToItem"
QT_MOC_LITERAL(49, 738, 13), // "mapFromGlobal"
QT_MOC_LITERAL(50, 752, 11), // "mapToGlobal"
QT_MOC_LITERAL(51, 764, 16), // "forceActiveFocus"
QT_MOC_LITERAL(52, 781, 15), // "Qt::FocusReason"
QT_MOC_LITERAL(53, 797, 6), // "reason"
QT_MOC_LITERAL(54, 804, 20), // "nextItemInFocusChain"
QT_MOC_LITERAL(55, 825, 7), // "forward"
QT_MOC_LITERAL(56, 833, 7), // "childAt"
QT_MOC_LITERAL(57, 841, 1), // "x"
QT_MOC_LITERAL(58, 843, 1), // "y"
QT_MOC_LITERAL(59, 845, 6), // "parent"
QT_MOC_LITERAL(60, 852, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(61, 878, 9), // "resources"
QT_MOC_LITERAL(62, 888, 8), // "children"
QT_MOC_LITERAL(63, 897, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(64, 926, 1), // "z"
QT_MOC_LITERAL(65, 928, 5), // "width"
QT_MOC_LITERAL(66, 934, 6), // "height"
QT_MOC_LITERAL(67, 941, 7), // "opacity"
QT_MOC_LITERAL(68, 949, 7), // "enabled"
QT_MOC_LITERAL(69, 957, 7), // "visible"
QT_MOC_LITERAL(70, 965, 15), // "visibleChildren"
QT_MOC_LITERAL(71, 981, 6), // "states"
QT_MOC_LITERAL(72, 988, 29), // "QQmlListProperty<QQuickState>"
QT_MOC_LITERAL(73, 1018, 11), // "transitions"
QT_MOC_LITERAL(74, 1030, 34), // "QQmlListProperty<QQuickTransi..."
QT_MOC_LITERAL(75, 1065, 5), // "state"
QT_MOC_LITERAL(76, 1071, 12), // "childrenRect"
QT_MOC_LITERAL(77, 1084, 7), // "anchors"
QT_MOC_LITERAL(78, 1092, 14), // "QQuickAnchors*"
QT_MOC_LITERAL(79, 1107, 4), // "left"
QT_MOC_LITERAL(80, 1112, 16), // "QQuickAnchorLine"
QT_MOC_LITERAL(81, 1129, 5), // "right"
QT_MOC_LITERAL(82, 1135, 16), // "horizontalCenter"
QT_MOC_LITERAL(83, 1152, 3), // "top"
QT_MOC_LITERAL(84, 1156, 6), // "bottom"
QT_MOC_LITERAL(85, 1163, 14), // "verticalCenter"
QT_MOC_LITERAL(86, 1178, 8), // "baseline"
QT_MOC_LITERAL(87, 1187, 14), // "baselineOffset"
QT_MOC_LITERAL(88, 1202, 4), // "clip"
QT_MOC_LITERAL(89, 1207, 5), // "focus"
QT_MOC_LITERAL(90, 1213, 11), // "activeFocus"
QT_MOC_LITERAL(91, 1225, 16), // "activeFocusOnTab"
QT_MOC_LITERAL(92, 1242, 8), // "rotation"
QT_MOC_LITERAL(93, 1251, 5), // "scale"
QT_MOC_LITERAL(94, 1257, 15), // "transformOrigin"
QT_MOC_LITERAL(95, 1273, 20), // "transformOriginPoint"
QT_MOC_LITERAL(96, 1294, 9), // "transform"
QT_MOC_LITERAL(97, 1304, 33), // "QQmlListProperty<QQuickTransf..."
QT_MOC_LITERAL(98, 1338, 6), // "smooth"
QT_MOC_LITERAL(99, 1345, 12), // "antialiasing"
QT_MOC_LITERAL(100, 1358, 13), // "implicitWidth"
QT_MOC_LITERAL(101, 1372, 14), // "implicitHeight"
QT_MOC_LITERAL(102, 1387, 5), // "layer"
QT_MOC_LITERAL(103, 1393, 16), // "QQuickItemLayer*"
QT_MOC_LITERAL(104, 1410, 7), // "TopLeft"
QT_MOC_LITERAL(105, 1418, 3), // "Top"
QT_MOC_LITERAL(106, 1422, 8), // "TopRight"
QT_MOC_LITERAL(107, 1431, 4), // "Left"
QT_MOC_LITERAL(108, 1436, 6), // "Center"
QT_MOC_LITERAL(109, 1443, 5), // "Right"
QT_MOC_LITERAL(110, 1449, 10), // "BottomLeft"
QT_MOC_LITERAL(111, 1460, 6), // "Bottom"
QT_MOC_LITERAL(112, 1467, 11) // "BottomRight"

    },
    "QQuickItem\0DefaultProperty\0data\0"
    "qt_QmlJSWrapperFactoryMethod\0"
    "_q_createJSWrapper(QV4::ExecutionEngine*)\0"
    "childrenRectChanged\0\0baselineOffsetChanged\0"
    "stateChanged\0focusChanged\0activeFocusChanged\0"
    "activeFocusOnTabChanged\0parentChanged\0"
    "QQuickItem*\0transformOriginChanged\0"
    "TransformOrigin\0smoothChanged\0"
    "antialiasingChanged\0clipChanged\0"
    "windowChanged\0QQuickWindow*\0window\0"
    "childrenChanged\0opacityChanged\0"
    "enabledChanged\0visibleChanged\0"
    "visibleChildrenChanged\0rotationChanged\0"
    "scaleChanged\0xChanged\0yChanged\0"
    "widthChanged\0heightChanged\0zChanged\0"
    "implicitWidthChanged\0implicitHeightChanged\0"
    "update\0_q_resourceObjectDeleted\0"
    "_q_createJSWrapper\0QV4::ExecutionEngine*\0"
    "grabToImage\0QJSValue\0callback\0targetSize\0"
    "contains\0point\0mapFromItem\0QQmlV4Function*\0"
    "mapToItem\0mapFromGlobal\0mapToGlobal\0"
    "forceActiveFocus\0Qt::FocusReason\0"
    "reason\0nextItemInFocusChain\0forward\0"
    "childAt\0x\0y\0parent\0QQmlListProperty<QObject>\0"
    "resources\0children\0QQmlListProperty<QQuickItem>\0"
    "z\0width\0height\0opacity\0enabled\0visible\0"
    "visibleChildren\0states\0"
    "QQmlListProperty<QQuickState>\0transitions\0"
    "QQmlListProperty<QQuickTransition>\0"
    "state\0childrenRect\0anchors\0QQuickAnchors*\0"
    "left\0QQuickAnchorLine\0right\0"
    "horizontalCenter\0top\0bottom\0verticalCenter\0"
    "baseline\0baselineOffset\0clip\0focus\0"
    "activeFocus\0activeFocusOnTab\0rotation\0"
    "scale\0transformOrigin\0transformOriginPoint\0"
    "transform\0QQmlListProperty<QQuickTransform>\0"
    "smooth\0antialiasing\0implicitWidth\0"
    "implicitHeight\0layer\0QQuickItemLayer*\0"
    "TopLeft\0Top\0TopRight\0Left\0Center\0Right\0"
    "BottomLeft\0Bottom\0BottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickItem[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      41,   18, // methods
      40,  357, // properties
       1,  557, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,  264,    6, 0x06 /* Public */,
       7,    1,  267,    6, 0x06 /* Public */,
       8,    1,  270,    6, 0x06 /* Public */,
       9,    1,  273,    6, 0x06 /* Public */,
      10,    1,  276,    6, 0x06 /* Public */,
      11,    1,  279,    6, 0x86 /* Public | MethodRevisioned */,
      12,    1,  282,    6, 0x06 /* Public */,
      14,    1,  285,    6, 0x06 /* Public */,
      16,    1,  288,    6, 0x06 /* Public */,
      17,    1,  291,    6, 0x06 /* Public */,
      18,    1,  294,    6, 0x06 /* Public */,
      19,    1,  297,    6, 0x86 /* Public | MethodRevisioned */,
      22,    0,  300,    6, 0x06 /* Public */,
      23,    0,  301,    6, 0x06 /* Public */,
      24,    0,  302,    6, 0x06 /* Public */,
      25,    0,  303,    6, 0x06 /* Public */,
      26,    0,  304,    6, 0x06 /* Public */,
      27,    0,  305,    6, 0x06 /* Public */,
      28,    0,  306,    6, 0x06 /* Public */,
      29,    0,  307,    6, 0x06 /* Public */,
      30,    0,  308,    6, 0x06 /* Public */,
      31,    0,  309,    6, 0x06 /* Public */,
      32,    0,  310,    6, 0x06 /* Public */,
      33,    0,  311,    6, 0x06 /* Public */,
      34,    0,  312,    6, 0x06 /* Public */,
      35,    0,  313,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    0,  314,    6, 0x0a /* Public */,
      37,    1,  315,    6, 0x08 /* Private */,
      38,    1,  318,    6, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      40,    2,  321,    6, 0x82 /* Public | MethodRevisioned */,
      40,    1,  326,    6, 0xa2 /* Public | MethodCloned | MethodRevisioned */,
      44,    1,  329,    6, 0x02 /* Public */,
      46,    1,  332,    6, 0x02 /* Public */,
      48,    1,  335,    6, 0x02 /* Public */,
      49,    1,  338,    6, 0x82 /* Public | MethodRevisioned */,
      50,    1,  341,    6, 0x82 /* Public | MethodRevisioned */,
      51,    0,  344,    6, 0x02 /* Public */,
      51,    1,  345,    6, 0x02 /* Public */,
      54,    1,  348,    6, 0x82 /* Public | MethodRevisioned */,
      54,    0,  351,    6, 0xa2 /* Public | MethodCloned | MethodRevisioned */,
      56,    2,  352,    6, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       1,
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

 // slots: revision
       0,
       0,
       0,

 // methods: revision
       2,
       2,
       0,
       0,
       0,
       7,
       7,
       0,
       0,
       1,
       1,
       0,

 // signals: parameters
    QMetaType::Void, QMetaType::QRectF,    6,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 13,    6,
    QMetaType::Void, 0x80000000 | 15,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 20,   21,
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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::ULongLong, 0x80000000 | 39,    6,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 41, QMetaType::QSize,   42,   43,
    QMetaType::Bool, 0x80000000 | 41,   42,
    QMetaType::Bool, QMetaType::QPointF,   45,
    QMetaType::Void, 0x80000000 | 47,    6,
    QMetaType::Void, 0x80000000 | 47,    6,
    QMetaType::Void, 0x80000000 | 47,    6,
    QMetaType::Void, 0x80000000 | 47,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   53,
    0x80000000 | 13, QMetaType::Bool,   55,
    0x80000000 | 13,
    0x80000000 | 13, QMetaType::QReal, QMetaType::QReal,   57,   58,

 // properties: name, type, flags
      59, 0x80000000 | 13, 0x0049480b,
       2, 0x80000000 | 60, 0x00094009,
      61, 0x80000000 | 60, 0x00094009,
      62, 0x80000000 | 63, 0x00494009,
      57, QMetaType::QReal, 0x00495903,
      58, QMetaType::QReal, 0x00495903,
      64, QMetaType::QReal, 0x00495903,
      65, QMetaType::QReal, 0x00495907,
      66, QMetaType::QReal, 0x00495907,
      67, QMetaType::QReal, 0x00495903,
      68, QMetaType::Bool, 0x00495103,
      69, QMetaType::Bool, 0x00495903,
      70, 0x80000000 | 63, 0x00494009,
      71, 0x80000000 | 72, 0x00094009,
      73, 0x80000000 | 74, 0x00094009,
      75, QMetaType::QString, 0x00495103,
      76, QMetaType::QRectF, 0x00494801,
      77, 0x80000000 | 78, 0x00094c09,
      79, 0x80000000 | 80, 0x00095c09,
      81, 0x80000000 | 80, 0x00095c09,
      82, 0x80000000 | 80, 0x00095c09,
      83, 0x80000000 | 80, 0x00095c09,
      84, 0x80000000 | 80, 0x00095c09,
      85, 0x80000000 | 80, 0x00095c09,
      86, 0x80000000 | 80, 0x00095c09,
      87, QMetaType::QReal, 0x00495103,
      88, QMetaType::Bool, 0x00495103,
      89, QMetaType::Bool, 0x00495903,
      90, QMetaType::Bool, 0x00495801,
      91, QMetaType::Bool, 0x00c95903,
      92, QMetaType::QReal, 0x00495103,
      93, QMetaType::QReal, 0x00495103,
      94, 0x80000000 | 15, 0x0049510b,
      95, QMetaType::QPointF, 0x00095001,
      96, 0x80000000 | 97, 0x00094809,
      98, QMetaType::Bool, 0x00495103,
      99, QMetaType::Bool, 0x00495107,
     100, QMetaType::QReal, 0x00495103,
     101, QMetaType::QReal, 0x00495103,
     102, 0x80000000 | 103, 0x00094c09,

 // properties: notify_signal_id
       6,
       0,
       0,
      12,
      19,
      20,
      23,
      21,
      22,
      13,
      14,
      15,
      16,
       0,
       0,
       2,
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
      10,
       3,
       4,
       5,
      17,
      18,
       7,
       0,
       0,
       8,
       9,
      24,
      25,
       0,

 // properties: revision
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

 // enums: name, flags, count, data
      15, 0x0,    9,  561,

 // enum data: key, value
     104, uint(QQuickItem::TopLeft),
     105, uint(QQuickItem::Top),
     106, uint(QQuickItem::TopRight),
     107, uint(QQuickItem::Left),
     108, uint(QQuickItem::Center),
     109, uint(QQuickItem::Right),
     110, uint(QQuickItem::BottomLeft),
     111, uint(QQuickItem::Bottom),
     112, uint(QQuickItem::BottomRight),

       0        // eod
};

void QQuickItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickItem *_t = static_cast<QQuickItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->childrenRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->baselineOffsetChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->focusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->activeFocusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->activeFocusOnTabChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->parentChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 7: _t->transformOriginChanged((*reinterpret_cast< TransformOrigin(*)>(_a[1]))); break;
        case 8: _t->smoothChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->antialiasingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->clipChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->windowChanged((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 12: _t->childrenChanged(); break;
        case 13: _t->opacityChanged(); break;
        case 14: _t->enabledChanged(); break;
        case 15: _t->visibleChanged(); break;
        case 16: _t->visibleChildrenChanged(); break;
        case 17: _t->rotationChanged(); break;
        case 18: _t->scaleChanged(); break;
        case 19: _t->xChanged(); break;
        case 20: _t->yChanged(); break;
        case 21: _t->widthChanged(); break;
        case 22: _t->heightChanged(); break;
        case 23: _t->zChanged(); break;
        case 24: _t->implicitWidthChanged(); break;
        case 25: _t->implicitHeightChanged(); break;
        case 26: _t->update(); break;
        case 27: _t->d_func()->_q_resourceObjectDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 28: { quint64 _r = _t->d_func()->_q_createJSWrapper((*reinterpret_cast< QV4::ExecutionEngine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->grabToImage((*reinterpret_cast< const QJSValue(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->grabToImage((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->contains((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->mapFromItem((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 33: _t->mapToItem((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 34: _t->mapFromGlobal((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 35: _t->mapToGlobal((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 36: _t->forceActiveFocus(); break;
        case 37: _t->forceActiveFocus((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        case 38: { QQuickItem* _r = _t->nextItemInFocusChain((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 39: { QQuickItem* _r = _t->nextItemInFocusChain();
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 40: { QQuickItem* _r = _t->childAt((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickItem::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::childrenRectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::baselineOffsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::focusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::activeFocusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::activeFocusOnTabChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::parentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(TransformOrigin );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::transformOriginChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::smoothChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::antialiasingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::clipChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)(QQuickWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::windowChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::childrenChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::opacityChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::enabledChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::visibleChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::visibleChildrenChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::rotationChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::scaleChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::xChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::yChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::widthChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::heightChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::zChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::implicitWidthChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (QQuickItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickItem::implicitHeightChanged)) {
                *result = 25;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 12:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        case 34:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickTransform> >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickItem *_t = static_cast<QQuickItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->parentItem(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->QQuickItem::d_func()->data(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->QQuickItem::d_func()->resources(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->QQuickItem::d_func()->children(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->height(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 12: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->QQuickItem::d_func()->visibleChildren(); break;
        case 13: *reinterpret_cast< QQmlListProperty<QQuickState>*>(_v) = _t->QQuickItem::d_func()->states(); break;
        case 14: *reinterpret_cast< QQmlListProperty<QQuickTransition>*>(_v) = _t->QQuickItem::d_func()->transitions(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->state(); break;
        case 16: *reinterpret_cast< QRectF*>(_v) = _t->childrenRect(); break;
        case 17: *reinterpret_cast< QQuickAnchors**>(_v) = _t->QQuickItem::d_func()->anchors(); break;
        case 18: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->left(); break;
        case 19: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->right(); break;
        case 20: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->horizontalCenter(); break;
        case 21: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->top(); break;
        case 22: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->bottom(); break;
        case 23: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->verticalCenter(); break;
        case 24: *reinterpret_cast< QQuickAnchorLine*>(_v) = _t->QQuickItem::d_func()->baseline(); break;
        case 25: *reinterpret_cast< qreal*>(_v) = _t->baselineOffset(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->clip(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->hasFocus(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->hasActiveFocus(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->activeFocusOnTab(); break;
        case 30: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        case 31: *reinterpret_cast< qreal*>(_v) = _t->scale(); break;
        case 32: *reinterpret_cast< TransformOrigin*>(_v) = _t->transformOrigin(); break;
        case 33: *reinterpret_cast< QPointF*>(_v) = _t->transformOriginPoint(); break;
        case 34: *reinterpret_cast< QQmlListProperty<QQuickTransform>*>(_v) = _t->transform(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->smooth(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->antialiasing(); break;
        case 37: *reinterpret_cast< qreal*>(_v) = _t->implicitWidth(); break;
        case 38: *reinterpret_cast< qreal*>(_v) = _t->implicitHeight(); break;
        case 39: *reinterpret_cast< QQuickItemLayer**>(_v) = _t->QQuickItem::d_func()->layer(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickItem *_t = static_cast<QQuickItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 4: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setZ(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setState(*reinterpret_cast< QString*>(_v)); break;
        case 25: _t->setBaselineOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 26: _t->setClip(*reinterpret_cast< bool*>(_v)); break;
        case 27: _t->setFocus(*reinterpret_cast< bool*>(_v)); break;
        case 29: _t->setActiveFocusOnTab(*reinterpret_cast< bool*>(_v)); break;
        case 30: _t->setRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 31: _t->setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 32: _t->setTransformOrigin(*reinterpret_cast< TransformOrigin*>(_v)); break;
        case 35: _t->setSmooth(*reinterpret_cast< bool*>(_v)); break;
        case 36: _t->setAntialiasing(*reinterpret_cast< bool*>(_v)); break;
        case 37: _t->setImplicitWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 38: _t->setImplicitHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickItem *_t = static_cast<QQuickItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 7: _t->resetWidth(); break;
        case 8: _t->resetHeight(); break;
        case 36: _t->resetAntialiasing(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickItem.data,
      qt_meta_data_QQuickItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 40;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickItem::childrenRectChanged(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickItem::baselineOffsetChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickItem::stateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickItem::focusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickItem::activeFocusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickItem::activeFocusOnTabChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQuickItem::parentChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQuickItem::transformOriginChanged(TransformOrigin _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QQuickItem::smoothChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QQuickItem::antialiasingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QQuickItem::clipChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QQuickItem::windowChanged(QQuickWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QQuickItem::childrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QQuickItem::opacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QQuickItem::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QQuickItem::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QQuickItem::visibleChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QQuickItem::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QQuickItem::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QQuickItem::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QQuickItem::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QQuickItem::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QQuickItem::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QQuickItem::zChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QQuickItem::implicitWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void QQuickItem::implicitHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
