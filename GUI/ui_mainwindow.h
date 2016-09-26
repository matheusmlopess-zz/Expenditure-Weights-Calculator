/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <piechart.h>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionExportar;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_13;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textBrowser_2;
    QWidget *tab_2;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QTextBrowser *textBrowser_5;
    QDateEdit *dateEdit;
    QRadioButton *radioButton_2;
    QTextBrowser *textBrowser_6;
    QTextEdit *salJan;
    QTextEdit *salFev;
    QTextEdit *salNov;
    QTextEdit *salDez;
    QTextEdit *salSet;
    QTextEdit *salOut;
    QTextEdit *salJul;
    QTextEdit *salAgo;
    QTextEdit *salMai;
    QTextEdit *salJun;
    QTextEdit *salMar;
    QTextEdit *salAbr;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_16;
    QTextEdit *textEdit_17;
    QTextEdit *textEdit_18;
    QTextEdit *textEdit_19;
    QTextEdit *textEdit_20;
    QTextEdit *textEdit_21;
    QTextEdit *textEdit_22;
    QTextEdit *textEdit_23;
    QTextEdit *textEdit_24;
    QTextEdit *textEdit_25;
    QCustomPlot *grafico;
    QPushButton *pushButton_5;
    QRadioButton *radioButton_3;
    QWidget *tab_3;
    pieChart *widget_2;
    QTextBrowser *textBrowser;
    QListWidget *listWidget;
    QPushButton *pushButton_11;
    QMenuBar *menuBar;
    QMenu *menuArqivo;
    QMenu *menuEditar;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 371);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QStringLiteral("actionSalvar"));
        actionExportar = new QAction(MainWindow);
        actionExportar->setObjectName(QStringLiteral("actionExportar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 121, 161));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 101, 31));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 50, 101, 21));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 70, 101, 21));
        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 120, 101, 21));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 180, 121, 141));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 20, 101, 21));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 50, 101, 21));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 80, 101, 21));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(350, 10, 521, 311));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textBrowser_2 = new QTextBrowser(tab);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setEnabled(true);
        textBrowser_2->setGeometry(QRect(0, 10, 361, 251));
        textBrowser_2->setMouseTracking(false);
        textBrowser_2->setAutoFillBackground(true);
        textBrowser_2->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        textBrowser_2->setReadOnly(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(120, 0, 231, 31));
        horizontalSlider->setSizeIncrement(QSize(1, 0));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(12);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(tab_2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(360, 0, 31, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setLayoutDirection(Qt::LeftToRight);
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(1));
        textBrowser_5 = new QTextBrowser(tab_2);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setEnabled(false);
        textBrowser_5->setGeometry(QRect(70, 10, 41, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        textBrowser_5->setFont(font1);
        textBrowser_5->setAutoFillBackground(false);
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(0, 0, 61, 31));
        dateEdit->setDate(QDate(2016, 1, 1));
        radioButton_2 = new QRadioButton(tab_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(270, 40, 101, 17));
        textBrowser_6 = new QTextBrowser(tab_2);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setEnabled(false);
        textBrowser_6->setGeometry(QRect(0, 40, 81, 31));
        textBrowser_6->setFont(font1);
        textBrowser_6->setAutoFillBackground(false);
        textBrowser_6->setStyleSheet(QStringLiteral("background-color:rgb(252, 252, 252)"));
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salJan = new QTextEdit(tab_2);
        salJan->setObjectName(QStringLiteral("salJan"));
        salJan->setGeometry(QRect(40, 74, 41, 16));
        salJan->setContextMenuPolicy(Qt::DefaultContextMenu);
        salJan->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salJan->setFrameShape(QFrame::NoFrame);
        salJan->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salJan->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salFev = new QTextEdit(tab_2);
        salFev->setObjectName(QStringLiteral("salFev"));
        salFev->setGeometry(QRect(40, 90, 41, 16));
        salFev->setContextMenuPolicy(Qt::DefaultContextMenu);
        salFev->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salFev->setFrameShape(QFrame::NoFrame);
        salFev->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salFev->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salNov = new QTextEdit(tab_2);
        salNov->setObjectName(QStringLiteral("salNov"));
        salNov->setGeometry(QRect(40, 224, 41, 16));
        salNov->setContextMenuPolicy(Qt::DefaultContextMenu);
        salNov->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salNov->setFrameShape(QFrame::NoFrame);
        salNov->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salNov->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salDez = new QTextEdit(tab_2);
        salDez->setObjectName(QStringLiteral("salDez"));
        salDez->setGeometry(QRect(40, 240, 41, 16));
        salDez->setContextMenuPolicy(Qt::DefaultContextMenu);
        salDez->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salDez->setFrameShape(QFrame::NoFrame);
        salDez->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salDez->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salSet = new QTextEdit(tab_2);
        salSet->setObjectName(QStringLiteral("salSet"));
        salSet->setGeometry(QRect(40, 194, 41, 16));
        salSet->setContextMenuPolicy(Qt::DefaultContextMenu);
        salSet->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salSet->setFrameShape(QFrame::NoFrame);
        salSet->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salSet->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salOut = new QTextEdit(tab_2);
        salOut->setObjectName(QStringLiteral("salOut"));
        salOut->setGeometry(QRect(40, 210, 41, 16));
        salOut->setContextMenuPolicy(Qt::DefaultContextMenu);
        salOut->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salOut->setFrameShape(QFrame::NoFrame);
        salOut->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salOut->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salJul = new QTextEdit(tab_2);
        salJul->setObjectName(QStringLiteral("salJul"));
        salJul->setGeometry(QRect(40, 164, 41, 16));
        salJul->setContextMenuPolicy(Qt::DefaultContextMenu);
        salJul->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salJul->setFrameShape(QFrame::NoFrame);
        salJul->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salJul->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salAgo = new QTextEdit(tab_2);
        salAgo->setObjectName(QStringLiteral("salAgo"));
        salAgo->setGeometry(QRect(40, 180, 41, 16));
        salAgo->setContextMenuPolicy(Qt::DefaultContextMenu);
        salAgo->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salAgo->setFrameShape(QFrame::NoFrame);
        salAgo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salAgo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salMai = new QTextEdit(tab_2);
        salMai->setObjectName(QStringLiteral("salMai"));
        salMai->setGeometry(QRect(40, 134, 41, 16));
        salMai->setContextMenuPolicy(Qt::DefaultContextMenu);
        salMai->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salMai->setFrameShape(QFrame::NoFrame);
        salMai->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salMai->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salJun = new QTextEdit(tab_2);
        salJun->setObjectName(QStringLiteral("salJun"));
        salJun->setGeometry(QRect(40, 150, 41, 16));
        salJun->setContextMenuPolicy(Qt::DefaultContextMenu);
        salJun->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salJun->setFrameShape(QFrame::NoFrame);
        salJun->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salJun->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salMar = new QTextEdit(tab_2);
        salMar->setObjectName(QStringLiteral("salMar"));
        salMar->setGeometry(QRect(40, 104, 41, 16));
        salMar->setContextMenuPolicy(Qt::DefaultContextMenu);
        salMar->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salMar->setFrameShape(QFrame::NoFrame);
        salMar->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salMar->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salAbr = new QTextEdit(tab_2);
        salAbr->setObjectName(QStringLiteral("salAbr"));
        salAbr->setGeometry(QRect(40, 120, 41, 16));
        salAbr->setContextMenuPolicy(Qt::DefaultContextMenu);
        salAbr->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 208)"));
        salAbr->setFrameShape(QFrame::NoFrame);
        salAbr->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        salAbr->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_14 = new QTextEdit(tab_2);
        textEdit_14->setObjectName(QStringLiteral("textEdit_14"));
        textEdit_14->setEnabled(false);
        textEdit_14->setGeometry(QRect(0, 194, 41, 16));
        textEdit_14->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_14->setStyleSheet(QStringLiteral(""));
        textEdit_14->setFrameShape(QFrame::NoFrame);
        textEdit_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_14->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_15 = new QTextEdit(tab_2);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));
        textEdit_15->setEnabled(false);
        textEdit_15->setGeometry(QRect(0, 210, 41, 16));
        textEdit_15->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_15->setStyleSheet(QStringLiteral(""));
        textEdit_15->setFrameShape(QFrame::NoFrame);
        textEdit_15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_15->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_16 = new QTextEdit(tab_2);
        textEdit_16->setObjectName(QStringLiteral("textEdit_16"));
        textEdit_16->setEnabled(false);
        textEdit_16->setGeometry(QRect(0, 134, 41, 16));
        textEdit_16->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_16->setStyleSheet(QStringLiteral(""));
        textEdit_16->setFrameShape(QFrame::NoFrame);
        textEdit_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_16->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_17 = new QTextEdit(tab_2);
        textEdit_17->setObjectName(QStringLiteral("textEdit_17"));
        textEdit_17->setEnabled(false);
        textEdit_17->setGeometry(QRect(0, 74, 41, 16));
        textEdit_17->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_17->setStyleSheet(QStringLiteral(""));
        textEdit_17->setFrameShape(QFrame::NoFrame);
        textEdit_17->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_17->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_18 = new QTextEdit(tab_2);
        textEdit_18->setObjectName(QStringLiteral("textEdit_18"));
        textEdit_18->setEnabled(false);
        textEdit_18->setGeometry(QRect(0, 120, 41, 16));
        textEdit_18->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_18->setStyleSheet(QStringLiteral(""));
        textEdit_18->setFrameShape(QFrame::NoFrame);
        textEdit_18->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_18->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_19 = new QTextEdit(tab_2);
        textEdit_19->setObjectName(QStringLiteral("textEdit_19"));
        textEdit_19->setEnabled(false);
        textEdit_19->setGeometry(QRect(0, 164, 41, 16));
        textEdit_19->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_19->setStyleSheet(QStringLiteral(""));
        textEdit_19->setFrameShape(QFrame::NoFrame);
        textEdit_19->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_19->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_20 = new QTextEdit(tab_2);
        textEdit_20->setObjectName(QStringLiteral("textEdit_20"));
        textEdit_20->setEnabled(false);
        textEdit_20->setGeometry(QRect(0, 180, 41, 16));
        textEdit_20->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_20->setStyleSheet(QStringLiteral(""));
        textEdit_20->setFrameShape(QFrame::NoFrame);
        textEdit_20->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_20->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_21 = new QTextEdit(tab_2);
        textEdit_21->setObjectName(QStringLiteral("textEdit_21"));
        textEdit_21->setEnabled(false);
        textEdit_21->setGeometry(QRect(0, 240, 41, 16));
        textEdit_21->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_21->setStyleSheet(QStringLiteral(""));
        textEdit_21->setFrameShape(QFrame::NoFrame);
        textEdit_21->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_21->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_22 = new QTextEdit(tab_2);
        textEdit_22->setObjectName(QStringLiteral("textEdit_22"));
        textEdit_22->setEnabled(false);
        textEdit_22->setGeometry(QRect(0, 90, 41, 16));
        textEdit_22->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_22->setStyleSheet(QStringLiteral(""));
        textEdit_22->setFrameShape(QFrame::NoFrame);
        textEdit_22->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_22->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_23 = new QTextEdit(tab_2);
        textEdit_23->setObjectName(QStringLiteral("textEdit_23"));
        textEdit_23->setEnabled(false);
        textEdit_23->setGeometry(QRect(0, 150, 41, 16));
        textEdit_23->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_23->setStyleSheet(QStringLiteral(""));
        textEdit_23->setFrameShape(QFrame::NoFrame);
        textEdit_23->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_23->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_24 = new QTextEdit(tab_2);
        textEdit_24->setObjectName(QStringLiteral("textEdit_24"));
        textEdit_24->setEnabled(false);
        textEdit_24->setGeometry(QRect(0, 104, 41, 16));
        textEdit_24->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_24->setStyleSheet(QStringLiteral(""));
        textEdit_24->setFrameShape(QFrame::NoFrame);
        textEdit_24->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_24->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_25 = new QTextEdit(tab_2);
        textEdit_25->setObjectName(QStringLiteral("textEdit_25"));
        textEdit_25->setEnabled(false);
        textEdit_25->setGeometry(QRect(0, 224, 41, 16));
        textEdit_25->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_25->setStyleSheet(QStringLiteral(""));
        textEdit_25->setFrameShape(QFrame::NoFrame);
        textEdit_25->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_25->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        grafico = new QCustomPlot(tab_2);
        grafico->setObjectName(QStringLiteral("grafico"));
        grafico->setEnabled(true);
        grafico->setGeometry(QRect(80, 50, 431, 231));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 0, 111, 31));
        radioButton_3 = new QRadioButton(tab_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(150, 40, 101, 20));
        tabWidget->addTab(tab_2, QString());
        grafico->raise();
        textBrowser_6->raise();
        textBrowser_5->raise();
        horizontalSlider->raise();
        lcdNumber->raise();
        dateEdit->raise();
        radioButton_2->raise();
        salJan->raise();
        salFev->raise();
        salNov->raise();
        salDez->raise();
        salSet->raise();
        salOut->raise();
        salJul->raise();
        salAgo->raise();
        salMai->raise();
        salJun->raise();
        salMar->raise();
        salAbr->raise();
        textEdit_14->raise();
        textEdit_15->raise();
        textEdit_16->raise();
        textEdit_17->raise();
        textEdit_18->raise();
        textEdit_19->raise();
        textEdit_20->raise();
        textEdit_21->raise();
        textEdit_22->raise();
        textEdit_23->raise();
        textEdit_24->raise();
        textEdit_25->raise();
        pushButton_5->raise();
        radioButton_3->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widget_2 = new pieChart(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 351, 281));
        tabWidget->addTab(tab_3, QString());
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(140, 140, 205, 181));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(140, 30, 205, 104));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setEnabled(true);
        pushButton_11->setGeometry(QRect(710, 0, 151, 24));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(8);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 880, 21));
        menuArqivo = new QMenu(menuBar);
        menuArqivo->setObjectName(QStringLiteral("menuArqivo"));
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QStringLiteral("menuEditar"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArqivo->menuAction());
        menuBar->addAction(menuEditar->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuArqivo->addAction(actionExportar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", 0));
        actionExportar->setText(QApplication::translate("MainWindow", "Exportar", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Menu Inicial", 0));
        pushButton->setText(QApplication::translate("MainWindow", "ADD entrada", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Alterar entrada", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Excluir entrada", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "Help!", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Menu principal ", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "ADD despesas", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "Analise Financeira", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "Listar Por Familia", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Pag. 1", 0));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; color:#aa0000;\">M\303\252s :</span></p></body></html>", 0));
        dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "yyyy", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Analise Por Ano", 0));
        textBrowser_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; color:#000000;\">Salario<br />Mes  |  R$</span></p></body></html>", 0));
        salJan->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit_14->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set</p></body></html>", 0));
        textEdit_15->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Out</p></body></html>", 0));
        textEdit_16->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mai</p></body></html>", 0));
        textEdit_17->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jan</p></body></html>", 0));
        textEdit_18->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Abr</p></body></html>", 0));
        textEdit_19->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jul</p></body></html>", 0));
        textEdit_20->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ago</p></body></html>", 0));
        textEdit_21->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Dez</p></body></html>", 0));
        textEdit_22->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Fev</p></body></html>", 0));
        textEdit_23->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jun</p></body></html>", 0));
        textEdit_24->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mar</p></body></html>", 0));
        textEdit_25->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nov</p></body></html>", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Comparar Salario", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "Analise Por M\303\252s", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Pag. 2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Pag. 3", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "Exportar Resultados", 0));
        menuArqivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
