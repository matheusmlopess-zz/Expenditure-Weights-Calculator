#ifndef OUTROS_H
#define OUTROS_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Outros : public pessoas
{
	public:
		     Outros(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Outros();
	// fun�oes da classe
	void     addNoTxt();


};

#endif
