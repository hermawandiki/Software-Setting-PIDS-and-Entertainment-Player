/*!
 * Author   : Diki Hermawan
 * Company  : PT. Rekaindo Global Jasa Engineer Team X Mechatronics PENS
 * Date     : 21/05/2025
 * Contact  : hermawansocmed@gmail.com
 * Note     : -
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Setup Main Screen
    ui->setupUi(this);
    this->move(0, 0);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    // External Screen
    screen2 = new QMainWindow();
    screen2->setGeometry(0,0,1920,1080);
    screen2->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    screen2->setWindowTitle("Live Tracking KA - Extended Screen");

    // Search external screen
    QList<QScreen*> screens = QGuiApplication::screens();
    if (screens.size() > 1) {  // jika screen terdeteksi lebih dari 1
        QScreen *externalScreen = screens.at(1);
        QRect geometry = externalScreen->geometry();
        screen2->setGeometry(geometry);
    } else {
        screen2->setGeometry(QGuiApplication::primaryScreen()->geometry());
    }

    // Move page CSOT, VIDEO, and MAPS to other stackedWidget for external screen
    stackedWidget2 = new QStackedWidget(screen2);
    stackedWidget2->addWidget(ui->stackedWidget->widget(2));    // Page VIDEO
    stackedWidget2->addWidget(ui->stackedWidget->widget(2));    // Page CSOT
    stackedWidget2->addWidget(ui->stackedWidget->widget(2));    // Page MAPS
    screen2->setCentralWidget(stackedWidget2);
    screen2->show();

    // Maps Function - Page SETTING
    ui->map->setSource(QUrl(QStringLiteral("qrc:///img/map.qml")));
    ui->map->show();
    auto obj = ui->map->rootObject();
    connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
    connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));

    // Maps Function - Page MAPS
    ui->map2->setSource(QUrl(QStringLiteral("qrc:///img/map.qml")));
    ui->map2->show();
    auto obj2 = ui->map2->rootObject();
    connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj2, SLOT(setCenter(QVariant, QVariant)));
    connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj2, SLOT(addMarker(QVariant, QVariant)));

    // Update Maps
    emit setCenter(-7.163410, 111.885800);
    emit addMarker(-7.163410, 111.885800);

    // Shortcuts
    QShortcut *exitShortcut = new QShortcut(QKeySequence(Qt::Key_Escape), this);
    connect(exitShortcut, &QShortcut::activated, this, &MainWindow::exitApplication);
    QShortcut *focusShortcut = new QShortcut(QKeySequence(Qt::Key_Return), this);
    connect(focusShortcut, &QShortcut::activated, this, &MainWindow::clearAllFocus);

    // QGraphicsScene for Video Player
    QGraphicsScene *scene = new QGraphicsScene(screen2);
    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(Qt::black);

    // QMediaPlayer dan QGraphicsVideoItem
    player = new QMediaPlayer(screen2);
    video  = new QGraphicsVideoItem;
    player->setVideoOutput(video);
    scene->addItem(video);

    // Setting Frame Video
    video->setSize(QSizeF(1920, 1080));
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setFrameStyle(QFrame::NoFrame);
    ui->graphicsView->setAlignment(Qt::AlignCenter);

    // Audio Setup - Init to 50%
    audio = new QAudioOutput();
    audio->setVolume(0.5);
    ui->slider_volume->setSliderPosition(50);
    player->setAudioOutput(audio);

    // Background KAI when video paused
    pauseOverlay = new QGraphicsPixmapItem(QPixmap(":/img/img/KAI.png").scaled(1920, 1080, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    pauseOverlay->setZValue(1);
    pauseOverlay->setVisible(false);
    scene->addItem(pauseOverlay);

    // List Video Entertainment
    QDir dir("C:/DataBasePIDS/FileEntertainment/");
    if (!dir.exists()) return;
    entertainment = dir.entryList(QDir::Files);
    if (entertainment.isEmpty()) return;
    ui->list_entertainment->clear();
    for (const QString &fileName : entertainment) {
        QString fullPath = dir.absoluteFilePath(fileName);
        ui->list_entertainment->addItem(fullPath);
    }
    // Play video for first index
    indexVideo = 0;
    videoPath = ui->list_entertainment->item(indexVideo)->text();
    ui->list_entertainment->setCurrentRow(indexVideo);
    player->setSource(QUrl::fromLocalFile(videoPath));
    player->play();

    // Looping Video Entertainment
    connect(player, &QMediaPlayer::mediaStatusChanged, this, [=](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::EndOfMedia) {
            indexVideo++;
            if (indexVideo >= entertainment.size()) indexVideo = 0;

            videoPath = ui->list_entertainment->item(indexVideo)->text();
            player->setSource(QUrl::fromLocalFile(videoPath));
            player->play();
        }
    });

    // Load List Stasiun
    QFile file("C:/DataBasePIDS/Stasiun/DataStasiun2.csv");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        bool firstLine = true;
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (firstLine) { firstLine = false; continue; }
            QStringList parts = line.split(';');
            if (parts.size() >= 3) {
                gpsStasiun.append(dataStasiun{ parts[0], parts[1], parts[2] });
                ui->list_stasiun->addItem(parts[0]);
            }
        }
        file.close();
    }
    ui->list_stasiun->setEnabled(false);
    // when BYPASS GPS
    connect(ui->list_stasiun, &QComboBox::currentIndexChanged, this, [=](int index) {
        index = index - 1;
        if (index >= 0 && index < gpsStasiun.size()) {
            currentSt = gpsStasiun[index].st;
            latitudeNow  = gpsStasiun[index].lat;
            longitudeNow = gpsStasiun[index].lon;
            latitudeSt  = gpsStasiun[index].lat;
            longitudeSt = gpsStasiun[index].lon;
            // qDebug() << gpsStasiun[index].st << "   " << gpsStasiun[index].lat << "   " << longitude;
        }
    });

/*
    // Load List GAPEKA
    QString path = "C:/DataBasePIDS/GAPEKA/";
    QDirIterator it(path, QDir::Dirs | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);

    while (it.hasNext()) {
        it.next();
        QString folderName = it.fileName();
        ui->list_gapeka->addItem(folderName);
    }
*/

    //rev mb dew 16/5/2025====================================
    QString pathGAPEKA = "C:/DataBasePIDS/GAPEKA";
    QDir dir_path(pathGAPEKA);
    QStringList filters;
    filters << "*";
    dir_path.setNameFilters(filters);

    QStringList keretaList = dir_path.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    ui->list_gapeka->addItems(keretaList);
    //end rev mb dew 16/5/2025==================================

    // Place Holder Text
    ui->csot_id->setPlaceholderText("your id here...");
    ui->csot_name->setPlaceholderText("your name here...");
    ui->csot_contact->setPlaceholderText("your phone here...");

    ui->username->setPlaceholderText("username here...");
    ui->password->setPlaceholderText("password here...");
    ui->text_to_run->setPlaceholderText("entry text here...");

    // Serial GPS
    serialPort = new QSerialPort(this);
    serialPort->setPortName("COM8");    // COM8
    serialPort->setBaudRate(QSerialPort::Baud4800); // Baudrate 4800
    serialPort->open(QIODevice::ReadOnly);

    //begin rev dh 20/5/2025====================================
    connect(serialPort, &QSerialPort::errorOccurred, this, &MainWindow::handleGPSError);
    timerSerial = new QTimer(this);
    timerSerial->setInterval(1000);
    connect(timerSerial, &QTimer::timeout, this, &MainWindow::tryConnectGPS);
    tryConnectGPS();
    //end rev dh 20/5/2025====================================

    // Timer Main Loop
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::mainLoop);
    timer->start(500);

    // Running Text
    // showText("Prototipe PIDS untuk kereta lama dengan tampilan peta live tracking oleh Mahasiswa Kerja Praktik PENS Divisi Teknologi PT. Rekaindo Global Jasa, Madiun - Surabaya - Bojonegoro - DH25", screen2);

    // Init Last Config
    QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
    if (QFile::exists(settingsPath)) {
        QSettings settings(settingsPath, QSettings::IniFormat);
        ui->csot_id->setText(settings.value("CSOT/ID", "").toString());
        ui->csot_name->setText(settings.value("CSOT/Nama", "").toString());
        ui->csot_contact->setText(settings.value("CSOT/Kontak", "").toString());
        on_send_csot_clicked();
        // ui->csot_id->clear();
        // ui->csot_name->clear();
        // ui->csot_contact->clear();

        ui->temp_2->setText(ui->curr_temp->text());
        showRunningText(settings.value("RUNNING_TEXT/Text", "").toString(), screen2);

        QString filePath = "C:/DataBasePIDS/GAPEKA/" + settings.value("GAPEKA/NamaKA","").toString().toUpper() + "/" + settings.value("GAPEKA/NomorKA","").toString() + "," + settings.value("GAPEKA/NamaKA","").toString() + "," + settings.value("GAPEKA/RelasiKA","").toString() + ".csv";
        init_gapeka_config(filePath);
    }

    // Init Page & Video
    index = 0;
    counter = 0;

    // First display is LOGIN Page
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    // Destructor Serial Port
    if (serialPort && serialPort->isOpen())
        serialPort->close();
    delete serialPort;

    delete ui;
}

