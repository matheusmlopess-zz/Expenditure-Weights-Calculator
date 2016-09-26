#ifndef MERCADO_H
#define MERCADO_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Mercado : public pessoas
{
	public:
		     Mercado(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Mercado();
	// funçoes da classe
	void     addNoTxt();


};

#endif
