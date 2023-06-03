/****************************************************************************
** Meta object code from reading C++ file 'qcamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QCamera_t {
    QByteArrayData data[74];
    char stringdata0[973];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QCamera_t qt_meta_stringdata_Qt3DRender__QCamera = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Qt3DRender::QCamera"
QT_MOC_LITERAL(1, 20, 21), // "projectionTypeChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 27), // "QCameraLens::ProjectionType"
QT_MOC_LITERAL(4, 71, 14), // "projectionType"
QT_MOC_LITERAL(5, 86, 16), // "nearPlaneChanged"
QT_MOC_LITERAL(6, 103, 9), // "nearPlane"
QT_MOC_LITERAL(7, 113, 15), // "farPlaneChanged"
QT_MOC_LITERAL(8, 129, 8), // "farPlane"
QT_MOC_LITERAL(9, 138, 18), // "fieldOfViewChanged"
QT_MOC_LITERAL(10, 157, 11), // "fieldOfView"
QT_MOC_LITERAL(11, 169, 18), // "aspectRatioChanged"
QT_MOC_LITERAL(12, 188, 11), // "aspectRatio"
QT_MOC_LITERAL(13, 200, 11), // "leftChanged"
QT_MOC_LITERAL(14, 212, 4), // "left"
QT_MOC_LITERAL(15, 217, 12), // "rightChanged"
QT_MOC_LITERAL(16, 230, 5), // "right"
QT_MOC_LITERAL(17, 236, 13), // "bottomChanged"
QT_MOC_LITERAL(18, 250, 6), // "bottom"
QT_MOC_LITERAL(19, 257, 10), // "topChanged"
QT_MOC_LITERAL(20, 268, 3), // "top"
QT_MOC_LITERAL(21, 272, 23), // "projectionMatrixChanged"
QT_MOC_LITERAL(22, 296, 16), // "projectionMatrix"
QT_MOC_LITERAL(23, 313, 15), // "exposureChanged"
QT_MOC_LITERAL(24, 329, 8), // "exposure"
QT_MOC_LITERAL(25, 338, 15), // "positionChanged"
QT_MOC_LITERAL(26, 354, 8), // "position"
QT_MOC_LITERAL(27, 363, 15), // "upVectorChanged"
QT_MOC_LITERAL(28, 379, 8), // "upVector"
QT_MOC_LITERAL(29, 388, 17), // "viewCenterChanged"
QT_MOC_LITERAL(30, 406, 10), // "viewCenter"
QT_MOC_LITERAL(31, 417, 17), // "viewVectorChanged"
QT_MOC_LITERAL(32, 435, 10), // "viewVector"
QT_MOC_LITERAL(33, 446, 17), // "viewMatrixChanged"
QT_MOC_LITERAL(34, 464, 17), // "setProjectionType"
QT_MOC_LITERAL(35, 482, 4), // "type"
QT_MOC_LITERAL(36, 487, 12), // "setNearPlane"
QT_MOC_LITERAL(37, 500, 11), // "setFarPlane"
QT_MOC_LITERAL(38, 512, 14), // "setFieldOfView"
QT_MOC_LITERAL(39, 527, 14), // "setAspectRatio"
QT_MOC_LITERAL(40, 542, 7), // "setLeft"
QT_MOC_LITERAL(41, 550, 8), // "setRight"
QT_MOC_LITERAL(42, 559, 9), // "setBottom"
QT_MOC_LITERAL(43, 569, 6), // "setTop"
QT_MOC_LITERAL(44, 576, 19), // "setProjectionMatrix"
QT_MOC_LITERAL(45, 596, 11), // "setExposure"
QT_MOC_LITERAL(46, 608, 11), // "setPosition"
QT_MOC_LITERAL(47, 620, 11), // "setUpVector"
QT_MOC_LITERAL(48, 632, 13), // "setViewCenter"
QT_MOC_LITERAL(49, 646, 12), // "tiltRotation"
QT_MOC_LITERAL(50, 659, 5), // "angle"
QT_MOC_LITERAL(51, 665, 11), // "panRotation"
QT_MOC_LITERAL(52, 677, 12), // "rollRotation"
QT_MOC_LITERAL(53, 690, 8), // "rotation"
QT_MOC_LITERAL(54, 699, 4), // "axis"
QT_MOC_LITERAL(55, 704, 9), // "translate"
QT_MOC_LITERAL(56, 714, 6), // "vLocal"
QT_MOC_LITERAL(57, 721, 23), // "CameraTranslationOption"
QT_MOC_LITERAL(58, 745, 6), // "option"
QT_MOC_LITERAL(59, 752, 14), // "translateWorld"
QT_MOC_LITERAL(60, 767, 6), // "vWorld"
QT_MOC_LITERAL(61, 774, 4), // "tilt"
QT_MOC_LITERAL(62, 779, 3), // "pan"
QT_MOC_LITERAL(63, 783, 4), // "roll"
QT_MOC_LITERAL(64, 788, 19), // "tiltAboutViewCenter"
QT_MOC_LITERAL(65, 808, 18), // "panAboutViewCenter"
QT_MOC_LITERAL(66, 827, 19), // "rollAboutViewCenter"
QT_MOC_LITERAL(67, 847, 6), // "rotate"
QT_MOC_LITERAL(68, 854, 1), // "q"
QT_MOC_LITERAL(69, 856, 21), // "rotateAboutViewCenter"
QT_MOC_LITERAL(70, 878, 39), // "Qt3DRender::QCameraLens::Proj..."
QT_MOC_LITERAL(71, 918, 10), // "viewMatrix"
QT_MOC_LITERAL(72, 929, 19), // "TranslateViewCenter"
QT_MOC_LITERAL(73, 949, 23) // "DontTranslateViewCenter"

    },
    "Qt3DRender::QCamera\0projectionTypeChanged\0"
    "\0QCameraLens::ProjectionType\0"
    "projectionType\0nearPlaneChanged\0"
    "nearPlane\0farPlaneChanged\0farPlane\0"
    "fieldOfViewChanged\0fieldOfView\0"
    "aspectRatioChanged\0aspectRatio\0"
    "leftChanged\0left\0rightChanged\0right\0"
    "bottomChanged\0bottom\0topChanged\0top\0"
    "projectionMatrixChanged\0projectionMatrix\0"
    "exposureChanged\0exposure\0positionChanged\0"
    "position\0upVectorChanged\0upVector\0"
    "viewCenterChanged\0viewCenter\0"
    "viewVectorChanged\0viewVector\0"
    "viewMatrixChanged\0setProjectionType\0"
    "type\0setNearPlane\0setFarPlane\0"
    "setFieldOfView\0setAspectRatio\0setLeft\0"
    "setRight\0setBottom\0setTop\0setProjectionMatrix\0"
    "setExposure\0setPosition\0setUpVector\0"
    "setViewCenter\0tiltRotation\0angle\0"
    "panRotation\0rollRotation\0rotation\0"
    "axis\0translate\0vLocal\0CameraTranslationOption\0"
    "option\0translateWorld\0vWorld\0tilt\0pan\0"
    "roll\0tiltAboutViewCenter\0panAboutViewCenter\0"
    "rollAboutViewCenter\0rotate\0q\0"
    "rotateAboutViewCenter\0"
    "Qt3DRender::QCameraLens::ProjectionType\0"
    "viewMatrix\0TranslateViewCenter\0"
    "DontTranslateViewCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QCamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
      16,  406, // properties
       1,  486, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x06 /* Public */,
       5,    1,  257,    2, 0x06 /* Public */,
       7,    1,  260,    2, 0x06 /* Public */,
       9,    1,  263,    2, 0x06 /* Public */,
      11,    1,  266,    2, 0x06 /* Public */,
      13,    1,  269,    2, 0x06 /* Public */,
      15,    1,  272,    2, 0x06 /* Public */,
      17,    1,  275,    2, 0x06 /* Public */,
      19,    1,  278,    2, 0x06 /* Public */,
      21,    1,  281,    2, 0x06 /* Public */,
      23,    1,  284,    2, 0x06 /* Public */,
      25,    1,  287,    2, 0x06 /* Public */,
      27,    1,  290,    2, 0x06 /* Public */,
      29,    1,  293,    2, 0x06 /* Public */,
      31,    1,  296,    2, 0x06 /* Public */,
      33,    0,  299,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    1,  300,    2, 0x0a /* Public */,
      36,    1,  303,    2, 0x0a /* Public */,
      37,    1,  306,    2, 0x0a /* Public */,
      38,    1,  309,    2, 0x0a /* Public */,
      39,    1,  312,    2, 0x0a /* Public */,
      40,    1,  315,    2, 0x0a /* Public */,
      41,    1,  318,    2, 0x0a /* Public */,
      42,    1,  321,    2, 0x0a /* Public */,
      43,    1,  324,    2, 0x0a /* Public */,
      44,    1,  327,    2, 0x0a /* Public */,
      45,    1,  330,    2, 0x0a /* Public */,
      46,    1,  333,    2, 0x0a /* Public */,
      47,    1,  336,    2, 0x0a /* Public */,
      48,    1,  339,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      49,    1,  342,    2, 0x02 /* Public */,
      51,    1,  345,    2, 0x02 /* Public */,
      52,    1,  348,    2, 0x02 /* Public */,
      53,    2,  351,    2, 0x02 /* Public */,
      55,    2,  356,    2, 0x02 /* Public */,
      55,    1,  361,    2, 0x22 /* Public | MethodCloned */,
      59,    2,  364,    2, 0x02 /* Public */,
      59,    1,  369,    2, 0x22 /* Public | MethodCloned */,
      61,    1,  372,    2, 0x02 /* Public */,
      62,    1,  375,    2, 0x02 /* Public */,
      62,    2,  378,    2, 0x02 /* Public */,
      63,    1,  383,    2, 0x02 /* Public */,
      64,    1,  386,    2, 0x02 /* Public */,
      65,    1,  389,    2, 0x02 /* Public */,
      65,    2,  392,    2, 0x02 /* Public */,
      66,    1,  397,    2, 0x02 /* Public */,
      67,    1,  400,    2, 0x02 /* Public */,
      69,    1,  403,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::Float,   20,
    QMetaType::Void, QMetaType::QMatrix4x4,   22,
    QMetaType::Void, QMetaType::Float,   24,
    QMetaType::Void, QMetaType::QVector3D,   26,
    QMetaType::Void, QMetaType::QVector3D,   28,
    QMetaType::Void, QMetaType::QVector3D,   30,
    QMetaType::Void, QMetaType::QVector3D,   32,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   35,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::Float,   20,
    QMetaType::Void, QMetaType::QMatrix4x4,   22,
    QMetaType::Void, QMetaType::Float,   24,
    QMetaType::Void, QMetaType::QVector3D,   26,
    QMetaType::Void, QMetaType::QVector3D,   28,
    QMetaType::Void, QMetaType::QVector3D,   30,

 // methods: parameters
    QMetaType::QQuaternion, QMetaType::Float,   50,
    QMetaType::QQuaternion, QMetaType::Float,   50,
    QMetaType::QQuaternion, QMetaType::Float,   50,
    QMetaType::QQuaternion, QMetaType::Float, QMetaType::QVector3D,   50,   54,
    QMetaType::Void, QMetaType::QVector3D, 0x80000000 | 57,   56,   58,
    QMetaType::Void, QMetaType::QVector3D,   56,
    QMetaType::Void, QMetaType::QVector3D, 0x80000000 | 57,   60,   58,
    QMetaType::Void, QMetaType::QVector3D,   60,
    QMetaType::Void, QMetaType::Float,   50,
    QMetaType::Void, QMetaType::Float,   50,
    QMetaType::Void, QMetaType::Float, QMetaType::QVector3D,   50,   54,
    QMetaType::Void, QMetaType::Float,   50,
    QMetaType::Void, QMetaType::Float,   50,
    QMetaType::Void, QMetaType::Float,   50,
    QMetaType::Void, QMetaType::Float, QMetaType::QVector3D,   50,   54,
    QMetaType::Void, QMetaType::Float,   50,
    QMetaType::Void, QMetaType::QQuaternion,   68,
    QMetaType::Void, QMetaType::QQuaternion,   68,

 // properties: name, type, flags
       4, 0x80000000 | 70, 0x0049510b,
       6, QMetaType::Float, 0x00495103,
       8, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      22, QMetaType::QMatrix4x4, 0x00495103,
      24, QMetaType::Float, 0x00c95103,
      26, QMetaType::QVector3D, 0x00495103,
      28, QMetaType::QVector3D, 0x00495103,
      30, QMetaType::QVector3D, 0x00495103,
      32, QMetaType::QVector3D, 0x00495001,
      71, QMetaType::QMatrix4x4, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,

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
       9,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      57, 0x0,    2,  490,

 // enum data: key, value
      72, uint(Qt3DRender::QCamera::TranslateViewCenter),
      73, uint(Qt3DRender::QCamera::DontTranslateViewCenter),

       0        // eod
};

