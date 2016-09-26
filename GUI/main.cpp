#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtGui>

#include <QApplication>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

QT_CHARTS_USE_NAMESPACE
int main(int argc, char *argv[])
{

     QApplication a(argc, argv);


    MainWindow w;
    w.show();

    return a.exec();
}
