/****************************************************************************
** Meta object code from reading C++ file 'previewconfigurationwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/previewconfigurationwidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewconfigurationwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget_t {
    QByteArrayData data[5];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget_t qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "qdesigner_internal::PreviewCo..."
QT_MOC_LITERAL(1, 47, 21), // "slotEditAppStyleSheet"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 19), // "slotDeleteSkinEntry"
QT_MOC_LITERAL(4, 90, 15) // "slotSkinChanged"

    },
    "qdesigner_internal::PreviewConfigurationWidget\0"
    "slotEditAppStyleSheet\0\0slotDeleteSkinEntry\0"
    "slotSkinChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__PreviewConfigurationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void qdesigner_internal::PreviewConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewConfigurationWidget *_t = static_cast<PreviewConfigurationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotEditAppStyleSheet(); break;
        case 1: _t->slotDeleteSkinEntry(); break;
        case 2: _t->slotSkinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::PreviewConfigurationWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget.data,
      qt_meta_data_qdesigner_internal__PreviewConfigurationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::PreviewConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::PreviewConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__PreviewConfigurationWidget.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int qdesigner_internal::PreviewConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
