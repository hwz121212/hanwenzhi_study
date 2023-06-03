/****************************************************************************
** Meta object code from reading C++ file 'qcameraimageprocessing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcameraimageprocessing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcameraimageprocessing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCameraImageProcessing_t {
    QByteArrayData data[23];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCameraImageProcessing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCameraImageProcessing_t qt_meta_stringdata_QCameraImageProcessing = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QCameraImageProcessing"
QT_MOC_LITERAL(1, 23, 16), // "WhiteBalanceMode"
QT_MOC_LITERAL(2, 40, 16), // "WhiteBalanceAuto"
QT_MOC_LITERAL(3, 57, 18), // "WhiteBalanceManual"
QT_MOC_LITERAL(4, 76, 20), // "WhiteBalanceSunlight"
QT_MOC_LITERAL(5, 97, 18), // "WhiteBalanceCloudy"
QT_MOC_LITERAL(6, 116, 17), // "WhiteBalanceShade"
QT_MOC_LITERAL(7, 134, 20), // "WhiteBalanceTungsten"
QT_MOC_LITERAL(8, 155, 23), // "WhiteBalanceFluorescent"
QT_MOC_LITERAL(9, 179, 17), // "WhiteBalanceFlash"
QT_MOC_LITERAL(10, 197, 18), // "WhiteBalanceSunset"
QT_MOC_LITERAL(11, 216, 18), // "WhiteBalanceVendor"
QT_MOC_LITERAL(12, 235, 11), // "ColorFilter"
QT_MOC_LITERAL(13, 247, 15), // "ColorFilterNone"
QT_MOC_LITERAL(14, 263, 20), // "ColorFilterGrayscale"
QT_MOC_LITERAL(15, 284, 19), // "ColorFilterNegative"
QT_MOC_LITERAL(16, 304, 19), // "ColorFilterSolarize"
QT_MOC_LITERAL(17, 324, 16), // "ColorFilterSepia"
QT_MOC_LITERAL(18, 341, 20), // "ColorFilterPosterize"
QT_MOC_LITERAL(19, 362, 21), // "ColorFilterWhiteboard"
QT_MOC_LITERAL(20, 384, 21), // "ColorFilterBlackboard"
QT_MOC_LITERAL(21, 406, 15), // "ColorFilterAqua"
QT_MOC_LITERAL(22, 422, 17) // "ColorFilterVendor"

    },
    "QCameraImageProcessing\0WhiteBalanceMode\0"
    "WhiteBalanceAuto\0WhiteBalanceManual\0"
    "WhiteBalanceSunlight\0WhiteBalanceCloudy\0"
    "WhiteBalanceShade\0WhiteBalanceTungsten\0"
    "WhiteBalanceFluorescent\0WhiteBalanceFlash\0"
    "WhiteBalanceSunset\0WhiteBalanceVendor\0"
    "ColorFilter\0ColorFilterNone\0"
    "ColorFilterGrayscale\0ColorFilterNegative\0"
    "ColorFilterSolarize\0ColorFilterSepia\0"
    "ColorFilterPosterize\0ColorFilterWhiteboard\0"
    "ColorFilterBlackboard\0ColorFilterAqua\0"
    "ColorFilterVendor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCameraImageProcessing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   10,   22,
      12, 0x0,   10,   42,

 // enum data: key, value
       2, uint(QCameraImageProcessing::WhiteBalanceAuto),
       3, uint(QCameraImageProcessing::WhiteBalanceManual),
       4, uint(QCameraImageProcessing::WhiteBalanceSunlight),
       5, uint(QCameraImageProcessing::WhiteBalanceCloudy),
       6, uint(QCameraImageProcessing::WhiteBalanceShade),
       7, uint(QCameraImageProcessing::WhiteBalanceTungsten),
       8, uint(QCameraImageProcessing::WhiteBalanceFluorescent),
       9, uint(QCameraImageProcessing::WhiteBalanceFlash),
      10, uint(QCameraImageProcessing::WhiteBalanceSunset),
      11, uint(QCameraImageProcessing::WhiteBalanceVendor),
      13, uint(QCameraImageProcessing::ColorFilterNone),
      14, uint(QCameraImageProcessing::ColorFilterGrayscale),
      15, uint(QCameraImageProcessing::ColorFilterNegative),
      16, uint(QCameraImageProcessing::ColorFilterSolarize),
      17, uint(QCameraImageProcessing::ColorFilterSepia),
      18, uint(QCameraImageProcessing::ColorFilterPosterize),
      19, uint(QCameraImageProcessing::ColorFilterWhiteboard),
      20, uint(QCameraImageProcessing::ColorFilterBlackboard),
      21, uint(QCameraImageProcessing::ColorFilterAqua),
      22, uint(QCameraImageProcessing::ColorFilterVendor),

       0        // eod
};

void QCameraImageProcessing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCameraImageProcessing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCameraImageProcessing.data,
      qt_meta_data_QCameraImageProcessing,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCameraImageProcessing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCameraImageProcessing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCameraImageProcessing.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCameraImageProcessing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
