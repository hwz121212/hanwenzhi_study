/****************************************************************************
** Meta object code from reading C++ file 'qlogvalue3daxisformatter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qlogvalue3daxisformatter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlogvalue3daxisformatter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QLogValue3DAxisFormatter_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QLogValue3DAxisFormatter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QLogValue3DAxisFormatter_t qt_meta_stringdata_QtDataVisualization__QLogValue3DAxisFormatter = {
    {
QT_MOC_LITERAL(0, 0, 45), // "QtDataVisualization::QLogValu..."
QT_MOC_LITERAL(1, 46, 11), // "baseChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 4), // "base"
QT_MOC_LITERAL(4, 64, 18), // "autoSubGridChanged"
QT_MOC_LITERAL(5, 83, 7), // "enabled"
QT_MOC_LITERAL(6, 91, 21), // "showEdgeLabelsChanged"
QT_MOC_LITERAL(7, 113, 11), // "autoSubGrid"
QT_MOC_LITERAL(8, 125, 14) // "showEdgeLabels"

    },
    "QtDataVisualization::QLogValue3DAxisFormatter\0"
    "baseChanged\0\0base\0autoSubGridChanged\0"
    "enabled\0showEdgeLabelsChanged\0autoSubGrid\0"
    "showEdgeLabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QLogValue3DAxisFormatter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QtDataVisualization::QLogValue3DAxisFormatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLogValue3DAxisFormatter *_t = static_cast<QLogValue3DAxisFormatter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baseChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->autoSubGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showEdgeLabelsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QLogValue3DAxisFormatter::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValue3DAxisFormatter::baseChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLogValue3DAxisFormatter::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValue3DAxisFormatter::autoSubGridChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QLogValue3DAxisFormatter::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLogValue3DAxisFormatter::showEdgeLabelsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QLogValue3DAxisFormatter *_t = static_cast<QLogValue3DAxisFormatter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->base(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoSubGrid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showEdgeLabels(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLogValue3DAxisFormatter *_t = static_cast<QLogValue3DAxisFormatter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBase(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setAutoSubGrid(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowEdgeLabels(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QLogValue3DAxisFormatter::staticMetaObject = {
    { &QValue3DAxisFormatter::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QLogValue3DAxisFormatter.data,
      qt_meta_data_QtDataVisualization__QLogValue3DAxisFormatter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QLogValue3DAxisFormatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QLogValue3DAxisFormatter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QLogValue3DAxisFormatter.stringdata0))
        return static_cast<void*>(this);
    return QValue3DAxisFormatter::qt_metacast(_clname);
}

int QtDataVisualization::QLogValue3DAxisFormatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValue3DAxisFormatter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QLogValue3DAxisFormatter::baseChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QLogValue3DAxisFormatter::autoSubGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QLogValue3DAxisFormatter::showEdgeLabelsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
