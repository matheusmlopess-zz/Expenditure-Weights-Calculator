#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Transporte : public pessoas
{
	public:
		     Transporte(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Transporte();
	// funçoes da classe
	void     addNoTxt();


};

#endif
