#ifndef METODOUM_H
#define METODOUM_H

#include <iostream>
#include <string.h>
#include <QObject>

class metodoUM
{


private:
    std::string mercado, transporte, estudos,lazer,vestuario,seguros,animais,saude,outros;
    double valorMercado,
        valorTransporte,
        valorEstudos,
        valorLazer,
        valorVestuario,
        valorSeguros,
        valorAnimais,
        valorSaude,
        valorOutros;

public:
         metodoUM();
        ~metodoUM();

         void  setMercado(const std::string n);
         void  setTransporte(const std::string n);
         void  setEstudos(const std::string n);
         void  setLazer(const std::string n);
         void  setVestuario(const std::string n);
         void  setSeguros(const std::string n);
         void  setAnimais(const std::string n);
         void  setSaude(const std::string n);
         void  setOutros(const std::string n);


      std::string  getMercado()const;
      std::string  getTransporte()const;
      std::string  getEstudos()const;
      std::string  getLazer()const;
      std::string  getVestuario()const;
      std::string  getSeguros()const;
      std::string  getAnimais()const;
      std::string  getSaude()const;
      std::string  getOutros()const;

      void setMercadoValor(const double v);
      void setTransporteValor(const double v);
      void setEstudosValor(const double v);
      void setLazerValor(const double v);
      void setVestuarioValor(const double v);
      void setSegurosValor(const double v);
      void setAnimaisValor(const double v);
      void setSaudeValor(const double v);
      void setOutrosValor(const double v);


     double getMercadoValor()const;
     double getTransporteValor()const;
     double getEstudosValor()const;
     double getLazerValor()const;
     double getVestuarioValor()const;
     double getSegurosValor()const;
     double getAnimaisValor()const;
     double getSaudeValor()const;
     double getOutrosValor()const;




    double MetodoUM(int mesEscolhido, int anoEscolhido, std::__cxx11::string path);
    void grafico(int valorSoma, std::__cxx11::string despesT);
};

#endif // METODOUM_H
