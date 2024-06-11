/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtGraphs/qscatter3dseries.h>
#include <QtDataVisualization/q3dscene.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogENDCLASS = QtMocHelpers::stringData(
    "Dialog",
    "on_degree0_clicked",
    "",
    "on_degree45_clicked",
    "on_degree90_clicked",
    "updateServo",
    "command",
    "on_horizontalSlider_valueChanged",
    "value",
    "on_recordButton_clicked",
    "on_pushButton_2_clicked",
    "playNextCommand",
    "on_slider2_valueChanged",
    "drawLine1",
    "angle",
    "angle2",
    "drawLine2",
    "angle3",
    "clearGraphicsView",
    "clearGraphicsView2",
    "on_speedChange_valueChanged",
    "on_slider3_valueChanged",
    "on_slider4_valueChanged",
    "anglesToPos",
    "b",
    "a1",
    "a2",
    "double&",
    "x",
    "y",
    "z",
    "posToAngles",
    "on_caculatebtn_clicked",
    "on_changebtn_clicked",
    "normalizeAngle",
    "updateSlidersAndLabels",
    "on_linepointbtn1_clicked",
    "on_linepointbtn2_clicked",
    "on_lineplay_clicked",
    "on_btn3d_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    0,  172,    2, 0x08,    3 /* Private */,
       5,    1,  173,    2, 0x08,    4 /* Private */,
       7,    1,  176,    2, 0x08,    6 /* Private */,
       9,    0,  179,    2, 0x08,    8 /* Private */,
      10,    0,  180,    2, 0x08,    9 /* Private */,
      11,    0,  181,    2, 0x08,   10 /* Private */,
      12,    1,  182,    2, 0x08,   11 /* Private */,
      13,    2,  185,    2, 0x08,   13 /* Private */,
      16,    1,  190,    2, 0x08,   16 /* Private */,
      18,    0,  193,    2, 0x08,   18 /* Private */,
      19,    0,  194,    2, 0x08,   19 /* Private */,
      20,    1,  195,    2, 0x08,   20 /* Private */,
      21,    1,  198,    2, 0x08,   22 /* Private */,
      22,    1,  201,    2, 0x08,   24 /* Private */,
      23,    6,  204,    2, 0x08,   26 /* Private */,
      31,    6,  217,    2, 0x08,   33 /* Private */,
      32,    0,  230,    2, 0x08,   40 /* Private */,
      33,    0,  231,    2, 0x08,   41 /* Private */,
      34,    1,  232,    2, 0x08,   42 /* Private */,
      35,    3,  235,    2, 0x08,   44 /* Private */,
      36,    0,  242,    2, 0x08,   48 /* Private */,
      37,    0,  243,    2, 0x08,   49 /* Private */,
      38,    0,  244,    2, 0x08,   50 /* Private */,
      39,    0,  245,    2, 0x08,   51 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   14,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 27,   24,   25,   26,   28,   29,   30,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 27, 0x80000000 | 27, 0x80000000 | 27,   28,   29,   30,   24,   25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   14,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   24,   25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dialog, std::true_type>,
        // method 'on_degree0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_degree45_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_degree90_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateServo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_horizontalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_recordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playNextCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_slider2_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'drawLine1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'drawLine2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'clearGraphicsView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearGraphicsView2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_speedChange_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_slider3_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_slider4_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'anglesToPos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        // method 'posToAngles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        // method 'on_caculatebtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changebtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'normalizeAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double &, std::false_type>,
        // method 'updateSlidersAndLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_linepointbtn1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_linepointbtn2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineplay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn3d_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_degree0_clicked(); break;
        case 1: _t->on_degree45_clicked(); break;
        case 2: _t->on_degree90_clicked(); break;
        case 3: _t->updateServo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_recordButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->playNextCommand(); break;
        case 8: _t->on_slider2_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->drawLine1((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 10: _t->drawLine2((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->clearGraphicsView(); break;
        case 12: _t->clearGraphicsView2(); break;
        case 13: _t->on_speedChange_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_slider3_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_slider4_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->anglesToPos((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double&>>(_a[6]))); break;
        case 17: _t->posToAngles((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double&>>(_a[6]))); break;
        case 18: _t->on_caculatebtn_clicked(); break;
        case 19: _t->on_changebtn_clicked(); break;
        case 20: _t->normalizeAngle((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1]))); break;
        case 21: _t->updateSlidersAndLabels((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 22: _t->on_linepointbtn1_clicked(); break;
        case 23: _t->on_linepointbtn2_clicked(); break;
        case 24: _t->on_lineplay_clicked(); break;
        case 25: _t->on_btn3d_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
