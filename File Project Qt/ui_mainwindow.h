/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QLabel *background_login;
    QPushButton *login_button;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *toggle_password;
    QLabel *day_date_0;
    QLabel *time_0;
    QLabel *car_name_0;
    QLabel *curr_st_0;
    QLabel *next_st_0;
    QLabel *final_st_0;
    QPushButton *exit_button;
    QWidget *page_setting;
    QLabel *background_setting;
    QLineEdit *text_to_run;
    QPushButton *send_text;
    QPushButton *send_csot;
    QLineEdit *csot_id;
    QLineEdit *csot_name;
    QLineEdit *csot_contact;
    QPushButton *btn_play;
    QPushButton *btn_pause;
    QListWidget *list_entertainment;
    QSlider *slider_volume;
    QCheckBox *btn_bypass;
    QComboBox *list_stasiun;
    QComboBox *list_gapeka;
    QPushButton *browse_gapeka;
    QPushButton *send_gapeka;
    QLabel *curr_st;
    QLabel *next_st;
    QLabel *final_st;
    QLabel *gps_latitude;
    QLabel *gps_longitude;
    QLabel *real_arr;
    QLabel *real_dep;
    QLabel *speed;
    QLabel *diff_arr;
    QLabel *diff_dep;
    QLabel *eta_arr_1;
    QLabel *eta_arr_2;
    QLabel *eta_arr_3;
    QLabel *eta_arr_4;
    QLabel *eta_dep_1;
    QLabel *eta_dep_2;
    QLabel *eta_dep_3;
    QLabel *eta_dep_4;
    QLabel *eta_st_1;
    QLabel *eta_st_2;
    QLabel *eta_st_3;
    QLabel *eta_st_4;
    QLabel *nomor_ka;
    QLabel *nama_ka;
    QLabel *relasi_ka;
    QPushButton *logout;
    QQuickWidget *map;
    QLineEdit *curr_temp;
    QLabel *label_celcius;
    QWidget *page_video;
    QLabel *background_1;
    QLabel *eta_dep_4_1;
    QLabel *eta_plus_2_1;
    QLabel *eta_plus_1_1;
    QLabel *eta_st_3_1;
    QLabel *eta_st_2_1;
    QLabel *eta_delay_3_1;
    QLabel *eta_plus_4_1;
    QLabel *eta_dep_3_1;
    QLabel *eta_delay_4_1;
    QLabel *eta_st_1_1;
    QLabel *eta_plus_3_1;
    QLabel *eta_st_4_1;
    QLabel *eta_dep_2_1;
    QLabel *eta_delay_1_1;
    QLabel *eta_dep_1_1;
    QLabel *eta_delay_2_1;
    QLabel *date_1;
    QLabel *time_1;
    QLabel *speed_1;
    QGraphicsView *graphicsView;
    QWidget *page_csot;
    QLabel *background_2;
    QLabel *temp_2;
    QLabel *day_date_2;
    QLabel *time_2;
    QLabel *pict_2;
    QLabel *name_2;
    QLabel *phone_2;
    QLabel *eta_st_1_2;
    QLabel *eta_st_2_2;
    QLabel *eta_st_3_2;
    QLabel *eta_st_4_2;
    QLabel *curr_st_2;
    QLabel *nama_ka_2;
    QLabel *relasi_ka_2;
    QLabel *eta_dep_1_2;
    QLabel *eta_dep_2_2;
    QLabel *eta_dep_3_2;
    QLabel *eta_dep_4_2;
    QLabel *eta_plus_1_2;
    QLabel *eta_plus_2_2;
    QLabel *eta_plus_3_2;
    QLabel *eta_plus_4_2;
    QLabel *eta_delay_1_2;
    QLabel *eta_delay_2_2;
    QLabel *eta_delay_3_2;
    QLabel *eta_delay_4_2;
    QWidget *page_tracking;
    QLabel *background_3;
    QQuickWidget *map2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1920, 1080));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_login = new QWidget();
        page_login->setObjectName("page_login");
        background_login = new QLabel(page_login);
        background_login->setObjectName("background_login");
        background_login->setGeometry(QRect(0, 0, 1920, 1080));
        background_login->setStyleSheet(QString::fromUtf8("image: url(:/img/img/LOGIN.png);"));
        login_button = new QPushButton(page_login);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(325, 665, 576, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        login_button->setFont(font1);
        login_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"	color: rgb(250, 251, 252);\n"
"	background-color: rgb(237, 107, 35);\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(221, 99, 33);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(255, 114, 38);\n"
"}\n"
""));
        username = new QLineEdit(page_login);
        username->setObjectName("username");
        username->setGeometry(QRect(385, 450, 486, 66));
        QFont font2;
        font2.setPointSize(20);
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(82, 115, 163);\n"
"border:1px solid rgb(247, 248, 249);"));
        password = new QLineEdit(page_login);
        password->setObjectName("password");
        password->setGeometry(QRect(385, 565, 441, 61));
        password->setFont(font2);
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(82, 115, 163);\n"
"border:1px solid rgb(247, 248, 249);"));
        password->setEchoMode(QLineEdit::EchoMode::Password);
        toggle_password = new QPushButton(page_login);
        toggle_password->setObjectName("toggle_password");
        toggle_password->setGeometry(QRect(840, 585, 46, 26));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SansSerif")});
        font3.setPointSize(20);
        toggle_password->setFont(font3);
        toggle_password->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/img/img/show.png);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"image: url(:/img/img/hide.png);\n"
