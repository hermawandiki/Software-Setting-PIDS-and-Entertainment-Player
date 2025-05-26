/*!
 * Author   : Diki Hermawan
 * Company  : PT. Rekaindo Global Jasa Engineer Team X Mechatronics PENS
 * Date     : 21/05/2025
 * Contact  : hermawansocmed@gmail.com
 * Note     : -
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QCloseEvent>
#include <QShortcut>
#include <QDebug>
#include <QTimer>
#include <QLabel>
#include <QLocale>
#include <QScreen>
#include <QWindow>
#include <QStackedWidget>
#include <QVideoWidget>
#include <QAudioOutput>
#include <QMediaDevices>
#include <QMediaPlayer>
#include <QVBoxLayout>
#include <QPixmap>
#include <QPainter>
#include <QPainterPath>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>
#include <QDir>
#include <QFile>
#include <QPixmap>
#include <QFileInfo>
#include <QDateTime>
#include <QStringList>
#include <QScrollBar>
#include <QSet>
#include <QDirIterator>
#include <QDesktopServices>
#include <QUrl>
#include <QVector>
#include <QVariant>
#include <QQuickItem>
#include <QGraphicsVideoItem>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QFileDialog>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    // Constructor Mainwindow
    Ui::MainWindow *ui;

    // Media Player
    QGraphicsVideoItem  *video;
    QMediaPlayer        *player;
    QAudioOutput        *audio;

    // External Screen
    QMainWindow         *screen2;
    QStackedWidget      *stackedWidget2;

    // Picture Overlay
    QLabel              *image;
    QGraphicsPixmapItem *pauseOverlay = nullptr;

    // Global Variable
    QList<QString> entertainment;   // list entertainment
    QTimer *timer, *timerSerial;  // main loop timer
    QLabel *label;  // label for running text
    int index,
        indexVideo,
        counter;
    QString videoPath,
            noka,   // nomor KA
            naka,   // nama KA
            reka;   // rute KA
    QDate date;
    QTime time;
    bool otw = false;   // flag Dalam Perjalanan

    // Untuk GPS
    QSerialPort *serialPort;
    QString currentSt   = "N/A",
            prevSt      = "N/A",
            nextSt      = "N/A",
            latitudeNow = "N,A",
            longitudeNow= "N/A",
            latitudeSt  = "N,A",
            longitudeSt = "N/A",
            speed       = "N/A";
    struct dataStasiun {
        QString st;
        QString lat;
        QString lon;
    };
    QVector<dataStasiun> gpsStasiun;    // list data gps stasiun
    double distance = 0.0;

    // Untuk GAPEKA
    QString arrival   = "N/A",
            departure = "N/A",
            delay     = "N/A";
    struct dataGapeka {
        QString st;     // nama stasiun
        QString arr;    // time arrival
        QString dep;    // time departure
    };
    QVector<dataGapeka> currentGapeka;  // list perhentian kereta

signals:
    // Untuk Maps GPS
    void setCenter(QVariant, QVariant);
    void addMarker(QVariant, QVariant);

private slots:
    // GPS Functions
    bool parseRMC(const QString &nmea, QString &lat, QString &lon, QString &speed);
    void readGPSData();
    double haversine(double lat1, double lon1, double lat2, double lon2);
    QString readStasiun(double currentLat, double currentLon);
    void tryConnectGPS(); // rev dh 20/05/2025
    void handleGPSError(QSerialPort::SerialPortError error); // rev dh 20/05/2025
    void setStatusGPS(bool state);

    // GAPEKA Functions
    void updateETA(const QString& nowSt);
    QString calculateDelay(const QTime &currentTime, const QTime &etaTime);
    void updateTIME(const QString& nowSt);
    void init_gapeka_config(QString filePath);

    // Main System
    void mainLoop();

    // User Functions
    void exitApplication();
    void logout();
    QPixmap roundedPixmap(const QPixmap &src, int size, int radius); // rev dh 20/05/2025
    void addPicture(const QString &filepath);
    void showRunningText(const QString &text, QWidget *parent);
    void clearAllFocus();

    // UI Slots
    void on_logout_clicked();                           // btn logout
    void on_login_button_pressed();                     // btn login
    void on_toggle_password_pressed();                  // show password
    void on_toggle_password_released();                 // hide password
    void on_send_text_clicked();                        // send running text
    void on_send_csot_clicked();                        // send csot data
    void on_btn_play_clicked();                         // play video
    void on_btn_pause_clicked();                        // pause video
    void on_list_entertainment_itemSelectionChanged();  // play selected video
    void on_slider_volume_valueChanged(int value);      // changed volume
    void on_btn_bypass_clicked(bool checked);           // bypass GPS
    void on_browse_gapeka_clicked();                    // browse GAPEKA
    void on_send_gapeka_clicked();                      // send GAPEKA
    void on_exit_button_clicked();                      // btn exit app
    void on_curr_temp_textChanged(const QString &arg1); // update temperature value
};
#endif // MAINWINDOW_H

// END OF PROGRAM
// Created by PT. Rekaindo GLobal Jasa Engineer Team and Mechatronics PENS
// Copyright 2025