bool flagUpdateTime = false;
void MainWindow::mainLoop() // MAIN SYSTEM
{
    // Begin of - Tampilan kedip pada jam
    static bool toggleColon = true;
    QLocale::setDefault(QLocale(QLocale::Indonesian, QLocale::Indonesia));
    date = QDate::currentDate();
    time = QTime::currentTime();
    QString timeFormat = toggleColon ? "hh : mm" : "hh   mm";
    ui->date_1      ->setText(date.toString("dd MMM yyyy"));
    ui->day_date_2  ->setText(date.toString("dddd, dd MMMM yyyy"));
    ui->time_1      ->setText(time.toString(timeFormat));
    ui->time_2      ->setText(time.toString(timeFormat) + " WIB");
    ui->day_date_0  ->setText(date.toString("dddd, dd MMMM yyyy"));
    ui->time_0      ->setText(time.toString("hh:mm:ss WIB"));
    toggleColon = !toggleColon;
    // End of - Tampilan kedip pada jam


    // Begin of - Switch Page VIDEO then CSOT then MAPS then looping
    stackedWidget2->setCurrentIndex(index);
    counter++;
    if(counter >= 10) { // 10 karena tick increment setiap 500ms, jadi 10*500ms = 5000ms (5 detik)
        index++; // ganti index tampilan
        if(index>2) index=0;
        counter = 0; // reset nilai counter
    }
    // End of - Switch Page VIDEO then CSOT then MAPS then looping


    // Begin of - Update GPS
    if(!ui->btn_bypass->isChecked()) {
        readGPSData();
        currentSt = readStasiun(latitudeNow.replace(",", ".").toDouble(), longitudeNow.replace(",", ".").toDouble());
    }
    ui->curr_st         ->setText(currentSt);
    ui->curr_st_0       ->setText(currentSt);
    ui->curr_st_2       ->setText(currentSt);
    ui->gps_latitude    ->setText(latitudeNow);
    ui->gps_longitude   ->setText(longitudeNow);
    ui->speed           ->setText(speed + " kph");
    ui->speed_1         ->setText(speed + " kph");
    emit setCenter(latitudeNow.replace(",", ".").toDouble(), longitudeNow.replace(",", ".").toDouble());
    emit addMarker(latitudeNow.replace(",", ".").toDouble(), longitudeNow.replace(",", ".").toDouble());
    // End of - Update GPS


    //begin rev dh 20/5/2025====================================
    if (currentSt != prevSt) {
        updateETA(currentSt);
        otw = false;
        flagUpdateTime = false;
        ui->berangkat->setChecked(false);
    }
    prevSt = currentSt;
    // ketika sampai stasiun, tampilan waktu departure mengikuti jam sekarang
    if (!otw) {
        ui->real_dep->setText(time.toString("hh:mm:ss"));
    } else {
        // ketika lepas stasiun, update waktu berangkat
        if (!flagUpdateTime) {
            updateTIME(currentSt);
            flagUpdateTime = true;
        }
    }
    // kondisi untuk lepas stasiun
    if ((speed.toDouble()>=2.0 && distance>=0.5) ||  ui->berangkat->isChecked()) {
        otw = true;
    }
    // qDebug() << speed.toDouble() << distance;
    //end rev dh 20/5/2025====================================

/*
    // Begin of - Update ETA
    if (currentSt != prevSt) {
        updateETA(currentSt);
        otw = false;

        // kalau sudah otw, cari GPS nextSt
        if(currentSt == "Dalam Perjalanan"){
            otw = true;
            for(const auto& s : gpsStasiun){
                if(s.st == nextSt){
                    latitudeSt  = s.lat;
                    longitudeSt = s.lon;
                    qDebug() << nextSt << latitudeSt << longitudeSt;
                }
            }
        } else {
            // awalnya CurrentSt disimpan, tapi sekarang ga perlu
            // QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
            // QSettings settings(settingsPath, QSettings::IniFormat);
            // settings.setValue("GAPEKA/CurrentSt", currentSt);
        }
    }
    prevSt = currentSt;

    // Calculate distance now and St
    distance = haversine(latitudeNow.replace(",", ".").toDouble(),
                         longitudeNow.replace(",", ".").toDouble(),
                         latitudeSt.replace(",", ".").toDouble(),
                         longitudeSt.replace(",", ".").toDouble());
    qDebug() << distance;

    // jika lebih dari 1 km maka sudah dianggap Dalam Perjalanan
    if (distance > 1.0) {
        currentSt = "Dalam Perjalanan";
        otw = true;
    }

    // jika Dalam Perjalanan lalu jarak kurang dari 1 km maka sudah dianggap masuk nextSt
    if (currentSt == "Dalam Perjalanan" && distance < 1.0) {
        currentSt = nextSt;
        otw = false;
    }

    // ketika sampai stasiun time real departure tampil jam sekarang hingga berangkat
    if (!otw)
        ui->real_dep->setText(time.toString("hh:mm:ss"));
    // End of - Update ETA

    // qDebug() << currentSt << " " << latitude << " " << longitude;
*/
}