"}\n"
""));
        day_date_0 = new QLabel(page_login);
        day_date_0->setObjectName("day_date_0");
        day_date_0->setGeometry(QRect(1165, 440, 306, 36));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bahnschrift")});
        font4.setPointSize(17);
        font4.setBold(true);
        day_date_0->setFont(font4);
        day_date_0->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        day_date_0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        time_0 = new QLabel(page_login);
        time_0->setObjectName("time_0");
        time_0->setGeometry(QRect(1195, 470, 251, 36));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bahnschrift")});
        font5.setPointSize(20);
        font5.setBold(true);
        time_0->setFont(font5);
        time_0->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);\n"
""));
        time_0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        car_name_0 = new QLabel(page_login);
        car_name_0->setObjectName("car_name_0");
        car_name_0->setGeometry(QRect(985, 650, 150, 120));
        car_name_0->setFont(font4);
        car_name_0->setStyleSheet(QString::fromUtf8("color: rgb(237, 107, 35);"));
        car_name_0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        car_name_0->setWordWrap(true);
        curr_st_0 = new QLabel(page_login);
        curr_st_0->setObjectName("curr_st_0");
        curr_st_0->setGeometry(QRect(1160, 650, 150, 120));
        curr_st_0->setFont(font4);
        curr_st_0->setStyleSheet(QString::fromUtf8("color: rgb(237, 107, 35);"));
        curr_st_0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        curr_st_0->setWordWrap(true);
        next_st_0 = new QLabel(page_login);
        next_st_0->setObjectName("next_st_0");
        next_st_0->setGeometry(QRect(1335, 650, 150, 120));
        next_st_0->setFont(font4);
        next_st_0->setStyleSheet(QString::fromUtf8("color: rgb(237, 107, 35);"));
        next_st_0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        next_st_0->setWordWrap(true);
        final_st_0 = new QLabel(page_login);
        final_st_0->setObjectName("final_st_0");
        final_st_0->setGeometry(QRect(1510, 650, 150, 120));
        final_st_0->setFont(font4);
        final_st_0->setStyleSheet(QString::fromUtf8("color: rgb(237, 107, 35);"));
        final_st_0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        final_st_0->setWordWrap(true);
        exit_button = new QPushButton(page_login);
        exit_button->setObjectName("exit_button");
        exit_button->setGeometry(QRect(1850, 0, 70, 70));
        exit_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(255, 0, 0); /* no tint by default */\n"
"    image: url(:/img/img/logout.png);\n"
"    border-radius: 0px; /* <<< ini border radius */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 0, 0, 75); /* darken image on hover */\n"
"}\n"
""));
        stackedWidget->addWidget(page_login);
        page_setting = new QWidget();
        page_setting->setObjectName("page_setting");
        background_setting = new QLabel(page_setting);
        background_setting->setObjectName("background_setting");
        background_setting->setGeometry(QRect(0, 0, 1920, 1080));
        background_setting->setStyleSheet(QString::fromUtf8("image: url(:/img/img/SETTING.png);"));
        text_to_run = new QLineEdit(page_setting);
        text_to_run->setObjectName("text_to_run");
        text_to_run->setGeometry(QRect(105, 920, 1546, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Bahnschrift")});
        font6.setPointSize(17);
        font6.setKerning(true);
        text_to_run->setFont(font6);
        text_to_run->setAutoFillBackground(false);
        text_to_run->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(0, 0, 0);\n"
"border:1px solid rgb(247, 248, 249);"));
        text_to_run->setEchoMode(QLineEdit::EchoMode::Normal);
        send_text = new QPushButton(page_setting);
        send_text->setObjectName("send_text");
        send_text->setGeometry(QRect(1675, 908, 131, 50));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(12);
        font7.setBold(true);
        send_text->setFont(font7);
        send_text->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"	color: rgb(250, 251, 252);\n"
"	background-color: rgb(18, 92, 168);\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(0, 49, 112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(22, 113, 204);\n"
"}\n"
""));
        send_csot = new QPushButton(page_setting);
        send_csot->setObjectName("send_csot");
        send_csot->setGeometry(QRect(93, 480, 354, 56));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial")});
        font8.setPointSize(15);
        font8.setBold(true);
        send_csot->setFont(font8);
        send_csot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"	color: rgb(250, 251, 252);\n"
"	background-color: rgb(18, 92, 168);\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(0, 49, 112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(22, 113, 204);\n"
"}\n"
""));
        csot_id = new QLineEdit(page_setting);
        csot_id->setObjectName("csot_id");
        csot_id->setGeometry(QRect(105, 250, 326, 36));
        csot_id->setFont(font6);
        csot_id->setAutoFillBackground(false);
        csot_id->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(0, 0, 0);\n"
"border:1px solid rgb(247, 248, 249);"));
        csot_id->setInputMethodHints(Qt::InputMethodHint::ImhPreferUppercase);
        csot_id->setEchoMode(QLineEdit::EchoMode::Normal);
        csot_name = new QLineEdit(page_setting);
        csot_name->setObjectName("csot_name");
        csot_name->setGeometry(QRect(105, 335, 326, 36));
        csot_name->setFont(font6);
        csot_name->setAutoFillBackground(false);
        csot_name->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(0, 0, 0);\n"
"border:1px solid rgb(247, 248, 249);"));
        csot_name->setInputMethodHints(Qt::InputMethodHint::ImhPreferUppercase);
        csot_name->setEchoMode(QLineEdit::EchoMode::Normal);
        csot_contact = new QLineEdit(page_setting);
        csot_contact->setObjectName("csot_contact");
        csot_contact->setGeometry(QRect(105, 418, 326, 36));
        csot_contact->setFont(font6);
        csot_contact->setAutoFillBackground(false);
        csot_contact->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(0, 0, 0);\n"
