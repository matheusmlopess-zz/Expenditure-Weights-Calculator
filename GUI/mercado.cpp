#include "mercado.h"
#include "pessoas.h"
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


//QString DespesasPath = QDir::currentPath();
//QStringList DespesasPathDir=DespesasPath.split("/build");
//QString finalPathDespesas_ = DespesasPathDir[0];

/*
mercado::mercado(QString nomePessoa, int anoO,int mesS, float valor){
std::ostringstream geraTxt,geraTxt2;
geraTxt2 << finalPathDespesas_.toStdString()<<"Despesas_"<< nomePessoa.toStdString() <<".txt";
geraTxt <<finalPathDespesas_.toStdString() <<"Mercado_"<< nomePessoa.toStdString() <<"_"<< std::to_string(anoO) <<"_"<<std::to_string(mesS)<<".txt";


    cout << finalPathDespesas_.toStdString() << endl;
    cout << geraTxt2.str() << endl;
    cout << geraTxt.str()<<endl;

    std::ofstream output(geraTxt.str(), std::ios::app);

    output<<valor<<endl;

    pessoas *novaTe = new pessoas;
    bool existeDespesa = novaTe->verificaSeExiste(geraTxt.str(),geraTxt2.str());

    if(!existeDespesa){

        std::ofstream output2(geraTxt2.str(), std::ios::app);
        output2<<geraTxt.str()<<endl;
    }else{
    cout<<" " <<endl;
    }


}
mercado::~mercado(){}

*/
