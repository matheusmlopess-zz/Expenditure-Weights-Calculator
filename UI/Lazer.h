#ifndef LAZER_H
#define LAZER_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Lazer : public pessoas
{
	public:
		     Lazer(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Lazer();
	// funçoes da classe
	void     addNoTxt();


};

#endif
