/****************************************************************************
** Meta object code from reading C++ file 'udpsender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "udpsender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpsender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UDPSender_t {
    QByteArrayData data[10];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPSender_t qt_meta_stringdata_UDPSender = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UDPSender"
QT_MOC_LITERAL(1, 10, 11), // "sendCommand"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "datagram"
QT_MOC_LITERAL(4, 32, 10), // "hostAdress"
QT_MOC_LITERAL(5, 43, 4), // "port"
QT_MOC_LITERAL(6, 48, 12), // "fetchUDPdata"
QT_MOC_LITERAL(7, 61, 5), // "datan"
QT_MOC_LITERAL(8, 67, 5), // "typer"
QT_MOC_LITERAL(9, 73, 2) // "ip"

    },
    "UDPSender\0sendCommand\0\0datagram\0"
    "hostAdress\0port\0fetchUDPdata\0datan\0"
    "typer\0ip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPSender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x0a /* Public */,
       6,    4,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariantList, QMetaType::QVariantList, QMetaType::UShort,    7,    8,    9,    5,

       0        // eod
};

void UDPSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPSender *_t = static_cast<UDPSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCommand((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 1: _t->fetchUDPdata((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])),(*reinterpret_cast< quint16(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject UDPSender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UDPSender.data,
      qt_meta_data_UDPSender,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UDPSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPSender::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UDPSender.stringdata0))
        return static_cast<void*>(const_cast< UDPSender*>(this));
    return QObject::qt_metacast(_clname);
}

int UDPSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
