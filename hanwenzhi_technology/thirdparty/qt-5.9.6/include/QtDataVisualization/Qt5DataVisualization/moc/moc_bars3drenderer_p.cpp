/****************************************************************************
** Meta object code from reading C++ file 'bars3drenderer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/bars3drenderer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bars3drenderer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Bars3DRenderer_t {
    QByteArrayData data[24];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Bars3DRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Bars3DRenderer_t qt_meta_stringdata_QtDataVisualization__Bars3DRenderer = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtDataVisualization::Bars3DRe..."
QT_MOC_LITERAL(1, 36, 24), // "updateMultiSeriesScaling"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 7), // "uniform"
QT_MOC_LITERAL(4, 70, 14), // "updateBarSpecs"
QT_MOC_LITERAL(5, 85, 7), // "GLfloat"
QT_MOC_LITERAL(6, 93, 14), // "thicknessRatio"
QT_MOC_LITERAL(7, 108, 7), // "spacing"
QT_MOC_LITERAL(8, 116, 8), // "relative"
QT_MOC_LITERAL(9, 125, 19), // "updateSlicingActive"
QT_MOC_LITERAL(10, 145, 9), // "isSlicing"
QT_MOC_LITERAL(11, 155, 17), // "updateSelectedBar"
QT_MOC_LITERAL(12, 173, 8), // "position"
QT_MOC_LITERAL(13, 182, 13), // "QBar3DSeries*"
QT_MOC_LITERAL(14, 196, 6), // "series"
QT_MOC_LITERAL(15, 203, 15), // "clickedPosition"
QT_MOC_LITERAL(16, 219, 18), // "resetClickedStatus"
QT_MOC_LITERAL(17, 238, 15), // "updateAxisRange"
QT_MOC_LITERAL(18, 254, 32), // "QAbstract3DAxis::AxisOrientation"
QT_MOC_LITERAL(19, 287, 11), // "orientation"
QT_MOC_LITERAL(20, 299, 3), // "min"
QT_MOC_LITERAL(21, 303, 3), // "max"
QT_MOC_LITERAL(22, 307, 18), // "updateAxisReversed"
QT_MOC_LITERAL(23, 326, 6) // "enable"

    },
    "QtDataVisualization::Bars3DRenderer\0"
    "updateMultiSeriesScaling\0\0uniform\0"
    "updateBarSpecs\0GLfloat\0thicknessRatio\0"
    "spacing\0relative\0updateSlicingActive\0"
    "isSlicing\0updateSelectedBar\0position\0"
    "QBar3DSeries*\0series\0clickedPosition\0"
    "resetClickedStatus\0updateAxisRange\0"
    "QAbstract3DAxis::AxisOrientation\0"
    "orientation\0min\0max\0updateAxisReversed\0"
    "enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Bars3DRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    3,   72,    2, 0x0a /* Public */,
       4,    2,   79,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   84,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   87,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   88,    2, 0x0a /* Public */,
      11,    2,   91,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,
      17,    3,   98,    2, 0x0a /* Public */,
      22,    2,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QSizeF, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QSizeF,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 13,   12,   14,
    QMetaType::QPoint,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Float, QMetaType::Float,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Bool,   19,   23,

       0        // eod
};

void QtDataVisualization::Bars3DRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Bars3DRenderer *_t = static_cast<Bars3DRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMultiSeriesScaling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateBarSpecs((*reinterpret_cast< GLfloat(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->updateBarSpecs((*reinterpret_cast< GLfloat(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 3: _t->updateBarSpecs((*reinterpret_cast< GLfloat(*)>(_a[1]))); break;
        case 4: _t->updateBarSpecs(); break;
        case 5: _t->updateSlicingActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateSelectedBar((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< QBar3DSeries*(*)>(_a[2]))); break;
        case 7: { QPoint _r = _t->clickedPosition();
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->resetClickedStatus(); break;
        case 9: _t->updateAxisRange((*reinterpret_cast< QAbstract3DAxis::AxisOrientation(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 10: _t->updateAxisReversed((*reinterpret_cast< QAbstract3DAxis::AxisOrientation(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBar3DSeries* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtDataVisualization::Bars3DRenderer::staticMetaObject = {
    { &Abstract3DRenderer::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Bars3DRenderer.data,
      qt_meta_data_QtDataVisualization__Bars3DRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Bars3DRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Bars3DRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Bars3DRenderer.stringdata0))
        return static_cast<void*>(this);
    return Abstract3DRenderer::qt_metacast(_clname);
}

int QtDataVisualization::Bars3DRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Abstract3DRenderer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