/////////////////////////////////////////////////      USER CODE BEGIN User Functions    /////////////////////////////////////////////////

// begin rev dh 20/05/2025==================================
QPixmap MainWindow::roundedPixmap(const QPixmap &src, int size, int radius)  // MEMBUAT GAMBAR CSOT
{
    if (src.isNull()) {
        QMessageBox::warning(nullptr, "Error", "Gambar tidak ditemukan atau gagal dimuat!");
        return QPixmap();
    }

    // Resize dan crop ke persegi (crop tengah jika perlu)
    QPixmap scaled = src.scaled(size, size, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    int x = (scaled.width() - size) / 2;
    int y = (scaled.height() - size) / 2;
    QPixmap cropped = scaled.copy(x, y, size, size);

    // Buat canvas transparan dan apply rounded mask
    QPixmap rounded(size, size);
    rounded.fill(Qt::transparent);

    QPainter painter(&rounded);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    QPainterPath path;
    path.addRoundedRect(QRect(0, 0, size, size), radius, radius);
    painter.setClipPath(path);
    painter.drawPixmap(0, 0, cropped);

    return rounded;
}

void MainWindow::addPicture(const QString &baseFilePath) // MENAMPILKAN FOTO CSOT
{
    QStringList extensions = {".jpg", ".png", ".jpeg", ".bmp"};
    QString foundFile;

    for (const QString &ext : extensions) {
        QString fullPath = baseFilePath + ext;
        if (QFile::exists(fullPath)) {
            foundFile = fullPath;
            break;
        }
    }

    QPixmap pixmap(foundFile);
    if (pixmap.isNull()) {
        return;
    }

    QPixmap roundedImage = roundedPixmap(pixmap, 521, 50);
    ui->pict_2->setPixmap(roundedImage.scaled(521, 521, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
// end rev dh 20/05/2025==================================

void MainWindow::showRunningText(const QString &text, QWidget *parent)  // MENAMPILKAN TEKS BERJALAN
{
    const QString separator = "   |   ";
    for (QObject* child : parent->children()) {
        QLabel* label = qobject_cast<QLabel*>(child);
        if (label) {
            label->deleteLater();
        }
    }

    QLabel *label = new QLabel(parent);
    // end rev dh 21/05/2025==================================
    label->setStyleSheet("color: white");
    label->setFont(QFont("Bahnschrift", 22, QFont::Bold));
    // end rev dh 21/05/2025==================================

    QFontMetrics fontMetrics(label->font());
    int textWidth = fontMetrics.horizontalAdvance(text + separator);

    int length = (parent->width() + textWidth) / textWidth + 1;
    QString repeatedText;
    for (int i = 0; i < length; ++i) {
        repeatedText += text;
        if (i < length - 1) {
            repeatedText += separator;
        }
    }

    label->setText(repeatedText);
    label->setGeometry(0, 1010, textWidth * length, 70);
    label->show();

    QPropertyAnimation *animation = new QPropertyAnimation(label, "pos", label);
    animation->setDuration(textWidth * 10);
    animation->setStartValue(QPoint(0, 1010));
    animation->setEndValue(QPoint(-textWidth, 1010));
    animation->setLoopCount(-1);
    animation->start();
}

void MainWindow::exitApplication()  // KELUAR APLIKASI
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(
        this,
        "Konfirmasi Keluar",
        "Apakah Anda yakin ingin keluar dari aplikasi?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}

void MainWindow::logout()   // LOGOUT DARI PAGE SETTING
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->username->clear();
    ui->password->clear();
}

void MainWindow::clearAllFocus()    // HILANGKAN SEMUA FOKUS INPUT
{
    ui->username->clearFocus();
    ui->password->clearFocus();
    ui->curr_temp->clearFocus();
    ui->text_to_run->clearFocus();
    ui->csot_id->clearFocus();
    ui->csot_name->clearFocus();
    ui->csot_contact->clearFocus();
    ui->temp_2->setText(ui->curr_temp->text());
    // qDebug() << ui->curr_temp->text();
}

/////////////////////////////////////////////////      USER CODE END User Functions    /////////////////////////////////////////////////




/////////////////////////////////////////////////      USER CODE BEGIN UI Slots    /////////////////////////////////////////////////

void MainWindow::on_logout_clicked()    // LOGOUT
{
    logout();
}

void MainWindow::on_login_button_pressed()  // LOGIN
{
    // masuk page SETTING ketika berhasil
    if(ui->username->text() == "admin" && ui->password->text() == "kai2025") {
        ui->stackedWidget->setCurrentIndex(1);
    } else {
        QMessageBox::warning(nullptr, "Error", "Username/Password tidak sesuai");
    }
}

void MainWindow::on_toggle_password_pressed()   // TAMPILKAN PASSWORD
{
    ui->password->setEchoMode(QLineEdit::Normal); // tampilkan teks
}

void MainWindow::on_toggle_password_released()  // SEMBUNYIKAN PASSWORD
{
    ui->password->setEchoMode(QLineEdit::Password); // sembunyikan teks
}

void MainWindow::on_send_text_clicked() // KIRIM TEKS BERJALAN
{
    showRunningText(ui->text_to_run->text(), screen2);
    // simpan settingan teks berjalan
    QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
    QSettings settings(settingsPath, QSettings::IniFormat);
    settings.setValue("RUNNING_TEXT/Text", ui->text_to_run->text());
}

void MainWindow::on_send_csot_clicked() // KIRIM DATA CSOT
{
    ui->name_2->setText(ui->csot_name->text().toUpper());
    ui->phone_2->setText(ui->csot_contact->text());
    addPicture("C:/DataBasePIDS/FotoCSOT/" + ui->csot_id->text()); // rev dh 20/05/2025==================================
    // simpan settingan data CSOT
    QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
    QSettings settings(settingsPath, QSettings::IniFormat);
    settings.setValue("CSOT/ID", ui->csot_id->text());
    settings.setValue("CSOT/Nama", ui->name_2->text());
    settings.setValue("CSOT/Kontak", ui->phone_2->text());
}

void MainWindow::on_btn_play_clicked()  // PLAY VIDEO
{
    player->play();
    pauseOverlay->setVisible(false);
}

void MainWindow::on_btn_pause_clicked() // PAUSE VIDEO
{
    player->pause();
    pauseOverlay->setVisible(true);
}

void MainWindow::on_list_entertainment_itemSelectionChanged()   // GANTI PEMUTARAN VIDEO ENTERTAINMENT
{
    videoPath = ui->list_entertainment->currentItem()->text();
    indexVideo = ui->list_entertainment->currentRow();
    player->setSource(QUrl::fromLocalFile(videoPath));
    player->play();
}

void MainWindow::on_slider_volume_valueChanged(int value)   // VOLUME ENTERTAINMENT
{
    audio->setVolume(value/100.0);
}

void MainWindow::on_btn_bypass_clicked(bool checked)    // BYPASS GPS
{
    if (checked) {
        ui->list_stasiun->setEnabled(true);
    } else {
        ui->list_stasiun->setEnabled(false);
    }
}

void MainWindow::on_exit_button_clicked()   // KELUAR APLIKASI
{
    exitApplication();
}

void MainWindow::on_browse_gapeka_clicked() // BROWSE FILE GAPEKA
{
    ui->gapeka_status->setStyleSheet("background-color: lightgray; border-radius: 15px;");  // rev dh 20/05/2025

    // buka file GAPEKA
    QString folderPath = "C:/DataBasePIDS/GAPEKA/" + ui->list_gapeka->currentText();
    QDir dir(folderPath);
    if (!dir.exists()) {
        QMessageBox::warning(this, "Folder Tidak Ditemukan", "Folder untuk kereta ini tidak ada.\n" + folderPath);
        return;
    }

    QString filePath = QFileDialog::getOpenFileName(this, "Pilih File", folderPath, "CSV Files (*.csv);;All Files (*.*)");
    if (filePath.isEmpty()) return;

    QFileInfo fileInfo(filePath);
    QString fileName = fileInfo.completeBaseName();

    QStringList dataSplit = fileName.split(',');
    if (dataSplit.size() < 3) {
        QMessageBox::warning(this, "Format Tidak Sesuai", "Nama file harus dalam format: Kode,Nama,Rute.ext");
        return;
    }
    // set nomor KA, nama KA, rute KA sesuai nama file GAPEKA
    noka = dataSplit[0].trimmed();
    naka = dataSplit[1].trimmed();
    reka = dataSplit[2].trimmed();

    ui->nama_ka->setText(naka);
    ui->nomor_ka->setText(noka);
    ui->relasi_ka->setText(reka);

    // reset data perjalanan KA
    currentGapeka.clear();
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        bool firstLine = true;
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (firstLine) { firstLine = false; continue; }

            QStringList parts = line.split(';');
            if (parts.size() >= 3 && parts[1].trimmed() != "Ls") {
                currentGapeka.append({ parts[0].trimmed(), parts[1].trimmed(), parts[2].trimmed() });
            }
        }
        file.close();
    }

    // print data perjalanan KA
    // for (const auto &data : currentGapeka) {
    //     qDebug() << data.st << data.arr << data.dep;
    // }

    // begin rev dh 20/05/2025==================================
    QString firstSt = "";
    // Set nama stasiun dan GPS dari stasiun pertama
    if (!currentGapeka.isEmpty()) {
        firstSt = currentGapeka.first().st;
        // for (const auto& st : gpsStasiun) {
        //     if (st.st == firstSt) {
        //         // currentSt = st.st; // rev dh 20/05/2025
        //         latitudeNow = st.lat;
        //         longitudeNow = st.lon;
        //         latitudeSt = st.lat;
        //         longitudeSt = st.lon;
        //         break;
        //     }
        // }

        // Set nama stasiun terakhir
        for (const auto& st : gpsStasiun) {
            if (st.st == currentGapeka.last().st) {
                ui->final_st->setText(st.st);
                ui->final_st_0->setText(st.st);
                break;
            }
        }
    }

    // cek apakah data stasiun terakhir yang tersimpan ada di GAPEKA
    bool available = false;
    for (int i = 0; i < currentGapeka.size(); ++i) {
        if (currentGapeka[i].st == currentSt) {
            available = true;
            break;
        }
    }

    // jika ada maka updateETA dengan data tersebut, jika tidak ada maka update dengan data stasiun pertama
    if (available) {
        updateETA(currentSt);
    } else {
        updateETA(firstSt);
    }
    // end rev dh 20/05/2025==================================

    // simpan settingan
    QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
    QSettings settings(settingsPath, QSettings::IniFormat);
    // settings.setValue("GAPEKA/Folder", ui->list_gapeka->currentText()); // ga perlu sekarang
    settings.setValue("GAPEKA/NomorKA", noka);
    settings.setValue("GAPEKA/NamaKA", naka);
    settings.setValue("GAPEKA/RelasiKA", reka);
}

void MainWindow::on_send_gapeka_clicked()   // KIRIM DATA GAPEKA
{
    // begin rev dh 20/05/2025==================================
    if (!noka.isEmpty() && !naka.isEmpty() && !reka.isEmpty()) {
        ui->nama_ka_2->setText(noka + " " + naka.toUpper());
        ui->relasi_ka_2->setText(currentGapeka.first().st + " - " + currentGapeka.last().st);
        ui->car_name_0->setText(noka + " " + naka.toUpper());
        ui->gapeka_status->setStyleSheet("background-color: green; border-radius: 15px;");
        QMessageBox::information(nullptr, "Informasi", "Data GAPEKA telah terkirim.");
    } else {
        ui->gapeka_status->setStyleSheet("background-color: lightgray; border-radius: 15px;");
        QMessageBox::warning(nullptr, "Peringatan", "Data GAPEKA belum terpilih.");
    }
    // end rev dh 20/05/2025==================================

    // ini untuk simulasi kereta sudah meninggalkan stasiun
    // otw = true;
    // updateTIME(currentSt);
    // currentSt = "Dalam Perjalanan";
}

void MainWindow::on_curr_temp_textChanged(const QString &arg1)  // UPDATE TEMPERATURE VALUE
{
    ui->temp_2->setText(ui->curr_temp->text());
}

void MainWindow::init_gapeka_config(QString filePath)   // INIT SETTING TERAKHIR
{
    // buka file GAPEKA
    QFileInfo fileInfo(filePath);
    QString fileName = fileInfo.completeBaseName();

    QStringList dataSplit = fileName.split(',');
    if (dataSplit.size() < 3) {
        QMessageBox::warning(this, "Format Tidak Sesuai", "Nama file harus dalam format: Kode,Nama,Rute.ext");
        return;
    }
    // set nomor KA, nama KA, rute KA sesuai nama file GAPEKA
    noka = dataSplit[0].trimmed();
    naka = dataSplit[1].trimmed();
    reka = dataSplit[2].trimmed();

    // begin rev dh 19/05/2025==================================
    ui->list_gapeka->setCurrentText(naka.toUpper()); // item combo box sesuai GAPEKA terpilih
    // end rev dh 19/05/2025==================================

    ui->nama_ka->setText(naka);
    ui->nomor_ka->setText(noka);
    ui->relasi_ka->setText(reka);

    // reset data perjalanan KA
    currentGapeka.clear();
    QFile file(filePath);
    qDebug() << filePath;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        bool firstLine = true;
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (firstLine) { firstLine = false; continue; }

            QStringList parts = line.split(';');
            if (parts.size() >= 3 && parts[1].trimmed() != "Ls") {
                currentGapeka.append({ parts[0].trimmed(), parts[1].trimmed(), parts[2].trimmed() });
            }
        }
        file.close();
    }
    // print data perjalanan
    // for (const auto &data : currentGapeka) {
    //     qDebug() << data.st << data.arr << data.dep;
    // }

    // begin rev dh 20/05/2025==================================
    // Set nama stasiun dan GPS dari stasiun pertama
    QString firstSt = "";
    if (!currentGapeka.isEmpty()) {
        firstSt = currentGapeka.first().st;
        // for (const auto& st : gpsStasiun) {
        //     if (st.st == firstSt) {
        //         currentSt = st.st;
        //         latitudeNow = st.lat;
        //         longitudeNow = st.lon;
        //         latitudeSt = st.lat;
        //         longitudeSt = st.lon;
        //         break;
        //     }
        // }

        // Set nama stasiun terakhir
        for (const auto& st : gpsStasiun) {
            if (st.st == currentGapeka.last().st) {
                ui->final_st->setText(st.st);
                ui->final_st_0->setText(st.st);
                break;
            }
        }
    }

    // init currentSt
    QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
    QSettings settings(settingsPath, QSettings::IniFormat);
    currentSt = settings.value("GAPEKA/CurrentSt", "").toString();

    // cek apakah data stasiun terakhir yang tersimpan ada di GAPEKA
    bool available = false;
    for (int i = 0; i < currentGapeka.size(); ++i) {
        if (currentGapeka[i].st == currentSt) {
            available = true;
            break;
        }
    }

    // jika ada maka updateETA dengan data tersebut, jika tidak ada maka update dengan data stasiun pertama
    if (available) {
        updateETA(currentSt);
    } else {
        updateETA(firstSt);
    }
    ui->diff_arr->setText("");
    ui->diff_dep->setText("");

    // send GAPEKA
    if (!noka.isEmpty() && !naka.isEmpty() && !reka.isEmpty()) {
        ui->nama_ka_2->setText(noka + " " + naka.toUpper());
        ui->relasi_ka_2->setText(currentGapeka.first().st + " - " + currentGapeka.last().st);
        ui->car_name_0->setText(noka + " " + naka.toUpper());
        ui->gapeka_status->setStyleSheet("background-color: green; border-radius: 15px;");
    }
    // end rev dh 20/05/2025==================================

    ui->curr_st_0->setText(currentSt);
    ui->next_st_0->setText(nextSt);
}

