/****************************************************************************
** Meta object code from reading C++ file 'scatter3drenderer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/scatter3drenderer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scatter3drenderer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Scatter3DRenderer_t {
    QByteArrayData data[6];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Scatter3DRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Scatter3DRenderer_t qt_meta_stringdata_QtDataVisualization__Scatter3DRenderer = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QtDataVisualization::Scatter3..."
QT_MOC_LITERAL(1, 39, 18), // "updateSelectedItem"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 5), // "index"
QT_MOC_LITERAL(4, 65, 17), // "QScatter3DSeries*"
QT_MOC_LITERAL(5, 83, 6) // "series"

    },
    "QtDataVisualization::Scatter3DRenderer\0"
    "updateSelectedItem\0\0index\0QScatter3DSeries*\0"
    "series"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Scatter3DRenderer[] = {

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
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void QtDataVisualization::Scatter3DRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scatter3DRenderer *_t = static_cast<Scatter3DRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSelectedItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QScatter3DSeries*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QtDataVisualization::Scatter3DRenderer::staticMetaObject = {
    { &Abstract3DRenderer::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Scatter3DRenderer.data,
      qt_meta_data_QtDataVisualization__Scatter3DRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Scatter3DRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Scatter3DRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Scatter3DRenderer.stringdata0))
        return static_cast<void*>(this);
    return Abstract3DRenderer::qt_metacast(_clname);
}

int QtDataVisualization::Scatter3DRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Abstract3DRenderer::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
