#ifndef MERCADO_H
#define MERCADO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "pessoas.h"


namespace Ui {
class MainWindow;
}

class mercado {
    public:
             mercado(QString nomePessoa = "",const int anoO=0,const int mesS=0,const float valor=0);
            ~mercado();
    void     addNoTxt();
};

#endif // MERCADO_H