/////////////////////////////////////////////////      USER CODE END UI Slots    /////////////////////////////////////////////////





/////////////////////////////////////////////////      USER CODE BEGIN GPS Functions    /////////////////////////////////////////////////

void MainWindow::readGPSData()  // BACA DATA SERIAL GPS
{
    static QString buffer;

    if (!serialPort || !serialPort->isOpen())
        return;
    // baca serial data simpan ke buffer
    buffer += QString::fromLatin1(serialPort->readAll());

    int idx;
    while ((idx = buffer.indexOf('\n')) != -1) {
        QString line = buffer.left(idx).trimmed();
        buffer.remove(0, idx + 1);
        // start with $GNRMC
        if (line.startsWith("$GNRMC")) {
            if (parseRMC(line, latitudeNow, longitudeNow, speed)) {
                ui->gps_invalid->hide(); //rev dh 20/5/2025
                // data ok
                // qDebug() << "data updated";
            }
            // begin rev dh 21/05/2025==================================
            else {
                latitudeNow  = "0.000000";
                longitudeNow = "0.000000";
            }
            // end rev dh 21/05/2025==================================
        }
    }
}

bool MainWindow::parseRMC(const QString &nmea, QString &lat, QString &lon, QString &speed)  // PARSING DATA GPS GNRMC
{
    auto parts = nmea.split(',');
    if (parts.size() < 8 || parts[2] != "A") return false;

    double latitude = parts[3].mid(2).toDouble() / 60.0 + parts[3].left(2).toDouble();
    if (parts[4] == "S") latitude *= -1;

    double longitude = parts[5].mid(3).toDouble() / 60.0 + parts[5].left(3).toDouble();
    if (parts[6] == "W") longitude *= -1;

    double spd = parts[7].toDouble() * 1.852;

    lat   = QString::number(latitude, 'f', 6);
    lon   = QString::number(longitude, 'f', 6);
    speed = QString::number(spd, 'f', 2);

    // currentSt = cariStasiunTerdekat(latitude, longitude);

    return true;
}

