/****************************************************************************
** Meta object code from reading C++ file 'qcustom3dlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcustom3dlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustom3dlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QCustom3DLabel_t {
    QByteArrayData data[18];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QCustom3DLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QCustom3DLabel_t qt_meta_stringdata_QtDataVisualization__QCustom3DLabel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtDataVisualization::QCustom3..."
QT_MOC_LITERAL(1, 36, 11), // "textChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "text"
QT_MOC_LITERAL(4, 54, 11), // "fontChanged"
QT_MOC_LITERAL(5, 66, 4), // "font"
QT_MOC_LITERAL(6, 71, 16), // "textColorChanged"
QT_MOC_LITERAL(7, 88, 5), // "color"
QT_MOC_LITERAL(8, 94, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(9, 117, 20), // "borderEnabledChanged"
QT_MOC_LITERAL(10, 138, 7), // "enabled"
QT_MOC_LITERAL(11, 146, 24), // "backgroundEnabledChanged"
QT_MOC_LITERAL(12, 171, 19), // "facingCameraChanged"
QT_MOC_LITERAL(13, 191, 9), // "textColor"
QT_MOC_LITERAL(14, 201, 15), // "backgroundColor"
QT_MOC_LITERAL(15, 217, 13), // "borderEnabled"
QT_MOC_LITERAL(16, 231, 17), // "backgroundEnabled"
QT_MOC_LITERAL(17, 249, 12) // "facingCamera"

    },
    "QtDataVisualization::QCustom3DLabel\0"
    "textChanged\0\0text\0fontChanged\0font\0"
    "textColorChanged\0color\0backgroundColorChanged\0"
    "borderEnabledChanged\0enabled\0"
    "backgroundEnabledChanged\0facingCameraChanged\0"
    "textColor\0backgroundColor\0borderEnabled\0"
    "backgroundEnabled\0facingCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QCustom3DLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,
      11,    1,   64,    2, 0x06 /* Public */,
      12,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QFont, 0x00495103,
      13, QMetaType::QColor, 0x00495103,
      14, QMetaType::QColor, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QtDataVisualization::QCustom3DLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCustom3DLabel *_t = static_cast<QCustom3DLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->borderEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->backgroundEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->facingCameraChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCustom3DLabel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCustom3DLabel::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::fontChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCustom3DLabel::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::textColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCustom3DLabel::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::backgroundColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCustom3DLabel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::borderEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCustom3DLabel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::backgroundEnabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCustom3DLabel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DLabel::facingCameraChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCustom3DLabel *_t = static_cast<QCustom3DLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isBorderEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isBackgroundEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isFacingCamera(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCustom3DLabel *_t = static_cast<QCustom3DLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setBorderEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setBackgroundEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setFacingCamera(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QCustom3DLabel::staticMetaObject = {
    { &QCustom3DItem::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QCustom3DLabel.data,
      qt_meta_data_QtDataVisualization__QCustom3DLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QCustom3DLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QCustom3DLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QCustom3DLabel.stringdata0))
        return static_cast<void*>(this);
    return QCustom3DItem::qt_metacast(_clname);
}

int QtDataVisualization::QCustom3DLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCustom3DItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QCustom3DLabel::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QCustom3DLabel::fontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QCustom3DLabel::textColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QCustom3DLabel::backgroundColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QCustom3DLabel::borderEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::QCustom3DLabel::backgroundEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtDataVisualization::QCustom3DLabel::facingCameraChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
