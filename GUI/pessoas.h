#ifndef PESSOAS_H
#define PESSOAS_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QString>
#include <QObject>
#include "mainwindow.h"


#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}


class pessoas : public QObject
{

signals:
  void  sendText( const QString & newText );


private:
    QString nome, familiaID;
    int idade, dia, mes, ano, salario, day, month, year;


public:

      pessoas( const QString n = "",const int d = 0,const int m = 0,const  int a = 0,const  int r = 0, const QString familiaID ="");
     ~pessoas();

      void printData();
      void cls();

      QString getNome()const;
      std::list<QString> retornaListaDados();

      int  get_int(char *message);

      /*----FUNÇOES SET & GET-----*/
      void setNome(const QString n);
      void setDia(const int d);
      void setMes(const int m);
      void setAno(const int a);
      void setIdade(const int i);
      void setSalario(const int r);
      void setFamiliaID(const QString familiaID);
           int 	  getDia()const;
           int 	  getMes()const;
           int 	  getAno()const;
           int 	  getIdade()const;
           int 	  getSalario()const;
           QString   getFamiliaID()const;

    bool verificaSeExiste(std::string novaPessoa);
    void lerDaBaseDDados();
    bool escreveNaBaseDDados(std::string pessoaNova);
    bool verificaSeExiste(std::string novaDespesa, std::string paths);


};

#endif // PESSOAS_H