double MainWindow::haversine(double lat1, double lon1, double lat2, double lon2)    // HITUNG RADIUS GPS
{
    const double R = 6371.0; // radius bumi dalam km
    double dLat = qDegreesToRadians(lat2 - lat1);
    double dLon = qDegreesToRadians(lon2 - lon1);
    double a = qSin(dLat/2) * qSin(dLat/2) +
               qCos(qDegreesToRadians(lat1)) * qCos(qDegreesToRadians(lat2)) *
                   qSin(dLon/2) * qSin(dLon/2);
    return R * 2 * qAtan2(qSqrt(a), qSqrt(1 - a));
}

//begin rev dh 20/5/2025====================================
QString MainWindow::readStasiun(double currentLat, double currentLon) {
    if (gpsStasiun.isEmpty()) return "Data kosong";

    QString closestStation;

    for (const auto& st : gpsStasiun) {
        QString latStr = st.lat;
        QString lonStr = st.lon;

        double lat = latStr.replace(",", ".").toDouble();
        double lon = lonStr.replace(",", ".").toDouble();

        double dist = haversine(currentLat, currentLon, lat, lon);
        distance = dist;
        if (dist > 0.0 && dist <= 1.0) {
            closestStation = st.st;
            break;
        } else {
            closestStation = "Dalam Perjalanan";
        }
    }
    return closestStation;
}

