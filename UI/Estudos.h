#ifndef ESTUDOS_H
#define ESTUDOS_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Estudos : public pessoas
{
	public:
		     Estudos(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Estudos();
	// funçoes da classe
	void     addNoTxt();


};

#endif