"border:1px solid rgb(247, 248, 249);"));
        csot_contact->setInputMethodHints(Qt::InputMethodHint::ImhPreferUppercase);
        csot_contact->setEchoMode(QLineEdit::EchoMode::Normal);
        btn_play = new QPushButton(page_setting);
        btn_play->setObjectName("btn_play");
        btn_play->setGeometry(QRect(1390, 465, 56, 56));
        btn_play->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgba(0, 0, 0, 0); /* no tint by default */\n"
"    image: url(:/img/img/play.png);\n"
"    border-radius: 23px; /* <<< ini border radius */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 0, 0, 60); /* darken image on hover */\n"
"}\n"
""));
        btn_pause = new QPushButton(page_setting);
        btn_pause->setObjectName("btn_pause");
        btn_pause->setGeometry(QRect(1460, 465, 56, 56));
        btn_pause->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgba(0, 0, 0, 0); /* no tint by default */\n"
"    image: url(:/img/img/pause.png);\n"
"    border-radius: 23px; /* <<< ini border radius */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 0, 0, 60); /* darken image on hover */\n"
"}\n"
""));
        list_entertainment = new QListWidget(page_setting);
        list_entertainment->setObjectName("list_entertainment");
        list_entertainment->setGeometry(QRect(1170, 250, 566, 201));
        list_entertainment->setFont(font);
        list_entertainment->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: rgb(247, 248, 249); \n"
"    border: 1px solid rgb(247, 248, 249); \n"
"}\n"
"\n"
"QListWidget::item {\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: rgb(247, 248, 249); \n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: rgb(52, 152, 219);\n"
"    color: white;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: rgb(52, 152, 219);\n"
"}"));
        slider_volume = new QSlider(page_setting);
        slider_volume->setObjectName("slider_volume");
        slider_volume->setGeometry(QRect(1765, 245, 31, 216));
        slider_volume->setStyleSheet(QString::fromUtf8(""));
        slider_volume->setMaximum(100);
        slider_volume->setSingleStep(1);
        slider_volume->setPageStep(1);
        slider_volume->setOrientation(Qt::Orientation::Vertical);
        btn_bypass = new QCheckBox(page_setting);
        btn_bypass->setObjectName("btn_bypass");
        btn_bypass->setGeometry(QRect(1080, 630, 121, 26));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Bahnschrift")});
        font9.setPointSize(12);
        font9.setBold(false);
        btn_bypass->setFont(font9);
        btn_bypass->setStyleSheet(QString::fromUtf8("color: rgb(0, 74, 173);"));
        list_stasiun = new QComboBox(page_setting);
        list_stasiun->addItem(QString());
        list_stasiun->setObjectName("list_stasiun");
        list_stasiun->setGeometry(QRect(1200, 627, 341, 31));
        QFont font10;
        font10.setPointSize(12);
        font10.setBold(true);
        list_stasiun->setFont(font10);
        list_stasiun->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"        background-color: rgb(0, 72, 168);\n"
"        color: rgb(255, 255, 255);\n"
"    }\n"
"\n"
"    QComboBox:disabled {\n"
"        background-color: lightgray;\n"
"        color: darkgray;\n"
"    }\n"
"\n"
"    QComboBox QAbstractItemView {\n"
"        background-color: white;\n"
"        color: black;\n"
"        selection-background-color: #004488;\n"
"        selection-color: white;\n"
"    }\n"
"\n"
"    QComboBox QAbstractItemView::item:hover {\n"
"        background-color: #d3d3d3; /* abu-abu muda */\n"
"        color: black;\n"
"    }"));
        list_gapeka = new QComboBox(page_setting);
        list_gapeka->setObjectName("list_gapeka");
        list_gapeka->setGeometry(QRect(520, 243, 571, 51));
        QFont font11;
        font11.setPointSize(20);
        font11.setBold(true);
        list_gapeka->setFont(font11);
        list_gapeka->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"        background-color: rgb(0, 72, 168);\n"
"        color: rgb(255, 255, 255);\n"
"    }\n"
"\n"
"    QComboBox:disabled {\n"
"        background-color: lightgray;\n"
"        color: darkgray;\n"
"    }\n"
"\n"
"    QComboBox QAbstractItemView {\n"
"        background-color: white;\n"
"        color: black;\n"
"        selection-background-color: #004488;\n"
"        selection-color: white;\n"
"    }\n"
"\n"
"    QComboBox QAbstractItemView::item:hover {\n"
"        background-color: #d3d3d3; /* abu-abu muda */\n"
"        color: black;\n"
"    }"));
        browse_gapeka = new QPushButton(page_setting);
        browse_gapeka->setObjectName("browse_gapeka");
        browse_gapeka->setGeometry(QRect(520, 310, 391, 51));
        browse_gapeka->setFont(font7);
        browse_gapeka->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"	color: rgb(250, 251, 252);\n"
"	background-color: rgb(18, 92, 168);\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(0, 49, 112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(22, 113, 204);\n"
"}\n"
""));
        send_gapeka = new QPushButton(page_setting);
        send_gapeka->setObjectName("send_gapeka");
        send_gapeka->setGeometry(QRect(920, 310, 171, 51));
        send_gapeka->setFont(font7);
        send_gapeka->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"	color: rgb(250, 251, 252);\n"
