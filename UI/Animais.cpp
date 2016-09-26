#include "pessoas.h"
#include "despesas.h"
#include "Animais.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <conio.h>	  // std::getch()


using namespace std;
Animais::Animais(string nomePessoa, int anoO, int mesS, int valor){
bool sai =false;
std::ostringstream geraTxt,geraTxt2;
geraTxt2 <<"Despesas_"<< nomePessoa <<".txt"; 
geraTxt  <<"Animais_"<< nomePessoa <<"_"<< std::to_string(anoO) <<"_"<<std::to_string(mesS)<<".txt"; 

	
	int yesNo, valorNovo;
    ofstream output(geraTxt.str(), std::ios::app);
    ofstream output2(geraTxt2.str(), std::ios::app);

	output<<valor<<endl;
	
	do{
		system("cls");
    	cout << "\t ___________________________________________ "<< endl;
		cout << "\t|    Tem mais despesas com ANIMAIS para:    |"<< endl;
		cout << "\t|          MES ["<<mesS<<"] ANO ["<<anoO<<"] ?             |"<< endl;
		cout << "\t|              1 - sim 2- nao               |"<< endl;
		cout << "\t|___________________________________________|"<< endl;
		cout << "\t::>>";
		cin>> yesNo;
		
		if(yesNo ==1){
			cout << "Qual o valor da despesa"<< endl;
			cin>> valorNovo;
			output<<valorNovo<<endl;
			system("cls");
		}else{  sai= true;}
	
	}while(!sai);
	
	bool existeDespesa= pessoas::verificaSeExiste(geraTxt.str(),geraTxt2.str());
	
	if(!existeDespesa){
	
		ofstream output2(geraTxt2.str(), std::ios::app);
    	output2<<geraTxt.str()<<endl;
    }else{
	cout<<" " <<endl;
	}
    	

}
Animais::~Animais(){}