void MainWindow::tryConnectGPS()
{
    if (serialPort->isOpen()) {
        setStatusGPS(true);
        timerSerial->stop();
        return;
    }

    serialPort->setPortName("COM8");
    serialPort->setBaudRate(QSerialPort::Baud4800);
    if (serialPort->open(QIODevice::ReadOnly)) {
        setStatusGPS(true);
        timerSerial->stop();
    } else {
        setStatusGPS(false);
        timerSerial->start();
    }
}

void MainWindow::handleGPSError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError || error == QSerialPort::DeviceNotFoundError) {
        // qDebug() << "Serial disconnected! Error:" << serialPort->errorString();
        serialPort->close();
        setStatusGPS(false);
        timerSerial->start();
    }
}

void MainWindow::setStatusGPS(bool state){
    if (state) {
        // qDebug() << "GPS Connected";
        ui->gps_status_label->setText("GPS Connection OK");
        ui->gps_status_label->setStyleSheet("background-color: rgb(250, 251, 252); color: green;");
        ui->gps_status->setStyleSheet("background-color: green; border-radius: 10px;");
        timerSerial->stop();
    } else {
        // qDebug() << "GPS Not Connected";
        ui->gps_status_label->setText("GPS Not Connected");
        ui->gps_status_label->setStyleSheet("background-color: rgb(250, 251, 252); color: red;");
        ui->gps_status->setStyleSheet("background-color: red; border-radius: 10px;");
        timerSerial->start();
        ui->gps_invalid->show();
        // begin rev dh 21/05/2025==================================
        if (!ui->btn_bypass->isChecked()) {
            latitudeNow  = "0.000000";
            longitudeNow = "0.000000";
        }
        // end rev dh 21/05/2025==================================
    }
}
// end rev dh 20/05/2025==================================

