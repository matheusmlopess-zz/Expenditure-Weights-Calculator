#include "pessoas.h"
#include <iostream>
#include <string.h>
#include <sstream>
#include <map>
#include <utility>      // std::pair, std::get
#include <list>
#include <ctime>
#include <ios>
#include <fstream>
#include <limits>
#include <QObject>
#include <QString>
#include "mainwindow.h"


//MainWindow *form=new MainWindow();

//#include <time.h> // biblioteca para identificar o ano


using namespace std;

time_t theTime = time(0);
struct tm *aTime = localtime(&theTime);  // Para rodar no Dev C++
//struct tm mytime;						 // Para rodar no Visula Studio
namespace coverte
{
    template < typename T > std::string inteiro_paraTexto( const T& n )
    {
                ostringstream stm ;
                stm << n ;
        return  stm.str() ; //retorna string de um inteiro
    }
}

pessoas::pessoas(QString n, int d, int m, int a, int r, QString familiaID) {

         int anoAtualaux = aTime->tm_year + 1900;
         int idadeAux = anoAtualaux - a; //Calculo da idade!
         setNome(n);
         setDia(d);
         setMes(m);
         setAno(a);
         setIdade(idadeAux);
         setSalario(r);
         setFamiliaID(familiaID);
}

pessoas::~pessoas()
{

}

void pessoas::cls(){ system("cls"); }


list<QString> pessoas::retornaListaDados(){

        list<QString> listaDDados;
        QString aux;
        // Preenche a lista de string com os dados obtidos
        listaDDados.push_back(getNome()); 							     // adiciona nome a lista
        listaDDados.push_back(aux.fromStdString(coverte::inteiro_paraTexto(getDia())));     // adiciona dia de nascimento a lista
        listaDDados.push_back(aux.fromStdString(coverte::inteiro_paraTexto(getMes())));     // adiciona mes de nascimento a lista
        listaDDados.push_back(aux.fromStdString(coverte::inteiro_paraTexto(getAno())));     // adiciona ano de nascimento a lista
        listaDDados.push_back(aux.fromStdString(coverte::inteiro_paraTexto(getIdade())));   // adiciona idade a lista
        listaDDados.push_back(aux.fromStdString(coverte::inteiro_paraTexto(getSalario()))); // adiciona renda a lista
        listaDDados.push_back(getFamiliaID()); // adiciona renda a lista

        return listaDDados;
    }

    // Gets & Sets
    void pessoas::setNome(const QString n) { nome = n;				  }
    void pessoas::setMes(const int m)	  { mes = m; 				  }
    void pessoas::setIdade(const int i)   { idade = i;				  }
    void pessoas::setDia(const int d)     { dia = d;				  }
    void pessoas::setSalario(const int r) { salario = r;			  }
    void pessoas::setAno(const int a)     { ano = a;                  }
    void pessoas::setFamiliaID(const QString fmId) { familiaID = fmId; }

    QString pessoas::getNome()const      { return nome;      }
    QString pessoas::getFamiliaID()const { return familiaID; }
    int pessoas	  ::getDia()const       { return dia;       }
    int pessoas   ::getMes()const       { return mes;       }
    int pessoas   ::getAno()const       { return ano;	    }
    int pessoas   ::getIdade()const     { return idade;     }
    int pessoas   ::getSalario()const   { return salario;   }

bool pessoas::escreveNaBaseDDados(string pessoNova) {

    bool verificaSejaexiste = false;

    ofstream output("bancoDDado.txt", std::ios::app);
    verificaSejaexiste = verificaSeExiste(pessoNova);

    if (verificaSejaexiste == false)
        output << pessoNova;

    if (verificaSejaexiste == true){
         //cout <<"\t"<< pessoNova <<" Ja esta na base de dados. Tente novamente!"<< endl;

       // cout << "Esta pessoa ja esta cadastrada precione enter para retornar!" << endl;
    }

    return verificaSejaexiste;
}

void pessoas::lerDaBaseDDados() {

    //bool exite = false;
    string linha;
    ifstream abreArquivo;
    abreArquivo.open("bancoDDado.txt");  //open the file

    while (!abreArquivo.eof()) // To get you all the lines.
    {
        getline(abreArquivo, linha); // Saves the line in STRING.
        stringstream ss(linha);
        std::string token;

        while (std::getline(ss, token, ','))
        {
           // std::cout << token << '\n';
        }

    }
    abreArquivo.close();
}

bool pessoas::verificaSeExiste(string novaPessoa) {

    bool exite = false;
    string linha;
    ifstream abreArquivo;
    abreArquivo.open("bancoDDado.txt");
    while (!abreArquivo.eof())
    {
        getline(abreArquivo, linha);
        if (linha == novaPessoa)
            exite = true;
    }
    abreArquivo.close();
    return exite;
}

bool pessoas::verificaSeExiste(string novaDespesa, string paths) {

    bool exite = false;
    string linha;
    ifstream abreArquivo;
    abreArquivo.open(paths);
    //cout << novaDespesa << "  e ---> " << paths << endl;
    //_getch();
    while (!abreArquivo.eof())
    {
        getline(abreArquivo, linha);
        if (linha == novaDespesa)
            exite = true;
    }
    abreArquivo.close();
    return exite;
}




