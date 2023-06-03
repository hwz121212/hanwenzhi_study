/****************************************************************************
** Meta object code from reading C++ file 'widgetboxtreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgetbox/widgetboxtreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetboxtreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget_t qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "qdesigner_internal::WidgetBox..."
QT_MOC_LITERAL(1, 40, 7), // "pressed"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "name"
QT_MOC_LITERAL(4, 54, 7), // "dom_xml"
QT_MOC_LITERAL(5, 62, 16), // "global_mouse_pos"
QT_MOC_LITERAL(6, 79, 6), // "filter"
QT_MOC_LITERAL(7, 86, 8), // "slotSave"
QT_MOC_LITERAL(8, 95, 25), // "slotScratchPadItemDeleted"
QT_MOC_LITERAL(9, 121, 29), // "slotLastScratchPadItemDeleted"
QT_MOC_LITERAL(10, 151, 16), // "handleMousePress"
QT_MOC_LITERAL(11, 168, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 185, 4), // "item"
QT_MOC_LITERAL(13, 190, 16), // "deleteScratchpad"
QT_MOC_LITERAL(14, 207, 12), // "slotListMode"
QT_MOC_LITERAL(15, 220, 12) // "slotIconMode"

    },
    "qdesigner_internal::WidgetBoxTreeWidget\0"
    "pressed\0\0name\0dom_xml\0global_mouse_pos\0"
    "filter\0slotSave\0slotScratchPadItemDeleted\0"
    "slotLastScratchPadItemDeleted\0"
    "handleMousePress\0QTreeWidgetItem*\0"
    "item\0deleteScratchpad\0slotListMode\0"
    "slotIconMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__WidgetBoxTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   66,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,
      14,    0,   76,    2, 0x08 /* Private */,
      15,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QPoint,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::WidgetBoxTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetBoxTreeWidget *_t = static_cast<WidgetBoxTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 1: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotSave(); break;
        case 3: _t->slotScratchPadItemDeleted(); break;
        case 4: _t->slotLastScratchPadItemDeleted(); break;
        case 5: _t->handleMousePress((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->deleteScratchpad(); break;
        case 7: _t->slotListMode(); break;
        case 8: _t->slotIconMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WidgetBoxTreeWidget::*_t)(const QString , const QString , const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetBoxTreeWidget::pressed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::WidgetBoxTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget.data,
      qt_meta_data_qdesigner_internal__WidgetBoxTreeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::WidgetBoxTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::WidgetBoxTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__WidgetBoxTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int qdesigner_internal::WidgetBoxTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::WidgetBoxTreeWidget::pressed(const QString _t1, const QString _t2, const QPoint & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