/////////////////////////////////////////////////      USER CODE END GPS Functions    /////////////////////////////////////////////////





/////////////////////////////////////////////////      USER CODE BEGIN GAPEKA Functions    /////////////////////////////////////////////////

void MainWindow::updateETA(const QString& nowSt)    // UPDATE ETA STASIUN DAN WAKTU KETIKA SAMPAI STASIUN
{
    int startIndex = -1;
    for (int i = 0; i < currentGapeka.size(); ++i) {
        if (currentGapeka[i].st == nowSt) {
            startIndex = i;
            break;
        }
    }

    if (startIndex != -1){
        // Jika CurrentSt sesuai GAPEKA, maka simpan CurrentSt
        QString settingsPath = QCoreApplication::applicationDirPath() + "/configTrackingKA.ini";
        QSettings settings(settingsPath, QSettings::IniFormat);
        settings.setValue("GAPEKA/CurrentSt", nowSt);

        // hitung waktu delay tiba
        ui->real_arr->setText(time.toString("hh:mm:ss"));
        delay = calculateDelay(time, QTime::fromString(currentGapeka[startIndex].arr, "hh:mm:ss")).left(6);
        ui->diff_arr->setText(delay);
        nextSt = currentGapeka[startIndex+1].st;
        // qDebug() << delay;

        //begin rev dh 20/5/2025====================================
        // set text delay
        ui->eta_delay_1_1->setText(delay);
        ui->eta_delay_2_1->setText(delay);
        ui->eta_delay_3_1->setText(delay);
        ui->eta_delay_4_1->setText(delay);

        ui->eta_delay_1_2->setText(delay);
        ui->eta_delay_2_2->setText(delay);
        ui->eta_delay_3_2->setText(delay);
        ui->eta_delay_4_2->setText(delay);

        // reset text estimated time
        ui->eta_plus_1_1->setText("-:-");
        ui->eta_plus_1_2->setText("-:-");
        ui->eta_plus_2_1->setText("-:-");
        ui->eta_plus_2_2->setText("-:-");
        ui->eta_plus_3_1->setText("-:-");
        ui->eta_plus_3_2->setText("-:-");
        ui->eta_plus_4_1->setText("-:-");
        ui->eta_plus_4_2->setText("-:-");

        // hitung estimasi berdasarkan waktu tiba
        QTime delayy = QTime::fromString(delay.mid(1), "hh:mm");
        int secs = QTime(0, 0).secsTo(delayy);

        for (int i = 1; i <= 4; ++i) {
            int idx = startIndex + i;
            if (idx >= currentGapeka.size()) break;

            QTime eta = QTime::fromString(currentGapeka[idx].dep, "hh:mm:ss");
            QTime sumTime = (delay[0] == '+') ? eta.addSecs(-secs) : eta.addSecs(secs);

            switch (i) {
            case 1:
                ui->eta_plus_1_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_1_2->setText(sumTime.toString("hh:mm"));
                break;
            case 2:
                ui->eta_plus_2_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_2_2->setText(sumTime.toString("hh:mm"));
                break;
            case 3:
                ui->eta_plus_3_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_3_2->setText(sumTime.toString("hh:mm"));
                break;
            case 4:
                ui->eta_plus_4_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_4_2->setText(sumTime.toString("hh:mm"));
                break;
            }
        }
        //end rev dh 20/5/2025====================================

        // Setting Page
        ui->eta_arr_1->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].arr : "-:-:-");
        ui->eta_arr_2->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].arr : "-:-:-");
        ui->eta_arr_3->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].arr : "-:-:-");
        ui->eta_arr_4->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].arr : "-:-:-");

        ui->eta_dep_1->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].dep : "-:-:-");
        ui->eta_dep_2->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].dep : "-:-:-");
        ui->eta_dep_3->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].dep : "-:-:-");
        ui->eta_dep_4->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].dep : "-:-:-");

        ui->next_st ->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].st : "-");
        ui->next_st_0->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].st : "-");
        ui->eta_st_1->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].st : "-");
        ui->eta_st_2->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].st : "-");
        ui->eta_st_3->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].st : "-");
        ui->eta_st_4->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].st : "-");

        // Video Page
        ui->eta_dep_1_1->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].dep.left(5) : "-:-");
        ui->eta_dep_2_1->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].dep.left(5) : "-:-");
        ui->eta_dep_3_1->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].dep.left(5) : "-:-");
        ui->eta_dep_4_1->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].dep.left(5) : "-:-");

        ui->eta_st_1_1->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].st : "-");
        ui->eta_st_2_1->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].st : "-");
        ui->eta_st_3_1->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].st : "-");
        ui->eta_st_4_1->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].st : "-");

        // CSOT Page
        ui->eta_dep_1_2->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].dep.left(5) : "-:-");
        ui->eta_dep_2_2->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].dep.left(5) : "-:-");
        ui->eta_dep_3_2->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].dep.left(5) : "-:-");
        ui->eta_dep_4_2->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].dep.left(5) : "-:-");

        ui->eta_st_1_2->setText((startIndex + 1 < currentGapeka.size()) ? currentGapeka[startIndex + 1].st : "-");
        ui->eta_st_2_2->setText((startIndex + 2 < currentGapeka.size()) ? currentGapeka[startIndex + 2].st : "-");
        ui->eta_st_3_2->setText((startIndex + 3 < currentGapeka.size()) ? currentGapeka[startIndex + 3].st : "-");
        ui->eta_st_4_2->setText((startIndex + 4 < currentGapeka.size()) ? currentGapeka[startIndex + 4].st : "-");
    }
}

