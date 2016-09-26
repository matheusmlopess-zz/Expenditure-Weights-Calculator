#include <cstdio>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <sstream>

#include "despesas.h"
#include "pessoas.h"
#include "Mercado.h"
#include "Seguros.h"
#include "Transporte.h"
#include "Vestuario.h"
#include "Saude.h"
#include "Outros.h"
#include "Lazer.h"
#include "Impostos.h"
#include "Estudos.h"
#include "Animais.h"

using namespace std;

despesas::despesas(){}
despesas:: ~despesas(){  }; // destrutor

void despesas::addDespesas(string nomePessoa){
	bool sai = false;
	string  gasto, Tipo;
	string *pName = new std::string;
	int valor,mesS, anoO, j = 0, ok = 1, yesNo;
	pessoas verificaInteiro;
	stringstream ss;
	
			while (!sai){
				system("cls");
									cout << "\t ____________________________________ "<< endl;
									cout << "\t|    Adicionando nova despesa para:  |"<< endl;
									cout << "\t|       "<<    nomePessoa     	      << endl;
			Tipo = tipodeGasto();
			if(Tipo != "sair"){
			anoO  = verificaInteiro.get_int("\t| Qual o ano da dispesa? > ");
			mesS  = verificaInteiro.get_int("\t| Qual o mes da dispesa? >");
			valor = verificaInteiro.get_int("\t| Qual o valor : > ");
			}			
			if (Tipo == "Mercado")   {Mercado *nMercado = new Mercado(nomePessoa, anoO, mesS, valor); };
			if (Tipo == "Transporte"){Transporte *nTransporte = new Transporte(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Estudos")   {Estudos *nEstudos = new Estudos(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Lazer")     {Lazer *nLazer = new Lazer(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Vestuario") {Vestuario *nVestuario = new Vestuario(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Seguros")   {Seguros *nSeguros = new Seguros(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Animais")   {Animais *nAnimais = new Animais(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Saude")     {Saude *nSaude = new Saude(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "impostos")  {Impostos *nImpostos = new Impostos(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "Outros")    {Outros *nOutros = new Outros(nomePessoa, anoO, mesS, valor);};
			if (Tipo == "sair") { sai =  true ; }
	} ;

};

string despesas::tipodeGasto(){

	int tipo = -1;
	string tipoDGasto;

	while (tipo < 0 || tipo >10){
		stringstream ss;
		
		cout <<" \t|____________________________________| " << endl;
		cout << "\t|    Adicinar entrada de gstos com:  |" << endl;
		cout << "\t|                                    |" << endl;
		cout << "\t| 1 - Mercado  " << "    2 - Transporte    |" << endl;
		cout << "\t| 3 - Estudos  " << "    4 - Lazer         |" << endl;
		cout << "\t| 5 - Vestuario" << "    6 - Seguros       |" << endl;
		cout << "\t| 7 - Animais  " << "    7 - Saude         |" << endl;
		cout << "\t| 9 - impostos " << "    0 - Outros        |" << endl;
		cout << "\t|   10 - voltar ao menu inicial      |" << endl;
        cout <<" \t|____________________________________|"<<endl;
		cout <<" \t ::: > ";
		cin >> tipo;
		if (tipo < 0 || tipo >10){ cout << "Valor invalido ! tente novamente.(ENTER)" << endl; _getch(); system("cls");  }
	}


	if (tipo == 1) { tipoDGasto = "Mercado"; }
	if (tipo == 2) { tipoDGasto = "Transporte"; }
	if (tipo == 3) { tipoDGasto = "Estudos"; }
	if (tipo == 4) { tipoDGasto = "Lazer"; }
	if (tipo == 5) { tipoDGasto = "Vestuario"; }
	if (tipo == 6) { tipoDGasto = "Seguros"; }
	if (tipo == 7) { tipoDGasto = "Animais"; }
	if (tipo == 8) { tipoDGasto = "Saude"; }
	if (tipo == 9) { tipoDGasto = "impostos"; }
	if (tipo == 0) { tipoDGasto = "Outros"; }
	if (tipo == 10) { tipoDGasto = "sair"; }

	return tipoDGasto;
}



