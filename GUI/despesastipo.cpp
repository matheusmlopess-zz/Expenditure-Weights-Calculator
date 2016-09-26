#include "despesastipo.h"
#include "despesastipo.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <ios>
#include <sstream>
#include <fstream>
#include <QDir>
#include <QString>
#include <QStringList>


using namespace std;
QString DespesasPath = QDir::currentPath();
QStringList DespesasPathDir=DespesasPath.split("/build");
QString finalPathDespesas_ = DespesasPathDir[0];

despesasTipo::despesasTipo(QString nomePessoa, int anoO,int mesS, float valor,QString tipoDespesa){
std::ostringstream geraTxt,geraTxt2;
geraTxt2 << finalPathDespesas_.toStdString()<<"/Despesas_"<< nomePessoa.toStdString() <<".txt";
geraTxt <<finalPathDespesas_.toStdString() <<"/"<<tipoDespesa.toStdString()<<"_"<< nomePessoa.toStdString() <<"_"<< std::to_string(anoO) <<"_"<<std::to_string(mesS)<<".txt";

    std::ofstream output(geraTxt.str(), std::ios::app);
    output<<valor<<endl;
    bool existeDespesa = verificaSeExisteEntrada(geraTxt.str(),geraTxt2.str());
    if(!existeDespesa){
        std::ofstream output2(geraTxt2.str(), std::ios::app);
        output2<<geraTxt.str()<<endl;
    }
}
despesasTipo::~despesasTipo(){}
bool despesasTipo::verificaSeExisteEntrada(string novaDespesa, string paths) {
    bool exite = false;
    string linha;
    ifstream abreArquivo;
            abreArquivo.open(paths);
            while (!abreArquivo.eof()){
                getline(abreArquivo, linha);
                if (linha == novaDespesa)
                    exite = true;
            }
    abreArquivo.close();
    return exite;
}
