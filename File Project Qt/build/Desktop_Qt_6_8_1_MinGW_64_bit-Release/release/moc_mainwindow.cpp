/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "setCenter",
    "",
    "QVariant",
    "addMarker",
    "parseRMC",
    "nmea",
    "QString&",
    "lat",
    "lon",
    "speed",
    "readGPSData",
    "haversine",
    "lat1",
    "lon1",
    "lat2",
    "lon2",
    "updateETA",
    "nowSt",
    "calculateDelay",
    "currentTime",
    "etaTime",
    "updateTIME",
    "init_gapeka_config",
    "filePath",
    "mainLoop",
    "exitApplication",
    "logout",
    "roundedPixmap",
    "src",
    "radius",
    "showRunningText",
    "text",
    "QWidget*",
    "parent",
    "addPicture",
    "filepath",
    "clearAllFocus",
    "on_logout_clicked",
    "on_login_button_pressed",
    "on_toggle_password_pressed",
    "on_toggle_password_released",
    "on_send_text_clicked",
    "on_send_csot_clicked",
    "on_btn_play_clicked",
    "on_btn_pause_clicked",
    "on_list_entertainment_itemSelectionChanged",
    "on_slider_volume_valueChanged",
    "value",
    "on_btn_bypass_clicked",
    "checked",
    "on_browse_gapeka_clicked",
    "on_send_gapeka_clicked",
    "on_exit_button_clicked",
    "on_curr_temp_textChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  200,    2, 0x06,    1 /* Public */,
       4,    2,  205,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    4,  210,    2, 0x08,    7 /* Private */,
      11,    0,  219,    2, 0x08,   12 /* Private */,
      12,    4,  220,    2, 0x08,   13 /* Private */,
      17,    1,  229,    2, 0x08,   18 /* Private */,
      19,    2,  232,    2, 0x08,   20 /* Private */,
      22,    1,  237,    2, 0x08,   23 /* Private */,
      23,    1,  240,    2, 0x08,   25 /* Private */,
      25,    0,  243,    2, 0x08,   27 /* Private */,
      26,    0,  244,    2, 0x08,   28 /* Private */,
      27,    0,  245,    2, 0x08,   29 /* Private */,
      28,    2,  246,    2, 0x08,   30 /* Private */,
      31,    2,  251,    2, 0x08,   33 /* Private */,
      35,    1,  256,    2, 0x08,   36 /* Private */,
      37,    0,  259,    2, 0x08,   38 /* Private */,
      38,    0,  260,    2, 0x08,   39 /* Private */,
      39,    0,  261,    2, 0x08,   40 /* Private */,
      40,    0,  262,    2, 0x08,   41 /* Private */,
      41,    0,  263,    2, 0x08,   42 /* Private */,
      42,    0,  264,    2, 0x08,   43 /* Private */,
      43,    0,  265,    2, 0x08,   44 /* Private */,
      44,    0,  266,    2, 0x08,   45 /* Private */,
      45,    0,  267,    2, 0x08,   46 /* Private */,
      46,    0,  268,    2, 0x08,   47 /* Private */,
      47,    1,  269,    2, 0x08,   48 /* Private */,
      49,    1,  272,    2, 0x08,   50 /* Private */,
      51,    0,  275,    2, 0x08,   52 /* Private */,
      52,    0,  276,    2, 0x08,   53 /* Private */,
      53,    0,  277,    2, 0x08,   54 /* Private */,
      54,    1,  278,    2, 0x08,   55 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7,    6,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::QString, QMetaType::QTime, QMetaType::QTime,   20,   21,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QPixmap, QMetaType::QPixmap, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 33,   32,   34,
    QMetaType::Void, QMetaType::QString,   36,
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
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'setCenter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'addMarker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'parseRMC'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'readGPSData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'haversine'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'updateETA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'calculateDelay'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'updateTIME'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'init_gapeka_config'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'mainLoop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exitApplication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'roundedPixmap'
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showRunningText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'addPicture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clearAllFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggle_password_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggle_password_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_text_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_csot_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_play_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_pause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_list_entertainment_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_slider_volume_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btn_bypass_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_browse_gapeka_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_gapeka_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_curr_temp_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setCenter((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->addMarker((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 2: { bool _r = _t->parseRMC((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->readGPSData(); break;
        case 4: { double _r = _t->haversine((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->updateETA((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: { QString _r = _t->calculateDelay((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->updateTIME((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->init_gapeka_config((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->mainLoop(); break;
        case 10: _t->exitApplication(); break;
        case 11: _t->logout(); break;
        case 12: { QPixmap _r = _t->roundedPixmap((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->showRunningText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 14: _t->addPicture((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->clearAllFocus(); break;
        case 16: _t->on_logout_clicked(); break;
        case 17: _t->on_login_button_pressed(); break;
        case 18: _t->on_toggle_password_pressed(); break;
        case 19: _t->on_toggle_password_released(); break;
        case 20: _t->on_send_text_clicked(); break;
        case 21: _t->on_send_csot_clicked(); break;
        case 22: _t->on_btn_play_clicked(); break;
        case 23: _t->on_btn_pause_clicked(); break;
        case 24: _t->on_list_entertainment_itemSelectionChanged(); break;
        case 25: _t->on_slider_volume_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_btn_bypass_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_browse_gapeka_clicked(); break;
        case 28: _t->on_send_gapeka_clicked(); break;
        case 29: _t->on_exit_button_clicked(); break;
        case 30: _t->on_curr_temp_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MainWindow::*)(QVariant , QVariant );
            if (_q_method_type _q_method = &MainWindow::setCenter; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(QVariant , QVariant );
            if (_q_method_type _q_method = &MainWindow::addMarker; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::setCenter(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::addMarker(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
