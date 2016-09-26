#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <list>
#include <ios>
#include <fstream>
#include "pessoas.h"
#include "interface.h"
#include "despesas.h"
#include "controle.h"
#include <chrono>
#include <thread>
#include <sstream>

using namespace std;

void lerDaBaseDDados (interface *okay);

int main() {
	
	
	interface *chamaInterface = new  interface();	 
        cout <<"\t|--------- Inicializando APP ---------|"<< endl;
	cout <<"\t|    Carregando Usuarios Cadastrados: |"<<  endl;
	int i =0;
	cout <<"\t|"; 
	for(i=0; i< 38; i++){
	cout <<"|"; 
	std::this_thread::sleep_for (std::chrono::milliseconds(30));
    }
    cout<<"\n" ;
    lerDaBaseDDados(chamaInterface);
    cout <<"\t|---------         DONE!    ---------|"<< endl;
	cout <<"\t|    Carregando Interface de Texto   |"<< endl;
	cout <<"\t|"; 
	for(i=0; i< 37; i++){
	cout <<"|"; 
	std::this_thread::sleep_for (std::chrono::milliseconds(100));
    }
    cout<<" " << endl;

	chamaInterface->todasOpcoes();		 
		
	return 0;
}


void lerDaBaseDDados (interface *okay){
    
	bool exite = false;
	string linha;
	ifstream abreArquivo;
	abreArquivo.open("bancoDDado.txt");  
	string nome, dia,mes,ano,renda,idfam;

	while (!abreArquivo.eof()) 
	{
		getline(abreArquivo, linha); 
		stringstream ss(linha);
		std::string token;
		int posicao =0;
		while (std::getline(ss, token, ','))
		{
			if(posicao==0) nome=token;
			if(posicao==1) dia=token;
			if(posicao==2) mes=token;
			if(posicao==3) ano=token;
			if(posicao==4) renda=token;
			if(posicao==5) idfam=token;
		posicao++;
		}
		if(!token.empty()){
		
		pessoas *novaPessoa = new pessoas(nome,std::stoi(dia), std::stoi(mes), std::stoi(ano), std::stoi(renda), idfam); 
		okay->addList(novaPessoa->retornaListaDados());
		std::cout <<"\t| :::> "<< nome << endl;
		std::this_thread::sleep_for (std::chrono::milliseconds(100));
		delete novaPessoa;
	}
	}
	abreArquivo.close();
}



