#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    explicit MainWindow(QWidget *parent = 0);
      ~MainWindow();

private slots:
    void lerDaBaseDDados();
    void on_pushButton_clicked();
    void updateText(const QString & newText );
    void updateList(const QString & newText );
    void on_pushButton_11_clicked();
    void removedABaseDDados(QString removeDaBaseDDados);
/*
private:
    Ui::MainWindow *ui;*/
    void on_listWidget_clicked(const QModelIndex &index);
    //void on_textBrowser_textChanged();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_released();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_horizontalSlider_sliderMoved(int position);
    void on_pushButton_5_clicked();
    void on_radioButton_2_clicked();
    void on_salJan_textChanged();
    void on_salFev_textChanged();
    void on_radioButton_3_clicked();
};

#endif // MAINWINDOW_H
