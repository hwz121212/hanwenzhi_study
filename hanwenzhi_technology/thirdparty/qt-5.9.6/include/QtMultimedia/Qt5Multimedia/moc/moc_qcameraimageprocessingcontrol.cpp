/****************************************************************************
** Meta object code from reading C++ file 'qcameraimageprocessingcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcameraimageprocessingcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcameraimageprocessingcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCameraImageProcessingControl_t {
    QByteArrayData data[16];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCameraImageProcessingControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCameraImageProcessingControl_t qt_meta_stringdata_QCameraImageProcessingControl = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QCameraImageProcessingControl"
QT_MOC_LITERAL(1, 30, 19), // "ProcessingParameter"
QT_MOC_LITERAL(2, 50, 18), // "WhiteBalancePreset"
QT_MOC_LITERAL(3, 69, 16), // "ColorTemperature"
QT_MOC_LITERAL(4, 86, 8), // "Contrast"
QT_MOC_LITERAL(5, 95, 10), // "Saturation"
QT_MOC_LITERAL(6, 106, 10), // "Brightness"
QT_MOC_LITERAL(7, 117, 10), // "Sharpening"
QT_MOC_LITERAL(8, 128, 9), // "Denoising"
QT_MOC_LITERAL(9, 138, 18), // "ContrastAdjustment"
QT_MOC_LITERAL(10, 157, 20), // "SaturationAdjustment"
QT_MOC_LITERAL(11, 178, 20), // "BrightnessAdjustment"
QT_MOC_LITERAL(12, 199, 20), // "SharpeningAdjustment"
QT_MOC_LITERAL(13, 220, 19), // "DenoisingAdjustment"
QT_MOC_LITERAL(14, 240, 11), // "ColorFilter"
QT_MOC_LITERAL(15, 252, 17) // "ExtendedParameter"

    },
    "QCameraImageProcessingControl\0"
    "ProcessingParameter\0WhiteBalancePreset\0"
    "ColorTemperature\0Contrast\0Saturation\0"
    "Brightness\0Sharpening\0Denoising\0"
    "ContrastAdjustment\0SaturationAdjustment\0"
    "BrightnessAdjustment\0SharpeningAdjustment\0"
    "DenoisingAdjustment\0ColorFilter\0"
    "ExtendedParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCameraImageProcessingControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   14,   18,

 // enum data: key, value
       2, uint(QCameraImageProcessingControl::WhiteBalancePreset),
       3, uint(QCameraImageProcessingControl::ColorTemperature),
       4, uint(QCameraImageProcessingControl::Contrast),
       5, uint(QCameraImageProcessingControl::Saturation),
       6, uint(QCameraImageProcessingControl::Brightness),
       7, uint(QCameraImageProcessingControl::Sharpening),
       8, uint(QCameraImageProcessingControl::Denoising),
       9, uint(QCameraImageProcessingControl::ContrastAdjustment),
      10, uint(QCameraImageProcessingControl::SaturationAdjustment),
      11, uint(QCameraImageProcessingControl::BrightnessAdjustment),
      12, uint(QCameraImageProcessingControl::SharpeningAdjustment),
      13, uint(QCameraImageProcessingControl::DenoisingAdjustment),
      14, uint(QCameraImageProcessingControl::ColorFilter),
      15, uint(QCameraImageProcessingControl::ExtendedParameter),

       0        // eod
};

void QCameraImageProcessingControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCameraImageProcessingControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QCameraImageProcessingControl.data,
      qt_meta_data_QCameraImageProcessingControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCameraImageProcessingControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCameraImageProcessingControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCameraImageProcessingControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QCameraImageProcessingControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