"	background-color: rgb(18, 92, 168);\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(0, 49, 112);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(22, 113, 204);\n"
"}\n"
""));
        curr_st = new QLabel(page_setting);
        curr_st->setObjectName("curr_st");
        curr_st->setGeometry(QRect(420, 775, 221, 51));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Leelawadee UI")});
        font12.setPointSize(12);
        font12.setBold(false);
        curr_st->setFont(font12);
        curr_st->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        curr_st->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        curr_st->setWordWrap(true);
        next_st = new QLabel(page_setting);
        next_st->setObjectName("next_st");
        next_st->setGeometry(QRect(420, 840, 181, 51));
        next_st->setFont(font12);
        next_st->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        next_st->setWordWrap(true);
        final_st = new QLabel(page_setting);
        final_st->setObjectName("final_st");
        final_st->setGeometry(QRect(650, 645, 181, 51));
        final_st->setFont(font12);
        final_st->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        final_st->setWordWrap(true);
        gps_latitude = new QLabel(page_setting);
        gps_latitude->setObjectName("gps_latitude");
        gps_latitude->setGeometry(QRect(420, 650, 181, 31));
        gps_latitude->setFont(font12);
        gps_latitude->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gps_longitude = new QLabel(page_setting);
        gps_longitude->setObjectName("gps_longitude");
        gps_longitude->setGeometry(QRect(420, 715, 181, 31));
        gps_longitude->setFont(font12);
        gps_longitude->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        real_arr = new QLabel(page_setting);
        real_arr->setObjectName("real_arr");
        real_arr->setGeometry(QRect(650, 715, 181, 31));
        real_arr->setFont(font12);
        real_arr->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        real_dep = new QLabel(page_setting);
        real_dep->setObjectName("real_dep");
        real_dep->setGeometry(QRect(650, 780, 181, 31));
        real_dep->setFont(font12);
        real_dep->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        speed = new QLabel(page_setting);
        speed->setObjectName("speed");
        speed->setGeometry(QRect(650, 845, 181, 31));
        speed->setFont(font12);
        speed->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        diff_arr = new QLabel(page_setting);
        diff_arr->setObjectName("diff_arr");
        diff_arr->setGeometry(QRect(880, 715, 181, 31));
        diff_arr->setFont(font12);
        diff_arr->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        diff_dep = new QLabel(page_setting);
        diff_dep->setObjectName("diff_dep");
        diff_dep->setGeometry(QRect(880, 785, 181, 31));
        diff_dep->setFont(font12);
        diff_dep->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_arr_1 = new QLabel(page_setting);
        eta_arr_1->setObjectName("eta_arr_1");
        eta_arr_1->setGeometry(QRect(1080, 700, 101, 31));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Leelawadee UI")});
        font13.setPointSize(15);
        font13.setBold(false);
        eta_arr_1->setFont(font13);
        eta_arr_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_arr_2 = new QLabel(page_setting);
        eta_arr_2->setObjectName("eta_arr_2");
        eta_arr_2->setGeometry(QRect(1080, 750, 101, 31));
        eta_arr_2->setFont(font13);
        eta_arr_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_arr_3 = new QLabel(page_setting);
        eta_arr_3->setObjectName("eta_arr_3");
        eta_arr_3->setGeometry(QRect(1080, 800, 101, 31));
        eta_arr_3->setFont(font13);
        eta_arr_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_arr_4 = new QLabel(page_setting);
        eta_arr_4->setObjectName("eta_arr_4");
        eta_arr_4->setGeometry(QRect(1080, 850, 96, 31));
        eta_arr_4->setFont(font13);
        eta_arr_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_dep_1 = new QLabel(page_setting);
        eta_dep_1->setObjectName("eta_dep_1");
        eta_dep_1->setGeometry(QRect(1235, 700, 101, 31));
        eta_dep_1->setFont(font13);
        eta_dep_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_dep_2 = new QLabel(page_setting);
        eta_dep_2->setObjectName("eta_dep_2");
        eta_dep_2->setGeometry(QRect(1235, 750, 101, 31));
        eta_dep_2->setFont(font13);
        eta_dep_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_dep_3 = new QLabel(page_setting);
        eta_dep_3->setObjectName("eta_dep_3");
        eta_dep_3->setGeometry(QRect(1235, 800, 101, 31));
        eta_dep_3->setFont(font13);
        eta_dep_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_dep_4 = new QLabel(page_setting);
        eta_dep_4->setObjectName("eta_dep_4");
        eta_dep_4->setGeometry(QRect(1235, 850, 101, 31));
        eta_dep_4->setFont(font13);
        eta_dep_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_st_1 = new QLabel(page_setting);
        eta_st_1->setObjectName("eta_st_1");
        eta_st_1->setGeometry(QRect(1400, 700, 400, 31));
        eta_st_1->setFont(font13);
        eta_st_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_st_2 = new QLabel(page_setting);
        eta_st_2->setObjectName("eta_st_2");
        eta_st_2->setGeometry(QRect(1400, 750, 400, 31));
        eta_st_2->setFont(font13);
        eta_st_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_st_3 = new QLabel(page_setting);
        eta_st_3->setObjectName("eta_st_3");
        eta_st_3->setGeometry(QRect(1400, 800, 400, 31));
        eta_st_3->setFont(font13);
        eta_st_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        eta_st_4 = new QLabel(page_setting);
        eta_st_4->setObjectName("eta_st_4");
        eta_st_4->setGeometry(QRect(1400, 850, 400, 31));
        eta_st_4->setFont(font13);
        eta_st_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        nomor_ka = new QLabel(page_setting);
        nomor_ka->setObjectName("nomor_ka");
        nomor_ka->setGeometry(QRect(525, 420, 181, 31));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Segoe UI")});
        font14.setPointSize(20);
        font14.setBold(true);
        nomor_ka->setFont(font14);
        nomor_ka->setStyleSheet(QString::fromUtf8("color: rgb(237, 107, 35);"));
        nama_ka = new QLabel(page_setting);
        nama_ka->setObjectName("nama_ka");
        nama_ka->setGeometry(QRect(525, 445, 551, 51));
        nama_ka->setFont(font14);
        nama_ka->setStyleSheet(QString::fromUtf8("color: rgb(0, 51, 122);"));
        relasi_ka = new QLabel(page_setting);
        relasi_ka->setObjectName("relasi_ka");
        relasi_ka->setGeometry(QRect(525, 485, 181, 41));
        relasi_ka->setFont(font14);
        relasi_ka->setStyleSheet(QString::fromUtf8("color: rgb(0, 51, 122);"));
        logout = new QPushButton(page_setting);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(1815, 15, 56, 56));
        logout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(255, 0, 0); /* no tint by default */\n"
