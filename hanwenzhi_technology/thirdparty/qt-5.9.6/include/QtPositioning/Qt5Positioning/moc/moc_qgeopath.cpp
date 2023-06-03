/****************************************************************************
** Meta object code from reading C++ file 'qgeopath.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeopath.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeopath.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoPath_t {
    QByteArrayData data[22];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoPath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoPath_t qt_meta_stringdata_QGeoPath = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QGeoPath"
QT_MOC_LITERAL(1, 9, 9), // "translate"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "degreesLatitude"
QT_MOC_LITERAL(4, 36, 16), // "degreesLongitude"
QT_MOC_LITERAL(5, 53, 10), // "translated"
QT_MOC_LITERAL(6, 64, 6), // "length"
QT_MOC_LITERAL(7, 71, 9), // "indexFrom"
QT_MOC_LITERAL(8, 81, 7), // "indexTo"
QT_MOC_LITERAL(9, 89, 13), // "addCoordinate"
QT_MOC_LITERAL(10, 103, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(11, 118, 10), // "coordinate"
QT_MOC_LITERAL(12, 129, 16), // "insertCoordinate"
QT_MOC_LITERAL(13, 146, 5), // "index"
QT_MOC_LITERAL(14, 152, 17), // "replaceCoordinate"
QT_MOC_LITERAL(15, 170, 12), // "coordinateAt"
QT_MOC_LITERAL(16, 183, 18), // "containsCoordinate"
QT_MOC_LITERAL(17, 202, 16), // "removeCoordinate"
QT_MOC_LITERAL(18, 219, 8), // "toString"
QT_MOC_LITERAL(19, 228, 4), // "path"
QT_MOC_LITERAL(20, 233, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(21, 255, 5) // "width"

    },
    "QGeoPath\0translate\0\0degreesLatitude\0"
    "degreesLongitude\0translated\0length\0"
    "indexFrom\0indexTo\0addCoordinate\0"
    "QGeoCoordinate\0coordinate\0insertCoordinate\0"
    "index\0replaceCoordinate\0coordinateAt\0"
    "containsCoordinate\0removeCoordinate\0"
    "toString\0path\0QList<QGeoCoordinate>\0"
    "width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoPath[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x02 /* Public */,
       5,    2,   84,    2, 0x02 /* Public */,
       6,    2,   89,    2, 0x02 /* Public */,
       6,    1,   94,    2, 0x22 /* Public | MethodCloned */,
       6,    0,   97,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   98,    2, 0x02 /* Public */,
      12,    2,  101,    2, 0x02 /* Public */,
      14,    2,  106,    2, 0x02 /* Public */,
      15,    1,  111,    2, 0x02 /* Public */,
      16,    1,  114,    2, 0x02 /* Public */,
      17,    1,  117,    2, 0x02 /* Public */,
      17,    1,  120,    2, 0x02 /* Public */,
      18,    0,  123,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    0x80000000 | 0, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Double, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Double, QMetaType::Int,    7,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   13,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,   13,   11,
    0x80000000 | 10, QMetaType::Int,   13,
    QMetaType::Bool, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::QString,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x0009510b,
      21, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QGeoPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoPath *_t = reinterpret_cast<QGeoPath *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->translate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: { QGeoPath _r = _t->translated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGeoPath*>(_a[0]) = std::move(_r); }  break;
        case 2: { double _r = _t->length((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 3: { double _r = _t->length((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 4: { double _r = _t->length();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->addCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 6: _t->insertCoordinate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 7: _t->replaceCoordinate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 8: { QGeoCoordinate _r = _t->coordinateAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->containsCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->removeCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 11: _t->removeCoordinate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeoPath *_t = reinterpret_cast<QGeoPath *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QGeoCoordinate>*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoPath *_t = reinterpret_cast<QGeoPath *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QList<QGeoCoordinate>*>(_v)); break;
        case 1: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGeoPath::staticMetaObject = {
    { &QGeoShape::staticMetaObject, qt_meta_stringdata_QGeoPath.data,
      qt_meta_data_QGeoPath,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