void MainWindow::updateTIME(const QString& nowSt)   // UPDATE ETA WAKTU KETIKA BERANGKAT
{
    int startIndex = -1;
    // cari index dengan elemen yang sama dengan input
    for (int i = 0; i < currentGapeka.size(); ++i) {
        if (currentGapeka[i].st == nowSt) {
            startIndex = i;
            break;
        }
    }
    // eksekusi ketika start index ketemu
    if (startIndex != -1) {
        ui->real_dep->setText(time.toString("hh:mm:ss"));
        delay = calculateDelay(time, QTime::fromString(currentGapeka[startIndex].dep, "hh:mm:ss")).left(6);
        ui->diff_dep->setText(delay);

        // set text delay
        ui->eta_delay_1_1->setText(delay);
        ui->eta_delay_2_1->setText(delay);
        ui->eta_delay_3_1->setText(delay);
        ui->eta_delay_4_1->setText(delay);

        ui->eta_delay_1_2->setText(delay);
        ui->eta_delay_2_2->setText(delay);
        ui->eta_delay_3_2->setText(delay);
        ui->eta_delay_4_2->setText(delay);

        // reset text estimated time
        ui->eta_plus_1_1->setText("-:-");
        ui->eta_plus_1_2->setText("-:-");
        ui->eta_plus_2_1->setText("-:-");
        ui->eta_plus_2_2->setText("-:-");
        ui->eta_plus_3_1->setText("-:-");
        ui->eta_plus_3_2->setText("-:-");
        ui->eta_plus_4_1->setText("-:-");
        ui->eta_plus_4_2->setText("-:-");

        QTime delayy = QTime::fromString(delay.mid(1), "hh:mm");
        int secs = QTime(0, 0).secsTo(delayy);

        for (int i = 1; i <= 4; ++i) {
            int idx = startIndex + i;
            if (idx >= currentGapeka.size()) break;

            QTime eta = QTime::fromString(currentGapeka[idx].dep, "hh:mm:ss");
            QTime sumTime = (delay[0] == '+') ? eta.addSecs(-secs) : eta.addSecs(secs);

            switch (i) {
            case 1:
                ui->eta_plus_1_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_1_2->setText(sumTime.toString("hh:mm"));
                break;
            case 2:
                ui->eta_plus_2_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_2_2->setText(sumTime.toString("hh:mm"));
                break;
            case 3:
                ui->eta_plus_3_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_3_2->setText(sumTime.toString("hh:mm"));
                break;
            case 4:
                ui->eta_plus_4_1->setText(sumTime.toString("hh:mm"));
                ui->eta_plus_4_2->setText(sumTime.toString("hh:mm"));
                break;
            }
        }
    }
}

QString MainWindow::calculateDelay(const QTime &currentTime, const QTime &etaTime)  // HITUNG WAKTU DELAY ETA
{
    if (!etaTime.isValid()) return "-";

    int delaySeconds = currentTime.secsTo(etaTime);  // bisa negatif
    int absSeconds = qAbs(delaySeconds);

    int hours = absSeconds / 3600;
    int minutes = (absSeconds % 3600) / 60;
    int seconds = absSeconds % 60;

    QString sign = (delaySeconds < 0) ? "-" : "+";
    return QString("%1%2:%3:%4")
        .arg(sign)
        .arg(hours, 2, 10, QChar('0'))
        .arg(minutes, 2, 10, QChar('0'))
        .arg(seconds, 2, 10, QChar('0'));
}

/////////////////////////////////////////////////      USER CODE BEGIN GAPEKA Functions    /////////////////////////////////////////////////

// END OF PROGRAM
// Created by PT. Rekaindo GLobal Jasa Engineer Team and Mechatronics PENS
// Copyright 2025