void Qt3DRender::QCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCamera *_t = static_cast<QCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectionTypeChanged((*reinterpret_cast< QCameraLens::ProjectionType(*)>(_a[1]))); break;
        case 1: _t->nearPlaneChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->farPlaneChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->fieldOfViewChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->aspectRatioChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->leftChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->rightChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->bottomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->topChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->projectionMatrixChanged((*reinterpret_cast< const QMatrix4x4(*)>(_a[1]))); break;
        case 10: _t->exposureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->positionChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 12: _t->upVectorChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 13: _t->viewCenterChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 14: _t->viewVectorChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 15: _t->viewMatrixChanged(); break;
        case 16: _t->setProjectionType((*reinterpret_cast< QCameraLens::ProjectionType(*)>(_a[1]))); break;
        case 17: _t->setNearPlane((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setFarPlane((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->setFieldOfView((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->setAspectRatio((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: _t->setLeft((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->setRight((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->setBottom((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->setTop((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 25: _t->setProjectionMatrix((*reinterpret_cast< const QMatrix4x4(*)>(_a[1]))); break;
        case 26: _t->setExposure((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: _t->setPosition((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 28: _t->setUpVector((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 29: _t->setViewCenter((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 30: { QQuaternion _r = _t->tiltRotation((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = std::move(_r); }  break;
        case 31: { QQuaternion _r = _t->panRotation((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = std::move(_r); }  break;
        case 32: { QQuaternion _r = _t->rollRotation((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = std::move(_r); }  break;
        case 33: { QQuaternion _r = _t->rotation((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuaternion*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->translate((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< CameraTranslationOption(*)>(_a[2]))); break;
        case 35: _t->translate((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 36: _t->translateWorld((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< CameraTranslationOption(*)>(_a[2]))); break;
        case 37: _t->translateWorld((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 38: _t->tilt((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->pan((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->pan((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 41: _t->roll((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->tiltAboutViewCenter((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->panAboutViewCenter((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->panAboutViewCenter((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 45: _t->rollAboutViewCenter((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->rotate((*reinterpret_cast< const QQuaternion(*)>(_a[1]))); break;
        case 47: _t->rotateAboutViewCenter((*reinterpret_cast< const QQuaternion(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCamera::*_t)(QCameraLens::ProjectionType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::projectionTypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::nearPlaneChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::farPlaneChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::fieldOfViewChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::aspectRatioChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::leftChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::rightChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::bottomChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::topChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(const QMatrix4x4 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::projectionMatrixChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::exposureChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::positionChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::upVectorChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::viewCenterChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::viewVectorChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QCamera::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCamera::viewMatrixChanged)) {
                *result = 15;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCamera *_t = static_cast<QCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QCameraLens::ProjectionType*>(_v) = _t->projectionType(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->nearPlane(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->farPlane(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->fieldOfView(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->aspectRatio(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->left(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->right(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->bottom(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->top(); break;
        case 9: *reinterpret_cast< QMatrix4x4*>(_v) = _t->projectionMatrix(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->exposure(); break;
        case 11: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 12: *reinterpret_cast< QVector3D*>(_v) = _t->upVector(); break;
        case 13: *reinterpret_cast< QVector3D*>(_v) = _t->viewCenter(); break;
        case 14: *reinterpret_cast< QVector3D*>(_v) = _t->viewVector(); break;
        case 15: *reinterpret_cast< QMatrix4x4*>(_v) = _t->viewMatrix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCamera *_t = static_cast<QCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProjectionType(*reinterpret_cast< Qt3DRender::QCameraLens::ProjectionType*>(_v)); break;
        case 1: _t->setNearPlane(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setFarPlane(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setFieldOfView(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAspectRatio(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setLeft(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setRight(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setBottom(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setTop(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setProjectionMatrix(*reinterpret_cast< QMatrix4x4*>(_v)); break;
        case 10: _t->setExposure(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 12: _t->setUpVector(*reinterpret_cast< QVector3D*>(_v)); break;
        case 13: _t->setViewCenter(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Qt3DRender__QCamera[] = {
        &Qt3DRender::QCameraLens::staticMetaObject,
    nullptr
};

const QMetaObject Qt3DRender::QCamera::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_Qt3DRender__QCamera.data,
      qt_meta_data_Qt3DRender__QCamera,  qt_static_metacall, qt_meta_extradata_Qt3DRender__QCamera, nullptr}
};


const QMetaObject *Qt3DRender::QCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QCamera.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int Qt3DRender::QCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DRender::QCamera::projectionTypeChanged(QCameraLens::ProjectionType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QCamera::nearPlaneChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QCamera::farPlaneChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DRender::QCamera::fieldOfViewChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DRender::QCamera::aspectRatioChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qt3DRender::QCamera::leftChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Qt3DRender::QCamera::rightChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Qt3DRender::QCamera::bottomChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Qt3DRender::QCamera::topChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Qt3DRender::QCamera::projectionMatrixChanged(const QMatrix4x4 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Qt3DRender::QCamera::exposureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Qt3DRender::QCamera::positionChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Qt3DRender::QCamera::upVectorChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Qt3DRender::QCamera::viewCenterChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Qt3DRender::QCamera::viewVectorChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Qt3DRender::QCamera::viewMatrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
