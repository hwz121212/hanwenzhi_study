/****************************************************************************
** Meta object code from reading C++ file 'qquickcalendar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickcalendar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcalendar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickCalendar_t {
    QByteArrayData data[14];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCalendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCalendar_t qt_meta_stringdata_QQuickCalendar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickCalendar"
QT_MOC_LITERAL(1, 15, 5), // "Month"
QT_MOC_LITERAL(2, 21, 7), // "January"
QT_MOC_LITERAL(3, 29, 8), // "February"
QT_MOC_LITERAL(4, 38, 5), // "March"
QT_MOC_LITERAL(5, 44, 5), // "April"
QT_MOC_LITERAL(6, 50, 3), // "May"
QT_MOC_LITERAL(7, 54, 4), // "June"
QT_MOC_LITERAL(8, 59, 4), // "July"
QT_MOC_LITERAL(9, 64, 6), // "August"
QT_MOC_LITERAL(10, 71, 9), // "September"
QT_MOC_LITERAL(11, 81, 7), // "October"
QT_MOC_LITERAL(12, 89, 8), // "November"
QT_MOC_LITERAL(13, 98, 8) // "December"

    },
    "QQuickCalendar\0Month\0January\0February\0"
    "March\0April\0May\0June\0July\0August\0"
    "September\0October\0November\0December"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCalendar[] = {

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
       1, 0x0,   12,   18,

 // enum data: key, value
       2, uint(QQuickCalendar::January),
       3, uint(QQuickCalendar::February),
       4, uint(QQuickCalendar::March),
       5, uint(QQuickCalendar::April),
       6, uint(QQuickCalendar::May),
       7, uint(QQuickCalendar::June),
       8, uint(QQuickCalendar::July),
       9, uint(QQuickCalendar::August),
      10, uint(QQuickCalendar::September),
      11, uint(QQuickCalendar::October),
      12, uint(QQuickCalendar::November),
      13, uint(QQuickCalendar::December),

       0        // eod
};

void QQuickCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickCalendar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickCalendar.data,
      qt_meta_data_QQuickCalendar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCalendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCalendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCalendar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickCalendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