"    image: url(:/img/img/logout.png);\n"
"    border-radius: 10px; /* <<< ini border radius */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 0, 0, 75); /* darken image on hover */\n"
"}\n"
""));
        map = new QQuickWidget(page_setting);
        map->setObjectName("map");
        map->setGeometry(QRect(115, 625, 271, 271));
        map->setResizeMode(QQuickWidget::ResizeMode::SizeRootObjectToView);
        curr_temp = new QLineEdit(page_setting);
        curr_temp->setObjectName("curr_temp");
        curr_temp->setGeometry(QRect(880, 845, 36, 31));
        QFont font15;
        font15.setFamilies({QString::fromUtf8("Leelawadee UI")});
        font15.setPointSize(12);
        curr_temp->setFont(font15);
        curr_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 248, 249);\n"
"color: rgb(0, 0, 0);"));
        curr_temp->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_celcius = new QLabel(page_setting);
        label_celcius->setObjectName("label_celcius");
        label_celcius->setGeometry(QRect(920, 845, 36, 31));
        label_celcius->setFont(font12);
        label_celcius->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_setting);
        page_video = new QWidget();
        page_video->setObjectName("page_video");
        background_1 = new QLabel(page_video);
        background_1->setObjectName("background_1");
        background_1->setGeometry(QRect(0, 0, 1920, 1080));
        background_1->setMaximumSize(QSize(1920, 1080));
        background_1->setStyleSheet(QString::fromUtf8("image: url(:/img/img/VIDEO.png);"));
        eta_dep_4_1 = new QLabel(page_video);
        eta_dep_4_1->setObjectName("eta_dep_4_1");
        eta_dep_4_1->setGeometry(QRect(1495, 390, 121, 41));
        QFont font16;
        font16.setFamilies({QString::fromUtf8("Bahnschrift")});
        font16.setPointSize(22);
        font16.setBold(true);
        eta_dep_4_1->setFont(font16);
        eta_dep_4_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_dep_4_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_2_1 = new QLabel(page_video);
        eta_plus_2_1->setObjectName("eta_plus_2_1");
        eta_plus_2_1->setGeometry(QRect(1640, 255, 121, 41));
        eta_plus_2_1->setFont(font16);
        eta_plus_2_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_plus_2_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_1_1 = new QLabel(page_video);
        eta_plus_1_1->setObjectName("eta_plus_1_1");
        eta_plus_1_1->setGeometry(QRect(1640, 185, 121, 41));
        eta_plus_1_1->setFont(font16);
        eta_plus_1_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_plus_1_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_3_1 = new QLabel(page_video);
        eta_st_3_1->setObjectName("eta_st_3_1");
        eta_st_3_1->setGeometry(QRect(1000, 310, 401, 60));
        eta_st_3_1->setFont(font16);
        eta_st_3_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_st_3_1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_3_1->setWordWrap(true);
        eta_st_2_1 = new QLabel(page_video);
        eta_st_2_1->setObjectName("eta_st_2_1");
        eta_st_2_1->setGeometry(QRect(1000, 240, 401, 60));
        eta_st_2_1->setFont(font16);
        eta_st_2_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_st_2_1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_2_1->setWordWrap(true);
        eta_delay_3_1 = new QLabel(page_video);
        eta_delay_3_1->setObjectName("eta_delay_3_1");
        eta_delay_3_1->setGeometry(QRect(1765, 320, 121, 41));
        eta_delay_3_1->setFont(font16);
        eta_delay_3_1->setStyleSheet(QString::fromUtf8("color: rgb(198, 20, 20);"));
        eta_delay_3_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_4_1 = new QLabel(page_video);
        eta_plus_4_1->setObjectName("eta_plus_4_1");
        eta_plus_4_1->setGeometry(QRect(1640, 390, 121, 41));
        eta_plus_4_1->setFont(font16);
        eta_plus_4_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_plus_4_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_dep_3_1 = new QLabel(page_video);
        eta_dep_3_1->setObjectName("eta_dep_3_1");
        eta_dep_3_1->setGeometry(QRect(1495, 320, 121, 41));
        eta_dep_3_1->setFont(font16);
        eta_dep_3_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_dep_3_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_4_1 = new QLabel(page_video);
        eta_delay_4_1->setObjectName("eta_delay_4_1");
        eta_delay_4_1->setGeometry(QRect(1765, 390, 121, 41));
        eta_delay_4_1->setFont(font16);
        eta_delay_4_1->setStyleSheet(QString::fromUtf8("color: rgb(198, 20, 20);"));
        eta_delay_4_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_1_1 = new QLabel(page_video);
        eta_st_1_1->setObjectName("eta_st_1_1");
        eta_st_1_1->setGeometry(QRect(1000, 175, 401, 60));
        eta_st_1_1->setFont(font16);
        eta_st_1_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_st_1_1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_1_1->setWordWrap(true);
        eta_plus_3_1 = new QLabel(page_video);
        eta_plus_3_1->setObjectName("eta_plus_3_1");
        eta_plus_3_1->setGeometry(QRect(1640, 320, 121, 41));
        eta_plus_3_1->setFont(font16);
        eta_plus_3_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_plus_3_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_4_1 = new QLabel(page_video);
        eta_st_4_1->setObjectName("eta_st_4_1");
        eta_st_4_1->setGeometry(QRect(1000, 375, 401, 60));
        eta_st_4_1->setFont(font16);
        eta_st_4_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_st_4_1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_4_1->setWordWrap(true);
        eta_dep_2_1 = new QLabel(page_video);
        eta_dep_2_1->setObjectName("eta_dep_2_1");
        eta_dep_2_1->setGeometry(QRect(1495, 255, 121, 41));
        eta_dep_2_1->setFont(font16);
        eta_dep_2_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_dep_2_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_1_1 = new QLabel(page_video);
        eta_delay_1_1->setObjectName("eta_delay_1_1");
        eta_delay_1_1->setGeometry(QRect(1765, 185, 121, 41));
        eta_delay_1_1->setFont(font16);
        eta_delay_1_1->setStyleSheet(QString::fromUtf8("color: rgb(198, 20, 20);"));
        eta_delay_1_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_dep_1_1 = new QLabel(page_video);
        eta_dep_1_1->setObjectName("eta_dep_1_1");
        eta_dep_1_1->setGeometry(QRect(1495, 185, 121, 41));
        eta_dep_1_1->setFont(font16);
        eta_dep_1_1->setStyleSheet(QString::fromUtf8("color: rgb(45, 42, 112);"));
        eta_dep_1_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_2_1 = new QLabel(page_video);
        eta_delay_2_1->setObjectName("eta_delay_2_1");
        eta_delay_2_1->setGeometry(QRect(1765, 255, 121, 41));
        eta_delay_2_1->setFont(font16);
        eta_delay_2_1->setStyleSheet(QString::fromUtf8("color: rgb(198, 20, 20);"));
        eta_delay_2_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        date_1 = new QLabel(page_video);
        date_1->setObjectName("date_1");
        date_1->setGeometry(QRect(1385, 40, 251, 46));
        QFont font17;
        font17.setFamilies({QString::fromUtf8("Bahnschrift")});
        font17.setPointSize(28);
        font17.setBold(false);
        date_1->setFont(font17);
        date_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        time_1 = new QLabel(page_video);
        time_1->setObjectName("time_1");
        time_1->setGeometry(QRect(1659, -5, 246, 100));
        QFont font18;
        font18.setFamilies({QString::fromUtf8("Segoe UI")});
        font18.setPointSize(60);
        font18.setBold(true);
        time_1->setFont(font18);
        time_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        time_1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        speed_1 = new QLabel(page_video);
        speed_1->setObjectName("speed_1");
        speed_1->setGeometry(QRect(1115, 5, 200, 100));
        QFont font19;
        font19.setFamilies({QString::fromUtf8("Bahnschrift")});
        font19.setPointSize(40);
        font19.setBold(true);
        speed_1->setFont(font19);
        speed_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        speed_1->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        graphicsView = new QGraphicsView(page_video);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 1920, 1080));
        stackedWidget->addWidget(page_video);
        graphicsView->raise();
        background_1->raise();
        eta_dep_4_1->raise();
        eta_plus_2_1->raise();
        eta_plus_1_1->raise();
        eta_st_3_1->raise();
        eta_st_2_1->raise();
        eta_delay_3_1->raise();
        eta_plus_4_1->raise();
        eta_dep_3_1->raise();
        eta_delay_4_1->raise();
        eta_st_1_1->raise();
        eta_plus_3_1->raise();
        eta_st_4_1->raise();
        eta_dep_2_1->raise();
        eta_delay_1_1->raise();
        eta_dep_1_1->raise();
        eta_delay_2_1->raise();
        date_1->raise();
        time_1->raise();
        speed_1->raise();
        page_csot = new QWidget();
        page_csot->setObjectName("page_csot");
        background_2 = new QLabel(page_csot);
        background_2->setObjectName("background_2");
        background_2->setGeometry(QRect(0, 0, 1920, 1080));
        background_2->setStyleSheet(QString::fromUtf8("image: url(:/img/img/CSOT.png);"));
        temp_2 = new QLabel(page_csot);
        temp_2->setObjectName("temp_2");
        temp_2->setGeometry(QRect(940, 45, 161, 61));
        QFont font20;
        font20.setFamilies({QString::fromUtf8("Bahnschrift")});
        font20.setPointSize(50);
        font20.setBold(true);
        temp_2->setFont(font20);
        temp_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temp_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        day_date_2 = new QLabel(page_csot);
        day_date_2->setObjectName("day_date_2");
        day_date_2->setGeometry(QRect(1200, 30, 551, 46));
        day_date_2->setFont(font17);
        day_date_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        day_date_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        time_2 = new QLabel(page_csot);
        time_2->setObjectName("time_2");
        time_2->setGeometry(QRect(1200, 65, 551, 61));
        QFont font21;
        font21.setFamilies({QString::fromUtf8("Segoe UI")});
        font21.setPointSize(42);
        font21.setBold(true);
        time_2->setFont(font21);
        time_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        time_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pict_2 = new QLabel(page_csot);
        pict_2->setObjectName("pict_2");
        pict_2->setGeometry(QRect(100, 265, 521, 521));
        QFont font22;
        font22.setPointSize(30);
        pict_2->setFont(font22);
        pict_2->setStyleSheet(QString::fromUtf8("border-radius: 260px;"));
        pict_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        name_2 = new QLabel(page_csot);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(60, 800, 601, 61));
        QFont font23;
        font23.setFamilies({QString::fromUtf8("Bahnschrift")});
        font23.setPointSize(27);
        font23.setBold(true);
        name_2->setFont(font23);
        name_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        phone_2 = new QLabel(page_csot);
        phone_2->setObjectName("phone_2");
        phone_2->setGeometry(QRect(60, 855, 601, 61));
        QFont font24;
        font24.setFamilies({QString::fromUtf8("Bahnschrift")});
        font24.setPointSize(30);
        font24.setBold(true);
        phone_2->setFont(font24);
        phone_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        phone_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_1_2 = new QLabel(page_csot);
        eta_st_1_2->setObjectName("eta_st_1_2");
        eta_st_1_2->setGeometry(QRect(715, 570, 491, 41));
        eta_st_1_2->setFont(font16);
        eta_st_1_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_1_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_2_2 = new QLabel(page_csot);
        eta_st_2_2->setObjectName("eta_st_2_2");
        eta_st_2_2->setGeometry(QRect(715, 645, 491, 41));
        eta_st_2_2->setFont(font16);
        eta_st_2_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_2_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_3_2 = new QLabel(page_csot);
        eta_st_3_2->setObjectName("eta_st_3_2");
        eta_st_3_2->setGeometry(QRect(715, 725, 491, 41));
        eta_st_3_2->setFont(font16);
        eta_st_3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_3_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_4_2 = new QLabel(page_csot);
        eta_st_4_2->setObjectName("eta_st_4_2");
        eta_st_4_2->setGeometry(QRect(715, 805, 491, 41));
        eta_st_4_2->setFont(font16);
        eta_st_4_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_4_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        curr_st_2 = new QLabel(page_csot);
        curr_st_2->setObjectName("curr_st_2");
        curr_st_2->setGeometry(QRect(720, 385, 486, 86));
        curr_st_2->setFont(font24);
        curr_st_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        curr_st_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop|Qt::AlignmentFlag::AlignTrailing);
        curr_st_2->setWordWrap(true);
        nama_ka_2 = new QLabel(page_csot);
        nama_ka_2->setObjectName("nama_ka_2");
        nama_ka_2->setGeometry(QRect(840, 195, 976, 41));
        nama_ka_2->setFont(font24);
        nama_ka_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        nama_ka_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        relasi_ka_2 = new QLabel(page_csot);
        relasi_ka_2->setObjectName("relasi_ka_2");
        relasi_ka_2->setGeometry(QRect(840, 240, 976, 41));
        QFont font25;
        font25.setFamilies({QString::fromUtf8("Bahnschrift")});
        font25.setPointSize(22);
        font25.setBold(false);
        relasi_ka_2->setFont(font25);
        relasi_ka_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        relasi_ka_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        eta_dep_1_2 = new QLabel(page_csot);
        eta_dep_1_2->setObjectName("eta_dep_1_2");
        eta_dep_1_2->setGeometry(QRect(1335, 570, 121, 41));
        eta_dep_1_2->setFont(font16);
        eta_dep_1_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_dep_1_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_dep_2_2 = new QLabel(page_csot);
        eta_dep_2_2->setObjectName("eta_dep_2_2");
        eta_dep_2_2->setGeometry(QRect(1335, 645, 121, 41));
        eta_dep_2_2->setFont(font16);
        eta_dep_2_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_dep_2_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_dep_3_2 = new QLabel(page_csot);
        eta_dep_3_2->setObjectName("eta_dep_3_2");
        eta_dep_3_2->setGeometry(QRect(1335, 725, 121, 41));
        eta_dep_3_2->setFont(font16);
        eta_dep_3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_dep_3_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_dep_4_2 = new QLabel(page_csot);
        eta_dep_4_2->setObjectName("eta_dep_4_2");
        eta_dep_4_2->setGeometry(QRect(1335, 805, 121, 41));
        eta_dep_4_2->setFont(font16);
        eta_dep_4_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_dep_4_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_1_2 = new QLabel(page_csot);
        eta_plus_1_2->setObjectName("eta_plus_1_2");
        eta_plus_1_2->setGeometry(QRect(1500, 570, 121, 41));
        eta_plus_1_2->setFont(font16);
        eta_plus_1_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_plus_1_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_2_2 = new QLabel(page_csot);
        eta_plus_2_2->setObjectName("eta_plus_2_2");
        eta_plus_2_2->setGeometry(QRect(1500, 645, 121, 41));
        eta_plus_2_2->setFont(font16);
        eta_plus_2_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_plus_2_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_3_2 = new QLabel(page_csot);
        eta_plus_3_2->setObjectName("eta_plus_3_2");
        eta_plus_3_2->setGeometry(QRect(1500, 725, 121, 41));
        eta_plus_3_2->setFont(font16);
        eta_plus_3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_plus_3_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_plus_4_2 = new QLabel(page_csot);
        eta_plus_4_2->setObjectName("eta_plus_4_2");
        eta_plus_4_2->setGeometry(QRect(1500, 805, 121, 41));
        eta_plus_4_2->setFont(font16);
        eta_plus_4_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_plus_4_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_1_2 = new QLabel(page_csot);
        eta_delay_1_2->setObjectName("eta_delay_1_2");
        eta_delay_1_2->setGeometry(QRect(1655, 570, 121, 41));
        eta_delay_1_2->setFont(font16);
        eta_delay_1_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_delay_1_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_2_2 = new QLabel(page_csot);
        eta_delay_2_2->setObjectName("eta_delay_2_2");
        eta_delay_2_2->setGeometry(QRect(1655, 645, 121, 41));
        eta_delay_2_2->setFont(font16);
        eta_delay_2_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_delay_2_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_3_2 = new QLabel(page_csot);
        eta_delay_3_2->setObjectName("eta_delay_3_2");
        eta_delay_3_2->setGeometry(QRect(1655, 725, 121, 41));
        eta_delay_3_2->setFont(font16);
        eta_delay_3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_delay_3_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_delay_4_2 = new QLabel(page_csot);
        eta_delay_4_2->setObjectName("eta_delay_4_2");
        eta_delay_4_2->setGeometry(QRect(1655, 805, 121, 41));
        eta_delay_4_2->setFont(font16);
        eta_delay_4_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_delay_4_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_csot);
        page_tracking = new QWidget();
        page_tracking->setObjectName("page_tracking");
        page_tracking->setStyleSheet(QString::fromUtf8(""));
        background_3 = new QLabel(page_tracking);
        background_3->setObjectName("background_3");
        background_3->setGeometry(QRect(0, 0, 1920, 1080));
        background_3->setStyleSheet(QString::fromUtf8("image: url(:/img/img/MAPS.png);"));
        map2 = new QQuickWidget(page_tracking);
        map2->setObjectName("map2");
        map2->setGeometry(QRect(60, 145, 1801, 826));
        map2->setResizeMode(QQuickWidget::ResizeMode::SizeRootObjectToView);
        stackedWidget->addWidget(page_tracking);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tracking KA", nullptr));
        background_login->setText(QString());
        login_button->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        username->setText(QString());
        password->setText(QString());
        toggle_password->setText(QString());
        day_date_0->setText(QString());
        time_0->setText(QString());
        car_name_0->setText(QString());
        curr_st_0->setText(QString());
        next_st_0->setText(QString());
        final_st_0->setText(QString());
