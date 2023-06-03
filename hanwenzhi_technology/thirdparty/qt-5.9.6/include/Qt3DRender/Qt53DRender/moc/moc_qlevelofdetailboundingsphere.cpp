/****************************************************************************
** Meta object code from reading C++ file 'qlevelofdetailboundingsphere.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qlevelofdetailboundingsphere.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlevelofdetailboundingsphere.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QLevelOfDetailBoundingSphere_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QLevelOfDetailBoundingSphere_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QLevelOfDetailBoundingSphere_t qt_meta_stringdata_Qt3DRender__QLevelOfDetailBoundingSphere = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Qt3DRender::QLevelOfDetailBou..."
QT_MOC_LITERAL(1, 41, 6), // "center"
QT_MOC_LITERAL(2, 48, 6) // "radius"

    },
    "Qt3DRender::QLevelOfDetailBoundingSphere\0"
    "center\0radius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QLevelOfDetailBoundingSphere[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVector3D, 0x00095401,
       2, QMetaType::Float, 0x00095401,

       0        // eod
};

void Qt3DRender::QLevelOfDetailBoundingSphere::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QLevelOfDetailBoundingSphere *_t = reinterpret_cast<QLevelOfDetailBoundingSphere *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->center(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->radius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DRender::QLevelOfDetailBoundingSphere::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Qt3DRender__QLevelOfDetailBoundingSphere.data,
      qt_meta_data_Qt3DRender__QLevelOfDetailBoundingSphere,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
