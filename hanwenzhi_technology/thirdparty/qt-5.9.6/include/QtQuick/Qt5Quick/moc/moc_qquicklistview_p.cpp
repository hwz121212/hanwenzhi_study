/****************************************************************************
** Meta object code from reading C++ file 'qquicklistview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquicklistview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicklistview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickViewSection_t {
    QByteArrayData data[19];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickViewSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickViewSection_t qt_meta_stringdata_QQuickViewSection = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickViewSection"
QT_MOC_LITERAL(1, 18, 15), // "sectionsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "propertyChanged"
QT_MOC_LITERAL(4, 51, 15), // "criteriaChanged"
QT_MOC_LITERAL(5, 67, 15), // "delegateChanged"
QT_MOC_LITERAL(6, 83, 23), // "labelPositioningChanged"
QT_MOC_LITERAL(7, 107, 8), // "property"
QT_MOC_LITERAL(8, 116, 8), // "criteria"
QT_MOC_LITERAL(9, 125, 15), // "SectionCriteria"
QT_MOC_LITERAL(10, 141, 8), // "delegate"
QT_MOC_LITERAL(11, 150, 14), // "QQmlComponent*"
QT_MOC_LITERAL(12, 165, 16), // "labelPositioning"
QT_MOC_LITERAL(13, 182, 10), // "FullString"
QT_MOC_LITERAL(14, 193, 14), // "FirstCharacter"
QT_MOC_LITERAL(15, 208, 16), // "LabelPositioning"
QT_MOC_LITERAL(16, 225, 12), // "InlineLabels"
QT_MOC_LITERAL(17, 238, 19), // "CurrentLabelAtStart"
QT_MOC_LITERAL(18, 258, 14) // "NextLabelAtEnd"

    },
    "QQuickViewSection\0sectionsChanged\0\0"
    "propertyChanged\0criteriaChanged\0"
    "delegateChanged\0labelPositioningChanged\0"
    "property\0criteria\0SectionCriteria\0"
    "delegate\0QQmlComponent*\0labelPositioning\0"
    "FullString\0FirstCharacter\0LabelPositioning\0"
    "InlineLabels\0CurrentLabelAtStart\0"
    "NextLabelAtEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickViewSection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       2,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
       9, 0x0,    2,   68,
      15, 0x0,    3,   72,

 // enum data: key, value
      13, uint(QQuickViewSection::FullString),
      14, uint(QQuickViewSection::FirstCharacter),
      16, uint(QQuickViewSection::InlineLabels),
      17, uint(QQuickViewSection::CurrentLabelAtStart),
      18, uint(QQuickViewSection::NextLabelAtEnd),

       0        // eod
};

void QQuickViewSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickViewSection *_t = static_cast<QQuickViewSection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sectionsChanged(); break;
        case 1: _t->propertyChanged(); break;
        case 2: _t->criteriaChanged(); break;
        case 3: _t->delegateChanged(); break;
        case 4: _t->labelPositioningChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickViewSection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickViewSection::sectionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickViewSection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickViewSection::propertyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickViewSection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickViewSection::criteriaChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickViewSection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickViewSection::delegateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickViewSection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickViewSection::labelPositioningChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickViewSection *_t = static_cast<QQuickViewSection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->property(); break;
        case 1: *reinterpret_cast< SectionCriteria*>(_v) = _t->criteria(); break;
        case 2: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->labelPositioning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickViewSection *_t = static_cast<QQuickViewSection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProperty(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCriteria(*reinterpret_cast< SectionCriteria*>(_v)); break;
        case 2: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 3: _t->setLabelPositioning(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickViewSection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickViewSection.data,
      qt_meta_data_QQuickViewSection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickViewSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickViewSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickViewSection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickViewSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickViewSection::sectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickViewSection::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickViewSection::criteriaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickViewSection::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickViewSection::labelPositioningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QQuickListView_t {
    QByteArrayData data[41];
    char stringdata0[662];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickListView_t qt_meta_stringdata_QQuickListView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickListView"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 4), // "data"
QT_MOC_LITERAL(3, 36, 14), // "spacingChanged"
QT_MOC_LITERAL(4, 51, 0), // ""
QT_MOC_LITERAL(5, 52, 18), // "orientationChanged"
QT_MOC_LITERAL(6, 71, 21), // "currentSectionChanged"
QT_MOC_LITERAL(7, 93, 28), // "highlightMoveVelocityChanged"
QT_MOC_LITERAL(8, 122, 30), // "highlightResizeVelocityChanged"
QT_MOC_LITERAL(9, 153, 30), // "highlightResizeDurationChanged"
QT_MOC_LITERAL(10, 184, 15), // "snapModeChanged"
QT_MOC_LITERAL(11, 200, 24), // "headerPositioningChanged"
QT_MOC_LITERAL(12, 225, 24), // "footerPositioningChanged"
QT_MOC_LITERAL(13, 250, 21), // "incrementCurrentIndex"
QT_MOC_LITERAL(14, 272, 21), // "decrementCurrentIndex"
QT_MOC_LITERAL(15, 294, 21), // "highlightMoveVelocity"
QT_MOC_LITERAL(16, 316, 23), // "highlightResizeVelocity"
QT_MOC_LITERAL(17, 340, 23), // "highlightResizeDuration"
QT_MOC_LITERAL(18, 364, 7), // "spacing"
QT_MOC_LITERAL(19, 372, 11), // "orientation"
QT_MOC_LITERAL(20, 384, 11), // "Orientation"
QT_MOC_LITERAL(21, 396, 7), // "section"
QT_MOC_LITERAL(22, 404, 18), // "QQuickViewSection*"
QT_MOC_LITERAL(23, 423, 14), // "currentSection"
QT_MOC_LITERAL(24, 438, 8), // "snapMode"
QT_MOC_LITERAL(25, 447, 8), // "SnapMode"
QT_MOC_LITERAL(26, 456, 17), // "headerPositioning"
QT_MOC_LITERAL(27, 474, 17), // "HeaderPositioning"
QT_MOC_LITERAL(28, 492, 17), // "footerPositioning"
QT_MOC_LITERAL(29, 510, 17), // "FooterPositioning"
QT_MOC_LITERAL(30, 528, 10), // "Horizontal"
QT_MOC_LITERAL(31, 539, 8), // "Vertical"
QT_MOC_LITERAL(32, 548, 6), // "NoSnap"
QT_MOC_LITERAL(33, 555, 10), // "SnapToItem"
QT_MOC_LITERAL(34, 566, 11), // "SnapOneItem"
QT_MOC_LITERAL(35, 578, 12), // "InlineHeader"
QT_MOC_LITERAL(36, 591, 13), // "OverlayHeader"
QT_MOC_LITERAL(37, 605, 14), // "PullBackHeader"
QT_MOC_LITERAL(38, 620, 12), // "InlineFooter"
QT_MOC_LITERAL(39, 633, 13), // "OverlayFooter"
QT_MOC_LITERAL(40, 647, 14) // "PullBackFooter"

    },
    "QQuickListView\0DefaultProperty\0data\0"
    "spacingChanged\0\0orientationChanged\0"
    "currentSectionChanged\0"
    "highlightMoveVelocityChanged\0"
    "highlightResizeVelocityChanged\0"
    "highlightResizeDurationChanged\0"
    "snapModeChanged\0headerPositioningChanged\0"
    "footerPositioningChanged\0incrementCurrentIndex\0"
    "decrementCurrentIndex\0highlightMoveVelocity\0"
    "highlightResizeVelocity\0highlightResizeDuration\0"
    "spacing\0orientation\0Orientation\0section\0"
    "QQuickViewSection*\0currentSection\0"
    "snapMode\0SnapMode\0headerPositioning\0"
    "HeaderPositioning\0footerPositioning\0"
    "FooterPositioning\0Horizontal\0Vertical\0"
    "NoSnap\0SnapToItem\0SnapOneItem\0"
    "InlineHeader\0OverlayHeader\0PullBackHeader\0"
    "InlineFooter\0OverlayFooter\0PullBackFooter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickListView[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      11,   16, // methods
      10,   93, // properties
       4,  143, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   82,    4, 0x06 /* Public */,
       5,    0,   83,    4, 0x06 /* Public */,
       6,    0,   84,    4, 0x06 /* Public */,
       7,    0,   85,    4, 0x06 /* Public */,
       8,    0,   86,    4, 0x06 /* Public */,
       9,    0,   87,    4, 0x06 /* Public */,
      10,    0,   88,    4, 0x06 /* Public */,
      11,    0,   89,    4, 0x86 /* Public | MethodRevisioned */,
      12,    0,   90,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   91,    4, 0x0a /* Public */,
      14,    0,   92,    4, 0x0a /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       2,
       2,

 // slots: revision
       0,
       0,

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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::QReal, 0x00495103,
      19, 0x80000000 | 20, 0x0049510b,
      21, 0x80000000 | 22, 0x00095409,
      23, QMetaType::QString, 0x00495001,
      24, 0x80000000 | 25, 0x0049510b,
      26, 0x80000000 | 27, 0x00c9510b,
      28, 0x80000000 | 29, 0x00c9510b,

 // properties: notify_signal_id
       3,
       4,
       5,
       0,
       1,
       0,
       2,
       6,
       7,
       8,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       2,
       2,

 // enums: name, flags, count, data
      20, 0x0,    2,  159,
      25, 0x0,    3,  163,
      27, 0x0,    3,  169,
      29, 0x0,    3,  175,

 // enum data: key, value
      30, uint(QQuickListView::Horizontal),
      31, uint(QQuickListView::Vertical),
      32, uint(QQuickListView::NoSnap),
      33, uint(QQuickListView::SnapToItem),
      34, uint(QQuickListView::SnapOneItem),
      35, uint(QQuickListView::InlineHeader),
      36, uint(QQuickListView::OverlayHeader),
      37, uint(QQuickListView::PullBackHeader),
      38, uint(QQuickListView::InlineFooter),
      39, uint(QQuickListView::OverlayFooter),
      40, uint(QQuickListView::PullBackFooter),

       0        // eod
};

void QQuickListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickListView *_t = static_cast<QQuickListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spacingChanged(); break;
        case 1: _t->orientationChanged(); break;
        case 2: _t->currentSectionChanged(); break;
        case 3: _t->highlightMoveVelocityChanged(); break;
        case 4: _t->highlightResizeVelocityChanged(); break;
        case 5: _t->highlightResizeDurationChanged(); break;
        case 6: _t->snapModeChanged(); break;
        case 7: _t->headerPositioningChanged(); break;
        case 8: _t->footerPositioningChanged(); break;
        case 9: _t->incrementCurrentIndex(); break;
        case 10: _t->decrementCurrentIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::spacingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::orientationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::currentSectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::highlightMoveVelocityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::highlightResizeVelocityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::highlightResizeDurationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::snapModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::headerPositioningChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickListView::footerPositioningChanged)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickViewSection* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickListView *_t = static_cast<QQuickListView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->highlightMoveVelocity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->highlightResizeVelocity(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->highlightResizeDuration(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->spacing(); break;
        case 4: *reinterpret_cast< Orientation*>(_v) = _t->orientation(); break;
        case 5: *reinterpret_cast< QQuickViewSection**>(_v) = _t->sectionCriteria(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->currentSection(); break;
        case 7: *reinterpret_cast< SnapMode*>(_v) = _t->snapMode(); break;
        case 8: *reinterpret_cast< HeaderPositioning*>(_v) = _t->headerPositioning(); break;
        case 9: *reinterpret_cast< FooterPositioning*>(_v) = _t->footerPositioning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickListView *_t = static_cast<QQuickListView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHighlightMoveVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setHighlightResizeVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setHighlightResizeDuration(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setOrientation(*reinterpret_cast< Orientation*>(_v)); break;
        case 7: _t->setSnapMode(*reinterpret_cast< SnapMode*>(_v)); break;
        case 8: _t->setHeaderPositioning(*reinterpret_cast< HeaderPositioning*>(_v)); break;
        case 9: _t->setFooterPositioning(*reinterpret_cast< FooterPositioning*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickListView::staticMetaObject = {
    { &QQuickItemView::staticMetaObject, qt_meta_stringdata_QQuickListView.data,
      qt_meta_data_QQuickListView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickListView.stringdata0))
        return static_cast<void*>(this);
    return QQuickItemView::qt_metacast(_clname);
}

int QQuickListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickListView::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickListView::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickListView::currentSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickListView::highlightMoveVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickListView::highlightResizeVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickListView::highlightResizeDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickListView::snapModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickListView::headerPositioningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickListView::footerPositioningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
struct qt_meta_stringdata_QQuickListViewAttached_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickListViewAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickListViewAttached_t qt_meta_stringdata_QQuickListViewAttached = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QQuickListViewAttached"

    },
    "QQuickListViewAttached"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickListViewAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickListViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickListViewAttached::staticMetaObject = {
    { &QQuickItemViewAttached::staticMetaObject, qt_meta_stringdata_QQuickListViewAttached.data,
      qt_meta_data_QQuickListViewAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickListViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickListViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickListViewAttached.stringdata0))
        return static_cast<void*>(this);
    return QQuickItemViewAttached::qt_metacast(_clname);
}

int QQuickListViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItemViewAttached::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
