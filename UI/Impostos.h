#ifndef IMPOSTOS_H
#define IMPOSTOS_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Impostos : public pessoas
{
	public:
		     Impostos(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Impostos();
	// funçoes da classe
	void     addNoTxt();


};

#endif
