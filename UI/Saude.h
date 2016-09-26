#ifndef SAUDE_H
#define SAUDE_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Saude : public pessoas
{
	public:
		     Saude(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Saude();
	// funçoes da classe
	void     addNoTxt();


};

#endif
