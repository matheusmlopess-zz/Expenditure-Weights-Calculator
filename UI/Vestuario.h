#ifndef VESTUARIO_H
#define VESTUARIO_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Vestuario : public pessoas
{
	public:
		     Vestuario(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Vestuario();
	// funçoes da classe
	void     addNoTxt();


};

#endif
