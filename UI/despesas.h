#ifndef DESPESAS_H
#define DESPESAS_H
#include <cstdio>
#include <string>
#include <iostream>
#include "mercado.h"
#include "pessoas.h"

class despesas : public pessoas // define herança
{
	
public:
   	      despesas();
	     ~despesas();
     
	 void addDespesas(std::string nomePessoa);
     std::string tipodeGasto();
     bool verificaSeExiste(std::string novaDespesa, std::string path);
};
#endif
