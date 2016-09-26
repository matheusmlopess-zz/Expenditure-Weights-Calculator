#include "metodoum.h"
#include "pessoas.h"
#include "qcustomplot.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>	  // std::getch()
#include <sstream>
#include <fstream>
#include <map>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QMessageBox>


QString pathFolder = QDir::currentPath();
QStringList pathDirMetod =pathFolder.split("/build");
QString finalPathFinder_ = pathDirMetod[0];

using namespace std;


metodoUM::metodoUM(){}
metodoUM::~metodoUM(){}





void metodoUM:: setMercado(const string a){  mercado =a;}
void metodoUM:: setTransporte(const string b){  transporte = b; }
void metodoUM:: setEstudos(const string c){  estudos = c; }
void metodoUM:: setLazer(const string d){  lazer = d; }
void metodoUM:: setVestuario(const string e){  vestuario = e; }
void metodoUM:: setSeguros(const string f){  seguros = f; }
void metodoUM:: setAnimais(const string g){  animais = g; }
void metodoUM:: setSaude(const string h){  saude = h; }
void metodoUM:: setOutros(const string i){  outros = i; }


string metodoUM:: getMercado()const{  return mercado ;}
string metodoUM:: getTransporte()const{ return transporte ; }
string metodoUM:: getEstudos()const{ return estudos ; }
string metodoUM:: getLazer()const{ return lazer ; }
string metodoUM:: getVestuario()const{ return vestuario ; }
string metodoUM:: getSeguros()const{return  seguros ; }
string metodoUM:: getAnimais()const{ return animais ; }
string metodoUM:: getSaude()const{ return saude ; }
string metodoUM:: getOutros()const{ return outros ; }


void metodoUM::setMercadoValor(const double v){  valorMercado = v; }
void metodoUM::setTransporteValor(const double v){  valorTransporte= v; }
void metodoUM::setEstudosValor(const double v){  valorEstudos= v; }
void metodoUM::setLazerValor(const double v){  valorLazer= v; }
void metodoUM::setVestuarioValor(const double v){  valorVestuario= v; }
void metodoUM::setSegurosValor(const double v){  valorSeguros= v; }
void metodoUM::setAnimaisValor(const double v){  valorAnimais= v; }
void metodoUM::setSaudeValor(const double v){  valorSaude= v; }
void metodoUM::setOutrosValor(const double v){  valorOutros= v; }


double metodoUM::getMercadoValor()const{ return valorMercado; }
double metodoUM::getTransporteValor()const{ return valorTransporte; }
double metodoUM::getEstudosValor()const{ return valorEstudos; }
double metodoUM::getLazerValor()const{ return valorLazer; }
double metodoUM::getVestuarioValor()const{ return valorVestuario; }
double metodoUM::getSegurosValor()const{ return valorSeguros; }
double metodoUM::getAnimaisValor()const{ return valorAnimais; }
double metodoUM::getSaudeValor()const{ return valorSaude; }
double metodoUM::getOutrosValor()const{ return valorOutros; }







