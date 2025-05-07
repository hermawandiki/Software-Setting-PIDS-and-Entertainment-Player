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

#define GAPEKA  1
#define STASIUN 0

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
    Ui::MainWindow *ui;
    // Video
    QGraphicsVideoItem  *video;
    QMediaPlayer        *player;
    QAudioOutput        *audio;
    QMainWindow         *screen2;
    QStackedWidget      *stackedWidget2;

    // Picture
    QLabel              *image;
    QGraphicsPixmapItem *pauseOverlay = nullptr;

    // Global Variable
    QList<QString> entertainment;
    QTimer *timer;
    QLabel *label;
    int index,
        indexVideo,
        counter;
    QString videoPath,
            noka,
            naka,
            reka;
    QDate date;
    QTime time;
    bool otw = false;

    // GPS   GPS   GPS   GPS   GPS   GPS   GPS   GPS   GPS   GPS
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
    QVector<dataStasiun> gpsStasiun;
    double distance = 0.0;

    // GAPEKA   GAPEKA   GAPEKA   GAPEKA   GAPEKA   GAPEKA
    QString arrival   = "N/A",
            departure = "N/A",
            delay     = "N/A";
    struct dataGapeka {
        QString st;
        QString arr;
        QString dep;
    };
    QVector<dataGapeka> currentGapeka;

signals:
    void setCenter(QVariant, QVariant);
    void addMarker(QVariant, QVariant);

private slots:
    // GPS   GPS   GPS   GPS   GPS   GPS   GPS   GPS   GPS   GPS
    bool parseRMC(const QString &nmea, QString &lat, QString &lon, QString &speed);
    void readGPSData();
    double haversine(double lat1, double lon1, double lat2, double lon2);
    // QString cariStasiunTerdekat(double currentLat, double currentLon);

    // GAPEKA   GAPEKA   GAPEKA   GAPEKA   GAPEKA   GAPEKA
    void updateETA(const QString& nowSt);
    QString calculateDelay(const QTime &currentTime, const QTime &etaTime);
    void updateTIME(const QString& nowSt);
    void init_gapeka_config(QString filePath);

    // Main System   Main System   Main System   Main System
    void mainLoop();

    // UI Slots   UI Slots   UI Slots   UI Slots   UI Slots
    void exitApplication();
    void logout();
    QPixmap roundedPixmap(const QPixmap &src, int radius);
    void showRunningText(const QString &text, QWidget *parent);
    void addPicture(const QString &filepath);

    void on_logout_clicked();
    void on_login_button_pressed();
    void on_toggle_password_pressed();
    void on_toggle_password_released();
    void on_send_text_clicked();
    void on_send_csot_clicked();
    void on_btn_play_clicked();
    void on_btn_pause_clicked();
    void on_list_entertainment_itemSelectionChanged();
    void on_slider_volume_valueChanged(int value);
    void on_btn_bypass_clicked(bool checked);
    void on_browse_gapeka_clicked();
    void on_send_gapeka_clicked();
    void on_exit_button_clicked();
};
#endif // MAINWINDOW_H