#if QT_CONFIG(tooltip)
        exit_button->setToolTip(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#endif // QT_CONFIG(tooltip)
        exit_button->setText(QString());
        background_setting->setText(QString());
        text_to_run->setText(QString());
        text_to_run->setPlaceholderText(QString());
        send_text->setText(QCoreApplication::translate("MainWindow", "SEND TEXT", nullptr));
        send_csot->setText(QCoreApplication::translate("MainWindow", "SEND DATA", nullptr));
        csot_id->setText(QString());
        csot_id->setPlaceholderText(QString());
        csot_name->setText(QString());
        csot_name->setPlaceholderText(QString());
        csot_contact->setText(QString());
        csot_contact->setPlaceholderText(QString());
        btn_play->setText(QString());
        btn_pause->setText(QString());
#if QT_CONFIG(tooltip)
        slider_volume->setToolTip(QCoreApplication::translate("MainWindow", "Volume Entertainment", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_bypass->setText(QCoreApplication::translate("MainWindow", "BYPASS GPS", nullptr));
        list_stasiun->setItemText(0, QCoreApplication::translate("MainWindow", "Stasiun", nullptr));

#if QT_CONFIG(tooltip)
        list_stasiun->setToolTip(QCoreApplication::translate("MainWindow", "List Stasiun", nullptr));
#endif // QT_CONFIG(tooltip)
        browse_gapeka->setText(QCoreApplication::translate("MainWindow", "BROWSE TRAIN TRAVEL DATA", nullptr));
        send_gapeka->setText(QCoreApplication::translate("MainWindow", "SEND DATA", nullptr));
        curr_st->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        next_st->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        final_st->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        gps_latitude->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        gps_longitude->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        real_arr->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        real_dep->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        speed->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        diff_arr->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        diff_dep->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_arr_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_arr_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_arr_3->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_arr_4->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_3->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_4->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_3->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_4->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        nomor_ka->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        nama_ka->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        relasi_ka->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(tooltip)
        logout->setToolTip(QCoreApplication::translate("MainWindow", "Logout", nullptr));
#endif // QT_CONFIG(tooltip)
        logout->setText(QString());
        curr_temp->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        label_celcius->setText(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        background_1->setText(QString());
        eta_dep_4_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_2_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_1_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_3_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_2_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_3_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_4_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_3_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_4_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_1_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_3_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_4_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_2_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_1_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_1_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_2_1->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        date_1->setText(QString());
        time_1->setText(QString());
        speed_1->setText(QCoreApplication::translate("MainWindow", "N/A kph", nullptr));
        background_2->setText(QString());
        temp_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        day_date_2->setText(QString());
        time_2->setText(QString());
        pict_2->setText(QString());
        name_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        phone_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_1_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_2_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_3_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_st_4_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        curr_st_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        nama_ka_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        relasi_ka_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_1_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_2_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_3_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_dep_4_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_1_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_2_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_3_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_plus_4_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_1_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_2_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_3_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        eta_delay_4_2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        background_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