double metodoUM::MetodoUM(int mesEscolhido,
                          int anoEscolhido,
                          string path)  {

    string linha,despesa=" ";
    ifstream abreArquivo, calculo;
    abreArquivo.open(path);
        string tipoDespesas,nome;
        int ano,mes;
        double soma=0, k,gastoTotalMes = 0;

        cout <<"path 1   "<<path << endl;

        if (!abreArquivo.is_open()) {
            QMessageBox messageBox1;
            messageBox1.critical(0,"Erro Path 1"," Arquivos de texto com caminhos conflitantes");
            messageBox1.setFixedSize(500,200);
            return -1; // or better, throw exception.
            }


        while (!abreArquivo.eof()){
            getline(abreArquivo, linha);
            stringstream ss(linha);
            std::string token;
            int posicao =0;

        if(!linha.empty()){
            while (std::getline(ss, token, '_')){
                    if(!token.empty()){
                    if(posicao==0) tipoDespesas=token;
                    if(posicao==1) nome= token;
                    if(posicao==2) ano=std::stoi(token);
                    if(posicao==3) {
                        if (token.length() == 6)
                        mes=std::stoi(token.substr(0,2));
                        else
                        mes=std::stoi(token.substr(0,1));
                        };
                    posicao++;
                }
            }
             cout << "             " << endl;
             cout << "  _______    " << endl;
             cout << linha << endl;
             cout << tipoDespesas << endl;
             cout <<"ano -->  " <<ano <<"escolhido : " << anoEscolhido << endl;
             cout <<"mes -->  " <<mes << "escolhido : "<< mesEscolhido  <<endl;
             cout << "  _______    " << endl;
             cout << "             " << endl;


             if(!linha.empty() && !abreArquivo.eof() && mes == mesEscolhido && ano == anoEscolhido ){


             string linha2;
             cout << "[ " << linha <<" ]" <<endl;
             calculo.open(linha);

                while(!calculo.eof()) {
                    getline(calculo, linha2);
                    if(!linha2.empty()){
                        k =  std::stof(linha2);

                        soma = soma + k;
                    }
                }
                calculo.close();



             if(despesa=="Mercado"){setMercado(despesa); setMercadoValor(soma);  }
             if(despesa=="Transporte"){setTransporte(despesa); setTransporteValor(soma);  }
             if(despesa=="Estudos"){setEstudos(despesa); setEstudosValor(soma);  }
             if(despesa=="Lazer"){setLazer(despesa); setLazerValor(soma);  }
             if(despesa=="Vestuario"){setVestuario(despesa); setVestuarioValor(soma);  }
             if(despesa=="Seguros"){setSeguros(despesa); setSegurosValor(soma);  }
             if(despesa=="Animais"){setAnimais(despesa); setAnimaisValor(soma);  }
             if(despesa=="Saude"){setSaude(despesa); setSaudeValor(soma);  }
             if(despesa=="Outros"){setOutros(despesa); setOutrosValor(soma);  }


             grafico(soma,despesa);

    cout << "        [ " << tipoDespesas  << " ] " << "Total : "  << soma << endl;

             const int idx = path.find_last_of("\\/");
             if (std::string::npos != idx)
             {
                 std::string filename(tipoDespesas.substr(idx + 1));
                 despesa=filename;
//                 cout << filename << endl;
             }


//             cout << "        [ " << despesa  << " ] " << "Total : "  << soma << endl;
             gastoTotalMes = gastoTotalMes + soma;

            }
            soma =0;
        }

        }

//         cout << "   [TOTAL] " << gastoTotalMes << endl;

         if (gastoTotalMes==0) {
             QMessageBox messageBox1;
             messageBox1.critical(0,"Erro","Não há gastos computados para este mes");
             messageBox1.setFixedSize(500,200);

             return -1; // or better, throw exception.

             }

//         int mostasalario=0;
//         for(int i=0;i<12;i++)
//              mostasalario=salarios[i] +mostasalario;

//                 cout <<getMercadoValor()<<  endl;
//                 cout <<getTransporteValor()<<  endl;
//                 cout <<getEstudosValor()<<  endl;
//                 cout <<getLazerValor()<<  endl;
//                 cout <<getVestuarioValor()<<  endl;
//                 cout <<getSegurosValor()<<  endl;
//                 cout <<getAnimaisValor()<<  endl;
//                 cout <<getSaudeValor()<<  endl;
//                 cout << getOutrosValor()<<  endl;

//              cout <<  getMercado()<<  endl;
//              cout <<  getTransporte()<<  endl;
//              cout <<  getEstudos()<<  endl;
//              cout <<  getLazer()<<  endl;
//              cout <<  getVestuario()<<  endl;
//              cout <<  getSeguros()<<  endl;
//              cout <<  getAnimais()<<  endl;
//              cout <<  getSaude()<<  endl;
//              cout <<  getOutros()<<  endl;



 return gastoTotalMes;

}


void metodoUM::grafico(int valorSoma, string despesT){

        cout <<"Despesa    " << " valor Total"<<endl;
        cout <<despesT<< "    "<<valorSoma << endl;

}



