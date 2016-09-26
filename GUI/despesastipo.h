#ifndef DESPESASTIPO_H
#define DESPESASTIPO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "pessoas.h"

class despesasTipo
{
public:
         despesasTipo(QString nomePessoa = "",const int anoO=0,const int mesS=0,const float valor=0, QString tipoDespesa = "");
        ~despesasTipo();
    void     addNoTxt();
    bool     verificaSeExisteEntrada(std::string novaDespesa, std::string paths);

};

#endif // DESPESASTIPO_H
