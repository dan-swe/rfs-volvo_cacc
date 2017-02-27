/****************************************************************************
** Meta object code from reading C++ file 'udpvehicle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../udpvehicle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpvehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UDPVehicle_t {
    QByteArrayData data[77];
    char stringdata0[1056];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPVehicle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPVehicle_t qt_meta_stringdata_UDPVehicle = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UDPVehicle"
QT_MOC_LITERAL(1, 11, 12), // "speedChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "arg"
QT_MOC_LITERAL(4, 29, 10), // "rpmChanged"
QT_MOC_LITERAL(5, 40, 12), // "blinkChanged"
QT_MOC_LITERAL(6, 53, 14), // "accIconChanged"
QT_MOC_LITERAL(7, 68, 16), // "accTargetChanged"
QT_MOC_LITERAL(8, 85, 15), // "gearModeChanged"
QT_MOC_LITERAL(9, 101, 11), // "gearChanged"
QT_MOC_LITERAL(10, 113, 18), // "gearArrowUpChanged"
QT_MOC_LITERAL(11, 132, 20), // "gearArrowDownChanged"
QT_MOC_LITERAL(12, 153, 15), // "retarderChanged"
QT_MOC_LITERAL(13, 169, 19), // "retarderIconChanged"
QT_MOC_LITERAL(14, 189, 18), // "adBlueLevelChanged"
QT_MOC_LITERAL(15, 208, 24), // "engineTemperatureChanged"
QT_MOC_LITERAL(16, 233, 25), // "outSideTemperatureChanged"
QT_MOC_LITERAL(17, 259, 17), // "freezeIconChanged"
QT_MOC_LITERAL(18, 277, 20), // "tripDistance2Changed"
QT_MOC_LITERAL(19, 298, 24), // "totalTripDistanceChanged"
QT_MOC_LITERAL(20, 323, 14), // "lksIconChanged"
QT_MOC_LITERAL(21, 338, 16), // "fuelLevelChanged"
QT_MOC_LITERAL(22, 355, 18), // "targetSpeedChanged"
QT_MOC_LITERAL(23, 374, 29), // "targetSpeedParanthesisChanged"
QT_MOC_LITERAL(24, 404, 20), // "readPendingDatagrams"
QT_MOC_LITERAL(25, 425, 11), // "sendCommand"
QT_MOC_LITERAL(26, 437, 8), // "datagram"
QT_MOC_LITERAL(27, 446, 10), // "hostAdress"
QT_MOC_LITERAL(28, 457, 4), // "port"
QT_MOC_LITERAL(29, 462, 12), // "fetchUDPdata"
QT_MOC_LITERAL(30, 475, 5), // "datan"
QT_MOC_LITERAL(31, 481, 5), // "typer"
QT_MOC_LITERAL(32, 487, 2), // "ip"
QT_MOC_LITERAL(33, 490, 15), // "triggLinuxSound"
QT_MOC_LITERAL(34, 506, 4), // "path"
QT_MOC_LITERAL(35, 511, 8), // "setSpeed"
QT_MOC_LITERAL(36, 520, 6), // "setRpm"
QT_MOC_LITERAL(37, 527, 8), // "setBlink"
QT_MOC_LITERAL(38, 536, 10), // "setAccIcon"
QT_MOC_LITERAL(39, 547, 12), // "setAccTarget"
QT_MOC_LITERAL(40, 560, 11), // "setGearMode"
QT_MOC_LITERAL(41, 572, 7), // "setGear"
QT_MOC_LITERAL(42, 580, 14), // "setGearArrowUp"
QT_MOC_LITERAL(43, 595, 16), // "setGearArrowDown"
QT_MOC_LITERAL(44, 612, 11), // "setRetarder"
QT_MOC_LITERAL(45, 624, 15), // "setRetarderIcon"
QT_MOC_LITERAL(46, 640, 14), // "setAdBlueLevel"
QT_MOC_LITERAL(47, 655, 20), // "setEngineTemperature"
QT_MOC_LITERAL(48, 676, 21), // "setOutSideTemperature"
QT_MOC_LITERAL(49, 698, 13), // "setFreezeIcon"
QT_MOC_LITERAL(50, 712, 16), // "setTripDistance2"
QT_MOC_LITERAL(51, 729, 20), // "setTotalTripDistance"
QT_MOC_LITERAL(52, 750, 10), // "setLksIcon"
QT_MOC_LITERAL(53, 761, 12), // "setFuelLevel"
QT_MOC_LITERAL(54, 774, 14), // "setTargetSpeed"
QT_MOC_LITERAL(55, 789, 25), // "setTargetSpeedParanthesis"
QT_MOC_LITERAL(56, 815, 5), // "speed"
QT_MOC_LITERAL(57, 821, 3), // "rpm"
QT_MOC_LITERAL(58, 825, 5), // "blink"
QT_MOC_LITERAL(59, 831, 7), // "accIcon"
QT_MOC_LITERAL(60, 839, 9), // "accTarget"
QT_MOC_LITERAL(61, 849, 11), // "targetSpeed"
QT_MOC_LITERAL(62, 861, 22), // "targetSpeedParanthesis"
QT_MOC_LITERAL(63, 884, 8), // "gearMode"
QT_MOC_LITERAL(64, 893, 4), // "gear"
QT_MOC_LITERAL(65, 898, 11), // "gearArrowUp"
QT_MOC_LITERAL(66, 910, 13), // "gearArrowDown"
QT_MOC_LITERAL(67, 924, 8), // "retarder"
QT_MOC_LITERAL(68, 933, 12), // "retarderIcon"
QT_MOC_LITERAL(69, 946, 9), // "fuelLevel"
QT_MOC_LITERAL(70, 956, 11), // "adBlueLevel"
QT_MOC_LITERAL(71, 968, 17), // "engineTemperature"
QT_MOC_LITERAL(72, 986, 18), // "outSideTemperature"
QT_MOC_LITERAL(73, 1005, 10), // "freezeIcon"
QT_MOC_LITERAL(74, 1016, 13), // "tripDistance2"
QT_MOC_LITERAL(75, 1030, 17), // "totalTripDistance"
QT_MOC_LITERAL(76, 1048, 7) // "lksIcon"

    },
    "UDPVehicle\0speedChanged\0\0arg\0rpmChanged\0"
    "blinkChanged\0accIconChanged\0"
    "accTargetChanged\0gearModeChanged\0"
    "gearChanged\0gearArrowUpChanged\0"
    "gearArrowDownChanged\0retarderChanged\0"
    "retarderIconChanged\0adBlueLevelChanged\0"
    "engineTemperatureChanged\0"
    "outSideTemperatureChanged\0freezeIconChanged\0"
    "tripDistance2Changed\0totalTripDistanceChanged\0"
    "lksIconChanged\0fuelLevelChanged\0"
    "targetSpeedChanged\0targetSpeedParanthesisChanged\0"
    "readPendingDatagrams\0sendCommand\0"
    "datagram\0hostAdress\0port\0fetchUDPdata\0"
    "datan\0typer\0ip\0triggLinuxSound\0path\0"
    "setSpeed\0setRpm\0setBlink\0setAccIcon\0"
    "setAccTarget\0setGearMode\0setGear\0"
    "setGearArrowUp\0setGearArrowDown\0"
    "setRetarder\0setRetarderIcon\0setAdBlueLevel\0"
    "setEngineTemperature\0setOutSideTemperature\0"
    "setFreezeIcon\0setTripDistance2\0"
    "setTotalTripDistance\0setLksIcon\0"
    "setFuelLevel\0setTargetSpeed\0"
    "setTargetSpeedParanthesis\0speed\0rpm\0"
    "blink\0accIcon\0accTarget\0targetSpeed\0"
    "targetSpeedParanthesis\0gearMode\0gear\0"
    "gearArrowUp\0gearArrowDown\0retarder\0"
    "retarderIcon\0fuelLevel\0adBlueLevel\0"
    "engineTemperature\0outSideTemperature\0"
    "freezeIcon\0tripDistance2\0totalTripDistance\0"
    "lksIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPVehicle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
      21,  390, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x06 /* Public */,
       4,    1,  247,    2, 0x06 /* Public */,
       5,    1,  250,    2, 0x06 /* Public */,
       6,    1,  253,    2, 0x06 /* Public */,
       7,    1,  256,    2, 0x06 /* Public */,
       8,    1,  259,    2, 0x06 /* Public */,
       9,    1,  262,    2, 0x06 /* Public */,
      10,    1,  265,    2, 0x06 /* Public */,
      11,    1,  268,    2, 0x06 /* Public */,
      12,    1,  271,    2, 0x06 /* Public */,
      13,    1,  274,    2, 0x06 /* Public */,
      14,    1,  277,    2, 0x06 /* Public */,
      15,    1,  280,    2, 0x06 /* Public */,
      16,    1,  283,    2, 0x06 /* Public */,
      17,    1,  286,    2, 0x06 /* Public */,
      18,    1,  289,    2, 0x06 /* Public */,
      19,    1,  292,    2, 0x06 /* Public */,
      20,    1,  295,    2, 0x06 /* Public */,
      21,    1,  298,    2, 0x06 /* Public */,
      22,    1,  301,    2, 0x06 /* Public */,
      23,    1,  304,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  307,    2, 0x0a /* Public */,
      25,    3,  308,    2, 0x0a /* Public */,
      29,    4,  315,    2, 0x0a /* Public */,
      33,    1,  324,    2, 0x0a /* Public */,
      35,    1,  327,    2, 0x0a /* Public */,
      36,    1,  330,    2, 0x0a /* Public */,
      37,    1,  333,    2, 0x0a /* Public */,
      38,    1,  336,    2, 0x0a /* Public */,
      39,    1,  339,    2, 0x0a /* Public */,
      40,    1,  342,    2, 0x0a /* Public */,
      41,    1,  345,    2, 0x0a /* Public */,
      42,    1,  348,    2, 0x0a /* Public */,
      43,    1,  351,    2, 0x0a /* Public */,
      44,    1,  354,    2, 0x0a /* Public */,
      45,    1,  357,    2, 0x0a /* Public */,
      46,    1,  360,    2, 0x0a /* Public */,
      47,    1,  363,    2, 0x0a /* Public */,
      48,    1,  366,    2, 0x0a /* Public */,
      49,    1,  369,    2, 0x0a /* Public */,
      50,    1,  372,    2, 0x0a /* Public */,
      51,    1,  375,    2, 0x0a /* Public */,
      52,    1,  378,    2, 0x0a /* Public */,
      53,    1,  381,    2, 0x0a /* Public */,
      54,    1,  384,    2, 0x0a /* Public */,
      55,    1,  387,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString, QMetaType::UShort,   26,   27,   28,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariantList, QMetaType::QVariantList, QMetaType::UShort,   30,   31,   32,   28,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,

 // properties: name, type, flags
      56, QMetaType::QReal, 0x00495103,
      57, QMetaType::UInt, 0x00495103,
      58, QMetaType::UShort, 0x00495103,
      59, QMetaType::UShort, 0x00495103,
      60, QMetaType::UShort, 0x00495103,
      61, QMetaType::UShort, 0x00495103,
      62, QMetaType::UShort, 0x00495103,
      63, QMetaType::UShort, 0x00495103,
      64, QMetaType::UShort, 0x00495103,
      65, QMetaType::UShort, 0x00495103,
      66, QMetaType::UShort, 0x00495103,
      67, QMetaType::UShort, 0x00495103,
      68, QMetaType::UShort, 0x00495103,
      69, QMetaType::UShort, 0x00495103,
      70, QMetaType::UShort, 0x00495103,
      71, QMetaType::UShort, 0x00495103,
      72, QMetaType::UShort, 0x00495103,
      73, QMetaType::UShort, 0x00495103,
      74, QMetaType::UInt, 0x00495103,
      75, QMetaType::UInt, 0x00495103,
      76, QMetaType::UShort, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
      19,
      20,
       5,
       6,
       7,
       8,
       9,
      10,
      18,
      11,
      12,
      13,
      14,
      15,
      16,
      17,

       0        // eod
};

void UDPVehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPVehicle *_t = static_cast<UDPVehicle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->speedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->rpmChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->blinkChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 3: _t->accIconChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->accTargetChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 5: _t->gearModeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->gearChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->gearArrowUpChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->gearArrowDownChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 9: _t->retarderChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->retarderIconChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 11: _t->adBlueLevelChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->engineTemperatureChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 13: _t->outSideTemperatureChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 14: _t->freezeIconChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 15: _t->tripDistance2Changed((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->totalTripDistanceChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 17: _t->lksIconChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 18: _t->fuelLevelChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 19: _t->targetSpeedChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 20: _t->targetSpeedParanthesisChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 21: _t->readPendingDatagrams(); break;
        case 22: _t->sendCommand((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 23: _t->fetchUDPdata((*reinterpret_cast< QVariantList(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])),(*reinterpret_cast< quint16(*)>(_a[4]))); break;
        case 24: _t->triggLinuxSound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->setSpeed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 26: _t->setRpm((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 27: _t->setBlink((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 28: _t->setAccIcon((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 29: _t->setAccTarget((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 30: _t->setGearMode((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 31: _t->setGear((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 32: _t->setGearArrowUp((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 33: _t->setGearArrowDown((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 34: _t->setRetarder((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 35: _t->setRetarderIcon((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 36: _t->setAdBlueLevel((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 37: _t->setEngineTemperature((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 38: _t->setOutSideTemperature((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 39: _t->setFreezeIcon((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 40: _t->setTripDistance2((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 41: _t->setTotalTripDistance((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 42: _t->setLksIcon((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 43: _t->setFuelLevel((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 44: _t->setTargetSpeed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 45: _t->setTargetSpeedParanthesis((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UDPVehicle::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::speedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::rpmChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::blinkChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::accIconChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::accTargetChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::gearModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::gearChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::gearArrowUpChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::gearArrowDownChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::retarderChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::retarderIconChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::adBlueLevelChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::engineTemperatureChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::outSideTemperatureChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::freezeIconChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::tripDistance2Changed)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::totalTripDistanceChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::lksIconChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::fuelLevelChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::targetSpeedChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (UDPVehicle::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UDPVehicle::targetSpeedParanthesisChanged)) {
                *result = 20;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UDPVehicle *_t = static_cast<UDPVehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->rpm(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->blink(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->accIcon(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->accTarget(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->targetSpeed(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->targetSpeedParanthesis(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->gearMode(); break;
        case 8: *reinterpret_cast< quint16*>(_v) = _t->gear(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->gearArrowUp(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->gearArrowDown(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->retarder(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->retarderIcon(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->fuelLevel(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->adBlueLevel(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->engineTemperature(); break;
        case 16: *reinterpret_cast< quint16*>(_v) = _t->outSideTemperature(); break;
        case 17: *reinterpret_cast< quint16*>(_v) = _t->freezeIcon(); break;
        case 18: *reinterpret_cast< quint32*>(_v) = _t->tripDistance2(); break;
        case 19: *reinterpret_cast< quint32*>(_v) = _t->totalTripDistance(); break;
        case 20: *reinterpret_cast< quint16*>(_v) = _t->lksIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UDPVehicle *_t = static_cast<UDPVehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setRpm(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setBlink(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setAccIcon(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setAccTarget(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setTargetSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setTargetSpeedParanthesis(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setGearMode(*reinterpret_cast< quint16*>(_v)); break;
        case 8: _t->setGear(*reinterpret_cast< quint16*>(_v)); break;
        case 9: _t->setGearArrowUp(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setGearArrowDown(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setRetarder(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setRetarderIcon(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setFuelLevel(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setAdBlueLevel(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setEngineTemperature(*reinterpret_cast< quint16*>(_v)); break;
        case 16: _t->setOutSideTemperature(*reinterpret_cast< quint16*>(_v)); break;
        case 17: _t->setFreezeIcon(*reinterpret_cast< quint16*>(_v)); break;
        case 18: _t->setTripDistance2(*reinterpret_cast< quint32*>(_v)); break;
        case 19: _t->setTotalTripDistance(*reinterpret_cast< quint32*>(_v)); break;
        case 20: _t->setLksIcon(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject UDPVehicle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UDPVehicle.data,
      qt_meta_data_UDPVehicle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UDPVehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPVehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UDPVehicle.stringdata0))
        return static_cast<void*>(const_cast< UDPVehicle*>(this));
    return QObject::qt_metacast(_clname);
}

int UDPVehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UDPVehicle::speedChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UDPVehicle::rpmChanged(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UDPVehicle::blinkChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UDPVehicle::accIconChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UDPVehicle::accTargetChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UDPVehicle::gearModeChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UDPVehicle::gearChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UDPVehicle::gearArrowUpChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UDPVehicle::gearArrowDownChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UDPVehicle::retarderChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UDPVehicle::retarderIconChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UDPVehicle::adBlueLevelChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UDPVehicle::engineTemperatureChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UDPVehicle::outSideTemperatureChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UDPVehicle::freezeIconChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UDPVehicle::tripDistance2Changed(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UDPVehicle::totalTripDistanceChanged(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UDPVehicle::lksIconChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void UDPVehicle::fuelLevelChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void UDPVehicle::targetSpeedChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void UDPVehicle::targetSpeedParanthesisChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_END_MOC_NAMESPACE
