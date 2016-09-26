#ifndef SEGURO_H
#define SEGURO_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Seguros : public pessoas
{
	public:
		     Seguros(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Seguros();
	// funçoes da classe
	void     addNoTxt();


};

#endif
