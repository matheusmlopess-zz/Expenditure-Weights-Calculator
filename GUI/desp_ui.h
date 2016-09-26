#ifndef DESP_UI_H
#define DESP_UI_H

#include <QDialog>
#include <QString>
#include <QKeyEvent>


namespace Ui {
class desp_ui;
}

class desp_ui : public QDialog
{
    Q_OBJECT

public:
    explicit desp_ui(QWidget *parent = 0);
    ~desp_ui();
    void nomeDaPessoa(QString nomeDapssoa);
    bool isFloat( std::string myString );
    void erroRR();


private slots:
    void on_pushButton_clicked();
    void confima();
    void on_mercado_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::desp_ui *ui;
};

#endif // DESP_UI_H
