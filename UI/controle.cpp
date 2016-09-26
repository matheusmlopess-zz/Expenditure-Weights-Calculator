#include "controle.h"
#include "pessoas.h"
#include "interface.h"
#include <iostream>
#include <stdlib.h>
#include "despesas.h"
#include "mercado.h"

using namespace std;
controle:: controle(){ };
controle::~controle(){ };

list <string> controle::criaPessoa(){
	//Formas de criar nova entrada de pessoas:
	interface *volta;
	bool existe = false;
	pessoas *novaEntrada = new pessoas(); // inicializa classe pessoas para prenchimento pelo usuario 
	novaEntrada->setData();
	return novaEntrada->retornaListaDados();
};

void controle::criaDespesa(string nomePesso){
	despesas *novaDespesa = new despesas();
	novaDespesa->addDespesas(nomePesso);

  };
  
  
 
