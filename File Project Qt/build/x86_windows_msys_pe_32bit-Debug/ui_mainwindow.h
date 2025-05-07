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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *background_1;
    QLabel *speed_1;
    QLabel *time_1;
    QLabel *day_1;
    QLabel *date_1;
    QLabel *eta_st_1_1;
    QLabel *eta_st_2_1;
    QLabel *eta_st_3_1;
    QLabel *eta_st_4_1;
    QLabel *eta_time_1_1;
    QLabel *eta_time_2_1;
    QLabel *eta_time_3_1;
    QLabel *eta_time_4_1;
    QWidget *page_2;
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
    QLabel *eta_time_1_2;
    QLabel *eta_time_2_2;
    QLabel *eta_time_3_2;
    QLabel *eta_time_4_2;
    QLabel *eta_time_1_3;
    QLabel *eta_time_1_4;
    QLabel *eta_time_1_5;
    QLabel *eta_time_1_6;
    QLabel *eta_time_1_7;
    QLabel *eta_time_1_8;
    QLabel *eta_time_1_9;
    QLabel *eta_time_1_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1920, 1080));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        background_1 = new QLabel(page_1);
        background_1->setObjectName("background_1");
        background_1->setGeometry(QRect(0, 0, 1920, 1080));
        background_1->setMaximumSize(QSize(1920, 1080));
        background_1->setStyleSheet(QString::fromUtf8("image: url(:/img/img/4.png);"));
        speed_1 = new QLabel(page_1);
        speed_1->setObjectName("speed_1");
        speed_1->setGeometry(QRect(1, 270, 411, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(55);
        font.setBold(true);
        speed_1->setFont(font);
        speed_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        speed_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        time_1 = new QLabel(page_1);
        time_1->setObjectName("time_1");
        time_1->setGeometry(QRect(0, 520, 411, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(55);
        font1.setWeight(QFont::ExtraBold);
        time_1->setFont(font1);
        time_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        time_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        day_1 = new QLabel(page_1);
        day_1->setObjectName("day_1");
        day_1->setGeometry(QRect(0, 605, 411, 66));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setPointSize(28);
        font2.setBold(true);
        day_1->setFont(font2);
        day_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        day_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        date_1 = new QLabel(page_1);
        date_1->setObjectName("date_1");
        date_1->setGeometry(QRect(0, 650, 411, 66));
        date_1->setFont(font2);
        date_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_1_1 = new QLabel(page_1);
        eta_st_1_1->setObjectName("eta_st_1_1");
        eta_st_1_1->setGeometry(QRect(160, 860, 400, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift")});
        font3.setPointSize(25);
        font3.setBold(true);
        eta_st_1_1->setFont(font3);
        eta_st_1_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_1_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_2_1 = new QLabel(page_1);
        eta_st_2_1->setObjectName("eta_st_2_1");
        eta_st_2_1->setGeometry(QRect(560, 860, 400, 50));
        eta_st_2_1->setFont(font3);
        eta_st_2_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_2_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_3_1 = new QLabel(page_1);
        eta_st_3_1->setObjectName("eta_st_3_1");
        eta_st_3_1->setGeometry(QRect(960, 860, 400, 50));
        eta_st_3_1->setFont(font3);
        eta_st_3_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_3_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_4_1 = new QLabel(page_1);
        eta_st_4_1->setObjectName("eta_st_4_1");
        eta_st_4_1->setGeometry(QRect(1360, 860, 400, 50));
        eta_st_4_1->setFont(font3);
        eta_st_4_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_4_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_1 = new QLabel(page_1);
        eta_time_1_1->setObjectName("eta_time_1_1");
        eta_time_1_1->setGeometry(QRect(160, 950, 400, 50));
        eta_time_1_1->setFont(font3);
        eta_time_1_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_2_1 = new QLabel(page_1);
        eta_time_2_1->setObjectName("eta_time_2_1");
        eta_time_2_1->setGeometry(QRect(560, 950, 400, 50));
        eta_time_2_1->setFont(font3);
        eta_time_2_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_2_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_3_1 = new QLabel(page_1);
        eta_time_3_1->setObjectName("eta_time_3_1");
        eta_time_3_1->setGeometry(QRect(960, 950, 400, 50));
        eta_time_3_1->setFont(font3);
        eta_time_3_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_3_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_4_1 = new QLabel(page_1);
        eta_time_4_1->setObjectName("eta_time_4_1");
        eta_time_4_1->setGeometry(QRect(1360, 950, 400, 50));
        eta_time_4_1->setFont(font3);
        eta_time_4_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_4_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        background_2 = new QLabel(page_2);
        background_2->setObjectName("background_2");
        background_2->setGeometry(QRect(0, 0, 1920, 1080));
        background_2->setStyleSheet(QString::fromUtf8("image: url(:/img/img/2.png);"));
        temp_2 = new QLabel(page_2);
        temp_2->setObjectName("temp_2");
        temp_2->setGeometry(QRect(1015, 40, 96, 71));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bahnschrift")});
        font4.setPointSize(50);
        font4.setBold(true);
        temp_2->setFont(font4);
        temp_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temp_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        day_date_2 = new QLabel(page_2);
        day_date_2->setObjectName("day_date_2");
        day_date_2->setGeometry(QRect(1200, 30, 551, 46));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bahnschrift")});
        font5.setPointSize(28);
        font5.setBold(false);
        day_date_2->setFont(font5);
        day_date_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        day_date_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        time_2 = new QLabel(page_2);
        time_2->setObjectName("time_2");
        time_2->setGeometry(QRect(1200, 65, 551, 61));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setPointSize(42);
        font6.setBold(true);
        time_2->setFont(font6);
        time_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        time_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pict_2 = new QLabel(page_2);
        pict_2->setObjectName("pict_2");
        pict_2->setGeometry(QRect(100, 260, 521, 521));
        pict_2->setStyleSheet(QString::fromUtf8("border-radius: 260px;\n"
"background-image: url(:/img/img/nailong.jpg);"));
        name_2 = new QLabel(page_2);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(60, 800, 601, 61));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Bahnschrift")});
        font7.setPointSize(27);
        font7.setBold(true);
        name_2->setFont(font7);
        name_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        phone_2 = new QLabel(page_2);
        phone_2->setObjectName("phone_2");
        phone_2->setGeometry(QRect(60, 855, 601, 61));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Bahnschrift")});
        font8.setPointSize(30);
        font8.setBold(true);
        phone_2->setFont(font8);
        phone_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        phone_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_st_1_2 = new QLabel(page_2);
        eta_st_1_2->setObjectName("eta_st_1_2");
        eta_st_1_2->setGeometry(QRect(715, 570, 491, 41));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Bahnschrift")});
        font9.setPointSize(22);
        font9.setBold(true);
        eta_st_1_2->setFont(font9);
        eta_st_1_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_1_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_2_2 = new QLabel(page_2);
        eta_st_2_2->setObjectName("eta_st_2_2");
        eta_st_2_2->setGeometry(QRect(715, 645, 491, 41));
        eta_st_2_2->setFont(font9);
        eta_st_2_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_2_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_3_2 = new QLabel(page_2);
        eta_st_3_2->setObjectName("eta_st_3_2");
        eta_st_3_2->setGeometry(QRect(715, 725, 491, 41));
        eta_st_3_2->setFont(font9);
        eta_st_3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_3_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        eta_st_4_2 = new QLabel(page_2);
        eta_st_4_2->setObjectName("eta_st_4_2");
        eta_st_4_2->setGeometry(QRect(715, 805, 491, 41));
        eta_st_4_2->setFont(font9);
        eta_st_4_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_st_4_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        curr_st_2 = new QLabel(page_2);
        curr_st_2->setObjectName("curr_st_2");
        curr_st_2->setGeometry(QRect(630, 395, 576, 41));
        curr_st_2->setFont(font8);
        curr_st_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        curr_st_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        nama_ka_2 = new QLabel(page_2);
        nama_ka_2->setObjectName("nama_ka_2");
        nama_ka_2->setGeometry(QRect(840, 195, 976, 41));
        nama_ka_2->setFont(font8);
        nama_ka_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        nama_ka_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        relasi_ka_2 = new QLabel(page_2);
        relasi_ka_2->setObjectName("relasi_ka_2");
        relasi_ka_2->setGeometry(QRect(840, 240, 976, 41));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Bahnschrift")});
        font10.setPointSize(22);
        font10.setBold(false);
        relasi_ka_2->setFont(font10);
        relasi_ka_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        relasi_ka_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        eta_time_1_2 = new QLabel(page_2);
        eta_time_1_2->setObjectName("eta_time_1_2");
        eta_time_1_2->setGeometry(QRect(1335, 570, 121, 41));
        eta_time_1_2->setFont(font9);
        eta_time_1_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_2_2 = new QLabel(page_2);
        eta_time_2_2->setObjectName("eta_time_2_2");
        eta_time_2_2->setGeometry(QRect(1335, 645, 121, 41));
        eta_time_2_2->setFont(font9);
        eta_time_2_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_2_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_3_2 = new QLabel(page_2);
        eta_time_3_2->setObjectName("eta_time_3_2");
        eta_time_3_2->setGeometry(QRect(1335, 725, 121, 41));
        eta_time_3_2->setFont(font9);
        eta_time_3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_3_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_4_2 = new QLabel(page_2);
        eta_time_4_2->setObjectName("eta_time_4_2");
        eta_time_4_2->setGeometry(QRect(1335, 805, 121, 41));
        eta_time_4_2->setFont(font9);
        eta_time_4_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_4_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_3 = new QLabel(page_2);
        eta_time_1_3->setObjectName("eta_time_1_3");
        eta_time_1_3->setGeometry(QRect(1500, 570, 121, 41));
        eta_time_1_3->setFont(font9);
        eta_time_1_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_4 = new QLabel(page_2);
        eta_time_1_4->setObjectName("eta_time_1_4");
        eta_time_1_4->setGeometry(QRect(1500, 645, 121, 41));
        eta_time_1_4->setFont(font9);
        eta_time_1_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_5 = new QLabel(page_2);
        eta_time_1_5->setObjectName("eta_time_1_5");
        eta_time_1_5->setGeometry(QRect(1500, 725, 121, 41));
        eta_time_1_5->setFont(font9);
        eta_time_1_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_6 = new QLabel(page_2);
        eta_time_1_6->setObjectName("eta_time_1_6");
        eta_time_1_6->setGeometry(QRect(1500, 805, 121, 41));
        eta_time_1_6->setFont(font9);
        eta_time_1_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_7 = new QLabel(page_2);
        eta_time_1_7->setObjectName("eta_time_1_7");
        eta_time_1_7->setGeometry(QRect(1655, 570, 121, 41));
        eta_time_1_7->setFont(font9);
        eta_time_1_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_8 = new QLabel(page_2);
        eta_time_1_8->setObjectName("eta_time_1_8");
        eta_time_1_8->setGeometry(QRect(1655, 645, 121, 41));
        eta_time_1_8->setFont(font9);
        eta_time_1_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_9 = new QLabel(page_2);
        eta_time_1_9->setObjectName("eta_time_1_9");
        eta_time_1_9->setGeometry(QRect(1655, 725, 121, 41));
        eta_time_1_9->setFont(font9);
        eta_time_1_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        eta_time_1_10 = new QLabel(page_2);
        eta_time_1_10->setObjectName("eta_time_1_10");
        eta_time_1_10->setGeometry(QRect(1655, 805, 121, 41));
        eta_time_1_10->setFont(font9);
        eta_time_1_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        eta_time_1_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tracking KA", nullptr));
        background_1->setText(QString());
        speed_1->setText(QCoreApplication::translate("MainWindow", "300 kph", nullptr));
        time_1->setText(QCoreApplication::translate("MainWindow", "08:36", nullptr));
        day_1->setText(QCoreApplication::translate("MainWindow", "Minggu", nullptr));
        date_1->setText(QCoreApplication::translate("MainWindow", "28 September 2025", nullptr));
        eta_st_1_1->setText(QCoreApplication::translate("MainWindow", "WATES", nullptr));
        eta_st_2_1->setText(QCoreApplication::translate("MainWindow", "KUTOARJO", nullptr));
        eta_st_3_1->setText(QCoreApplication::translate("MainWindow", "KEBUMEN", nullptr));
        eta_st_4_1->setText(QCoreApplication::translate("MainWindow", "GOMBONG", nullptr));
        eta_time_1_1->setText(QCoreApplication::translate("MainWindow", "07:23", nullptr));
        eta_time_2_1->setText(QCoreApplication::translate("MainWindow", "07:51", nullptr));
        eta_time_3_1->setText(QCoreApplication::translate("MainWindow", "08:14", nullptr));
        eta_time_4_1->setText(QCoreApplication::translate("MainWindow", "08:32", nullptr));
        background_2->setText(QString());
        temp_2->setText(QCoreApplication::translate("MainWindow", "28", nullptr));
        day_date_2->setText(QCoreApplication::translate("MainWindow", "Minggu, 28 September 2025", nullptr));
        time_2->setText(QCoreApplication::translate("MainWindow", "08:36", nullptr));
        pict_2->setText(QString());
        name_2->setText(QCoreApplication::translate("MainWindow", "RUDI AGASTARA", nullptr));
        phone_2->setText(QCoreApplication::translate("MainWindow", "081234567890", nullptr));
        eta_st_1_2->setText(QCoreApplication::translate("MainWindow", "WATES", nullptr));
        eta_st_2_2->setText(QCoreApplication::translate("MainWindow", "KUTOARJO", nullptr));
        eta_st_3_2->setText(QCoreApplication::translate("MainWindow", "KEBUMEN", nullptr));
        eta_st_4_2->setText(QCoreApplication::translate("MainWindow", "GOMBONG", nullptr));
        curr_st_2->setText(QCoreApplication::translate("MainWindow", "YOGYAKARTA", nullptr));
        nama_ka_2->setText(QCoreApplication::translate("MainWindow", "KA 109 FAJAR UTAMA YOGYAKARTA", nullptr));
        relasi_ka_2->setText(QCoreApplication::translate("MainWindow", "YOGYAKARTA (YK) - PASAR SENEN (PSE)", nullptr));
        eta_time_1_2->setText(QCoreApplication::translate("MainWindow", "07:23", nullptr));
        eta_time_2_2->setText(QCoreApplication::translate("MainWindow", "07:51", nullptr));
        eta_time_3_2->setText(QCoreApplication::translate("MainWindow", "08:14", nullptr));
        eta_time_4_2->setText(QCoreApplication::translate("MainWindow", "08:32", nullptr));
        eta_time_1_3->setText(QCoreApplication::translate("MainWindow", "07:25", nullptr));
        eta_time_1_4->setText(QCoreApplication::translate("MainWindow", "07:53", nullptr));
        eta_time_1_5->setText(QCoreApplication::translate("MainWindow", "08:16", nullptr));
        eta_time_1_6->setText(QCoreApplication::translate("MainWindow", "08:34", nullptr));
        eta_time_1_7->setText(QCoreApplication::translate("MainWindow", "+00:02", nullptr));
        eta_time_1_8->setText(QCoreApplication::translate("MainWindow", "+00:02", nullptr));
        eta_time_1_9->setText(QCoreApplication::translate("MainWindow", "+00:02", nullptr));
        eta_time_1_10->setText(QCoreApplication::translate("MainWindow", "+00:02", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
