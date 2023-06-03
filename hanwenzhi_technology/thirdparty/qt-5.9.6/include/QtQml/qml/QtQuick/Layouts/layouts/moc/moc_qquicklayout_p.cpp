/****************************************************************************
** Meta object code from reading C++ file 'qquicklayout_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquicklayout_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicklayout_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickLayout_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickLayout_t qt_meta_stringdata_QQuickLayout = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQuickLayout"
QT_MOC_LITERAL(1, 13, 20), // "invalidateSenderItem"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "QQuickLayout\0invalidateSenderItem\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickLayout[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QQuickLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickLayout *_t = static_cast<QQuickLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidateSenderItem(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QQuickLayout::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickLayout.data,
      qt_meta_data_QQuickLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickLayout.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQuickItemChangeListener"))
        return static_cast< QQuickItemChangeListener*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QQuickLayoutAttached_t {
    QByteArrayData data[39];
    char stringdata0[562];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickLayoutAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickLayoutAttached_t qt_meta_stringdata_QQuickLayoutAttached = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickLayoutAttached"
QT_MOC_LITERAL(1, 21, 19), // "minimumWidthChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 20), // "minimumHeightChanged"
QT_MOC_LITERAL(4, 63, 21), // "preferredWidthChanged"
QT_MOC_LITERAL(5, 85, 22), // "preferredHeightChanged"
QT_MOC_LITERAL(6, 108, 19), // "maximumWidthChanged"
QT_MOC_LITERAL(7, 128, 20), // "maximumHeightChanged"
QT_MOC_LITERAL(8, 149, 16), // "fillWidthChanged"
QT_MOC_LITERAL(9, 166, 17), // "fillHeightChanged"
QT_MOC_LITERAL(10, 184, 17), // "leftMarginChanged"
QT_MOC_LITERAL(11, 202, 16), // "topMarginChanged"
QT_MOC_LITERAL(12, 219, 18), // "rightMarginChanged"
QT_MOC_LITERAL(13, 238, 19), // "bottomMarginChanged"
QT_MOC_LITERAL(14, 258, 14), // "marginsChanged"
QT_MOC_LITERAL(15, 273, 10), // "rowChanged"
QT_MOC_LITERAL(16, 284, 13), // "columnChanged"
QT_MOC_LITERAL(17, 298, 14), // "rowSpanChanged"
QT_MOC_LITERAL(18, 313, 17), // "columnSpanChanged"
QT_MOC_LITERAL(19, 331, 16), // "alignmentChanged"
QT_MOC_LITERAL(20, 348, 12), // "minimumWidth"
QT_MOC_LITERAL(21, 361, 13), // "minimumHeight"
QT_MOC_LITERAL(22, 375, 14), // "preferredWidth"
QT_MOC_LITERAL(23, 390, 15), // "preferredHeight"
QT_MOC_LITERAL(24, 406, 12), // "maximumWidth"
QT_MOC_LITERAL(25, 419, 13), // "maximumHeight"
QT_MOC_LITERAL(26, 433, 10), // "fillHeight"
QT_MOC_LITERAL(27, 444, 9), // "fillWidth"
QT_MOC_LITERAL(28, 454, 3), // "row"
QT_MOC_LITERAL(29, 458, 6), // "column"
QT_MOC_LITERAL(30, 465, 7), // "rowSpan"
QT_MOC_LITERAL(31, 473, 10), // "columnSpan"
QT_MOC_LITERAL(32, 484, 9), // "alignment"
QT_MOC_LITERAL(33, 494, 13), // "Qt::Alignment"
QT_MOC_LITERAL(34, 508, 7), // "margins"
QT_MOC_LITERAL(35, 516, 10), // "leftMargin"
QT_MOC_LITERAL(36, 527, 9), // "topMargin"
QT_MOC_LITERAL(37, 537, 11), // "rightMargin"
QT_MOC_LITERAL(38, 549, 12) // "bottomMargin"

    },
    "QQuickLayoutAttached\0minimumWidthChanged\0"
    "\0minimumHeightChanged\0preferredWidthChanged\0"
    "preferredHeightChanged\0maximumWidthChanged\0"
    "maximumHeightChanged\0fillWidthChanged\0"
    "fillHeightChanged\0leftMarginChanged\0"
    "topMarginChanged\0rightMarginChanged\0"
    "bottomMarginChanged\0marginsChanged\0"
    "rowChanged\0columnChanged\0rowSpanChanged\0"
    "columnSpanChanged\0alignmentChanged\0"
    "minimumWidth\0minimumHeight\0preferredWidth\0"
    "preferredHeight\0maximumWidth\0maximumHeight\0"
    "fillHeight\0fillWidth\0row\0column\0rowSpan\0"
    "columnSpan\0alignment\0Qt::Alignment\0"
    "margins\0leftMargin\0topMargin\0rightMargin\0"
    "bottomMargin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickLayoutAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      18,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    0,  110,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,
      10,    0,  112,    2, 0x06 /* Public */,
      11,    0,  113,    2, 0x06 /* Public */,
      12,    0,  114,    2, 0x06 /* Public */,
      13,    0,  115,    2, 0x06 /* Public */,
      14,    0,  116,    2, 0x06 /* Public */,
      15,    0,  117,    2, 0x06 /* Public */,
      16,    0,  118,    2, 0x06 /* Public */,
      17,    0,  119,    2, 0x06 /* Public */,
      18,    0,  120,    2, 0x06 /* Public */,
      19,    0,  121,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::QReal, 0x00495103,
      21, QMetaType::QReal, 0x00495103,
      22, QMetaType::QReal, 0x00495103,
      23, QMetaType::QReal, 0x00495103,
      24, QMetaType::QReal, 0x00495103,
      25, QMetaType::QReal, 0x00495103,
      26, QMetaType::Bool, 0x00495103,
      27, QMetaType::Bool, 0x00495103,
      28, QMetaType::Int, 0x00495103,
      29, QMetaType::Int, 0x00495103,
      30, QMetaType::Int, 0x00495103,
      31, QMetaType::Int, 0x00495103,
      32, 0x80000000 | 33, 0x0049510b,
      34, QMetaType::QReal, 0x00495103,
      35, QMetaType::QReal, 0x00495107,
      36, QMetaType::QReal, 0x00495107,
      37, QMetaType::QReal, 0x00495107,
      38, QMetaType::QReal, 0x00495107,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       7,
       6,
      13,
      14,
      15,
      16,
      17,
      12,
       8,
       9,
      10,
      11,

       0        // eod
};

void QQuickLayoutAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickLayoutAttached *_t = static_cast<QQuickLayoutAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minimumWidthChanged(); break;
        case 1: _t->minimumHeightChanged(); break;
        case 2: _t->preferredWidthChanged(); break;
        case 3: _t->preferredHeightChanged(); break;
        case 4: _t->maximumWidthChanged(); break;
        case 5: _t->maximumHeightChanged(); break;
        case 6: _t->fillWidthChanged(); break;
        case 7: _t->fillHeightChanged(); break;
        case 8: _t->leftMarginChanged(); break;
        case 9: _t->topMarginChanged(); break;
        case 10: _t->rightMarginChanged(); break;
        case 11: _t->bottomMarginChanged(); break;
        case 12: _t->marginsChanged(); break;
        case 13: _t->rowChanged(); break;
        case 14: _t->columnChanged(); break;
        case 15: _t->rowSpanChanged(); break;
        case 16: _t->columnSpanChanged(); break;
        case 17: _t->alignmentChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::minimumWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::minimumHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::preferredWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::preferredHeightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::maximumWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::maximumHeightChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::fillWidthChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::fillHeightChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::leftMarginChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::topMarginChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::rightMarginChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::bottomMarginChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::marginsChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::rowChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::columnChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::rowSpanChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::columnSpanChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QQuickLayoutAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLayoutAttached::alignmentChanged)) {
                *result = 17;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickLayoutAttached *_t = static_cast<QQuickLayoutAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->minimumWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->minimumHeight(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->preferredWidth(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->preferredHeight(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->maximumWidth(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->maximumHeight(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->fillHeight(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->fillWidth(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->column(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->rowSpan(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->columnSpan(); break;
        case 12: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->margins(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->leftMargin(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->topMargin(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->rightMargin(); break;
        case 17: *reinterpret_cast< qreal*>(_v) = _t->bottomMargin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickLayoutAttached *_t = static_cast<QQuickLayoutAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimumWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setMinimumHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setPreferredWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPreferredHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setMaximumWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setMaximumHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setFillHeight(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFillWidth(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setRow(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setColumn(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setRowSpan(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setColumnSpan(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 13: _t->setMargins(*reinterpret_cast< qreal*>(_v)); break;
        case 14: _t->setLeftMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 15: _t->setTopMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 16: _t->setRightMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 17: _t->setBottomMargin(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickLayoutAttached *_t = static_cast<QQuickLayoutAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 14: _t->resetLeftMargin(); break;
        case 15: _t->resetTopMargin(); break;
        case 16: _t->resetRightMargin(); break;
        case 17: _t->resetBottomMargin(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickLayoutAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickLayoutAttached.data,
      qt_meta_data_QQuickLayoutAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickLayoutAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickLayoutAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickLayoutAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickLayoutAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickLayoutAttached::minimumWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickLayoutAttached::minimumHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickLayoutAttached::preferredWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickLayoutAttached::preferredHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickLayoutAttached::maximumWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickLayoutAttached::maximumHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickLayoutAttached::fillWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickLayoutAttached::fillHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickLayoutAttached::leftMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickLayoutAttached::topMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QQuickLayoutAttached::rightMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QQuickLayoutAttached::bottomMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QQuickLayoutAttached::marginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QQuickLayoutAttached::rowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QQuickLayoutAttached::columnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QQuickLayoutAttached::rowSpanChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QQuickLayoutAttached::columnSpanChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QQuickLayoutAttached::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
