#ifndef DIAGNOSTICOS_H
#define DIAGNOSTICOS_H
#include <stdlib.h>
#include <iostream>
#include <list>
#include <string.h>

typedef std::list<std::list<std::string> > dadosPessoaisDespesas;
class diagnosticos
{
	private:
		std::string pathP;
		int Salario;
		
	public:
		 diagnosticos(const std::string pathPessoa = "", const std::string nomeDaPessoa = "", std::list< std::list<std::string> >  dadosPessoaisDespesas = {" ",{" "}});
		~diagnosticos();
		
			double MetodoUM(int mesEscolhido, int anoEscolhido);
			double MetodoDOIS(int ano);
			double MetodoTRES();
			double MetodoQUATRO();

		void grafico(const int valorSoma);
		void   setPathP(const std::string pessoa);
		std::string getPathP() const;

		void   setSalario(const double salar);
		double    getSalario() const;

};

#endif
