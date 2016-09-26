#ifndef PESSOAS_H
#define PESSOAS_H

#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <list>
#include <ios>
#include <fstream>

class pessoas {

private:
	std::string nome, familiaID;
	int idade, dia, mes, ano, salario, day, month, year;

public:
	pessoas(const std::string n = "", const int d = 0, const int m = 0, const int a = 0, const int r = 0, const std::string familiaID ="");
	~pessoas();

	  bool setData();
	  void printData();
	  void cls();
	  
	  std::string getNome()const;
	  std::list<std::string> retornaListaDados();
	  
	  int  get_int(char *message);

	  /*----FUNÇOES SET & GET-----*/
	  void setNome(const std::string n);
	  void setDia(const int d);
	  void setMes(const int m);
	  void setAno(const int a);
	  void setIdade(const int i);
	  void setSalario(const int r);
	  void setFamiliaID(const std::string familiaID);
	       int 	  getDia()const;
		   int 	  getMes()const;	
		   int 	  getAno()const;	
		   int 	  getIdade()const;	
	       int 	  getSalario()const;
		   std::string    getFamiliaID()const;
		   
	bool verificaSeExiste(std::string novaPessoa);
	void lerDaBaseDDados();
	bool escreveNaBaseDDados(std::string pessoaNova);
	bool verificaSeExiste(std::string novaDespesa, std::string paths); 

};

#endif
