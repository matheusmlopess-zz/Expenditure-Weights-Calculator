#ifndef ANIMAIS_H
#define ANIMAIS_H

#include "despesas.h"
#include "pessoas.h"
#include <iostream>
#include <stdlib.h>
#include <string.h> 

class Animais : public pessoas
{
	public:
		     Animais(const std::string nomePessoa = "",const int anoO=0,const int mesS=0,const int valor=0);
	virtual ~Animais();
	// funçoes da classe
	void     addNoTxt();


};

#endif
