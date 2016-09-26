#include "diagnosticos.h"
#include "pessoas.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>	  // std::getch()
#include <sstream>
#include <fstream>
#include <map>
//#include <graphics.h>

using namespace std;


typedef std::multimap<std::string, int> MapType;
std::list<std::list<std::string> > dadosPessoaisDes;


diagnosticos:: diagnosticos(string pathParaPessoa, string nomeDaPessoa, list<list<string> >  dadosPessoaisDespesa){
 	setPathP(pathParaPessoa);
 	
 		dadosPessoaisDes = dadosPessoaisDespesa;
		string salario;
		list<list<string>>::iterator itr;
		
		if(pathParaPessoa !=" "){
		
		for (itr = dadosPessoaisDes.begin(); itr != dadosPessoaisDes.end(); itr++){
		int posicao = 0;
		list<string>tl = *itr;
		list<string>::iterator it;
		
		it=tl.begin();
		if ( nomeDaPessoa == *it){
		for (it = tl.begin(); it != tl.end(); it++){
			if (posicao == 5)   salario = *it ;
				posicao++;
			}
			posicao = 0;
		}
		
		setSalario(std::stoi(salario));
 		}
 }
 };
diagnosticos::~diagnosticos(){ };

double diagnosticos::MetodoUM(int mesEscolhido, int anoEscolhido)  {

	bool exite = false;
	string linha;
	ifstream abreArquivo, calculo;
	abreArquivo.open(getPathP());
		string tipoDespesas,nome;
		int ano,mes, gastoTotalMes = 0;
		int soma=0, k,x;

    	multimap<string,int> organiza_tipodegastosPorMes;
        multimap<string,int>::iterator itr_usuario;

		while (!abreArquivo.eof()){
			getline(abreArquivo, linha);
			stringstream ss(linha);
			std::string token;
			int posicao =0;

			while (std::getline(ss, token, '_')){
					if(!token.empty()){
					if(posicao==0) tipoDespesas=token;
					if(posicao==1) nome= token;
					if(posicao==2) ano=std::stoi(token);
					if(posicao==3) {
						if (token.length() == 6)
						mes=std::stoi(token.substr(0,2));
						else
						mes=std::stoi(token.substr(0,1));
						};
					posicao++;
			    }
			}

			if(!linha.empty() && !abreArquivo.eof() && mes == mesEscolhido && ano == anoEscolhido ){
			string linha2;
			calculo.open(linha);
			    while(!calculo.eof()) {
					getline(calculo, linha2);
					if(!linha2.empty()){
						k =  std::stoi(linha2);
		      			soma = soma + k;
		      		}
	      		}
	      	 	calculo.close();

	      	 grafico(soma);
	      	 cout << "        [ " << tipoDespesas << " ] " << "Total : "  << soma << endl;
		     gastoTotalMes = gastoTotalMes + soma;

			}
			soma =0;
		}
		 cout << "\t|                    " << endl;
		 grafico(gastoTotalMes);
		 cout << "   [TOTAL] " << gastoTotalMes << endl;
	     cout << "\t|                    "     << endl;
		// grafico(getSalario() );

  	// cout << "\t| [ENTER] : Continua ... " << endl;
 	//_getch();
 return gastoTotalMes;

};

void diagnosticos::grafico(int valorSoma){
int i, print;
//cout << "valor da soma :"<<valorSoma << endl;

if(valorSoma > 0){
	valorSoma = valorSoma/100;
    cout <<"\t|";
		for (i=1  ; i < valorSoma ; i++)
		cout <<"=";
		cout <<"|";
}
cout <<"\t";
};

double diagnosticos::MetodoDOIS(int anoEscolhido){
		int mesEscolhido;

	int jj, somaAno =0;
	for(jj = 1 ; jj < 13 ; jj++){
		cout <<"\t ___________________________________________________________________" << endl;
		cout <<"\t| Gastos no o mes :" <<jj << endl;
		cout <<"\t|                                                                   " << endl;
		             somaAno = MetodoUM(jj,anoEscolhido) + somaAno;
		cout <<"\t|                                                                   " << endl;
		cout <<"\t|----------------------------------------------------------------- " << endl;
		cout <<"\t| A soma acumulada dos gastos ate o mes "<< jj << " eh :" << somaAno << endl;
		cout <<"\t|___________________________________________________________________" << endl;

	}
	
	return somaAno;
    };
double diagnosticos::MetodoTRES(){
	
	
	double SalarioCadastro = getSalario();
	
	bool exite = false, mudou = false;
	double saldoAtual =0, SalarioAcumulado = 0, novoSalario;
	string tipoDespesas,nome, linha;
	int gastoTotal = 0, novoAno, novoMes, yesNo, k, ano,mes ;
	ifstream abreArquivo, calculo;
	abreArquivo.open(getPathP());
	
	std::ostringstream geraTxt;
	multimap<string,int> organiza_tipodegastosPorMes;
    multimap<string,int>::iterator itr_usuario;
        
    system("cls");
    cout << " " << endl << endl;
    cout << "\t ____________________________________________________________ " << endl;
	cout << "\t|   O salario a ser considerado para o calculo foi :   " << endl;			
	cout << "\t|     [" << getSalario() << "] para todo o periodo?    " << endl;
	cout << "\t|                    0- sim 1 - nao ?		          " << endl;
	cout << "\t| :::>"; cin >> yesNo; 	
	cout << "\t|____________________________________________________________ " << endl;		    

	if (yesNo == 1){
			cout << " " << endl;
			cout << "\t ____________________________________________________________ " << endl;
			cout << "\t| Digite o ano em que o salario foi alterado e o mes de inicio : " << endl;
			cout << "\t| ANO :::>";  cin >> novoAno ;
			cout << "\t| MES :::>";  cin >> novoMes ;
			cout << "\t| Valor do Salario Para o periodo :::>";  cin >> novoSalario ;
	}
	       cout <<  "\t|  " <<endl;
		   cout <<  "\t|                       Analizando Gastos....                 " <<endl;
		   cout <<  "\t|  " <<endl;
		while (!abreArquivo.eof()){
			getline(abreArquivo, linha);
			stringstream ss(linha);
			std::string token;
			int posicao =0;
			
			while (std::getline(ss, token, '_')){
					if(!token.empty()){
					if(posicao==0) tipoDespesas=token;
					if(posicao==1) nome= token;
					if(posicao==2) ano=std::stoi(token);
					if(posicao==3) {
						if (token.length() == 6)
						mes=std::stoi(token.substr(0,2));
						else
						mes=std::stoi(token.substr(0,1));
						};
					posicao++;
			    }
			}
			
			if(!linha.empty() && !abreArquivo.eof()){
			string linha2;
			calculo.open(linha);
			    while(!calculo.eof()) {
					getline(calculo, linha2);
					if(!linha2.empty()){
						k =  std::stoi(linha2);
		      			gastoTotal = gastoTotal + k;
		      		}
	      		}
	      		calculo.close();
	      		
	      		if (yesNo == 1 && ano == novoAno && mes >= novoMes && mudou == false ){
	      		    cout << "\t|____________________________________________________________ " << endl;
					cout << "\t| Mudanca de salario de  ------>" << SalarioCadastro <<endl;
				  						SalarioCadastro = novoSalario;
				  	cout << "\t| Para --->" << SalarioCadastro << " em: ["<<novoMes <<" / " << ano <<" ]"<< endl;
				  	cout << "\t|____________________________________________________________ " << endl;
				    mudou = true;
				  }
			}
			    geraTxt <<mes<<"/"<< ano;
				map<string,int>::iterator verifica = organiza_tipodegastosPorMes.find(geraTxt.str());
			
				if (verifica == organiza_tipodegastosPorMes.end()) {
					
					 organiza_tipodegastosPorMes.insert(MapType::value_type(geraTxt.str(), SalarioCadastro ));
					 
					 	if (yesNo == 1 && ano == novoAno && mes >= novoMes ){
					 		SalarioAcumulado  = SalarioCadastro + SalarioAcumulado;
					 		cout <<"\t| ["<< mes <<"/"<<ano<<"] Salario de: [ "<<SalarioCadastro<<" ]. Acumulado : [ "<< SalarioAcumulado <<" ] " <<endl;
						}	else{
							SalarioAcumulado  = Salario + SalarioAcumulado;
						    cout <<"\t| ["<< mes <<"/"<<ano<<"] Salario de: [ "<<   Salario     <<" ]. Acumulado : [ "<< SalarioAcumulado <<" ] " <<endl;
						} 
				}else{ 
				//	cout <<"> O Salario Acumulado para: ["<< mes <<"/"<<ano<<"] ["<<tipoDespesas <<"] --> manteve se em: [ "<< SalarioAcumulado <<" ] " <<endl;
			  	}
			  	geraTxt.str("");
		}
		
		    saldoAtual = SalarioAcumulado - gastoTotal;
			cout << "\t|____________________________________________________________ " << endl;
			cout << "\t|                   DIAGNOSTICO DA ANALISE                    " << endl;
		 	cout << "\t|                                                             " << endl;
			cout << "\t| O valor monetario recebido no total foi de R$" << SalarioAcumulado     << endl;		////////// O atributo "Salario" tem que ser o valor total da renda de todos os meses
			cout << "\t| Seus gastos ateh agora foram de R$" << gastoTotal             << endl;
			cout << "\t| Seu saldo atual eh R$ :" << saldoAtual    << endl;
			cout << "\t|____________________________________________________________" << endl;
	
	if( saldoAtual == 0) {
			cout << " " << endl;	
			cout << "\t ___________________________________________________________________ " << endl;
			cout << "\t| Você estah no limite! Gastou exatamente todo o dinheiro que tinha!|" << endl;
			cout << "\t| Procure gerenciar melhor suas financas!                           |" << endl;
			cout << "\t|___________________________________________________________________|" << endl;
			cout << " " << endl;	
	}
	
	if( saldoAtual  < 0) {
	
			cout << " " << endl;	
			cout << "\t __________________________________________________________________ " << endl;
			cout << "\t| Cuide melhor de suas financas! Voce esta com saldo negativo ...  |" << endl; 
			cout << "\t| Procure eliminar gastos desnecessarios!                          |"<< endl;
	}
			
	if( saldoAtual > 0) {
	
			cout << " " << endl;	
			cout << "\t __________________________________________________________________ " << endl;
			cout << "\t|               Parabens! Seu saldo estah positivo!                |" << endl;}
			cout << "\t|__________________________________________________________________|" << endl;
		
	if( (saldoAtual > 0) &&  (saldoAtual < 200)){
			cout << " " << endl;	
			cout << "\t ______________________________________________________ " << endl;
			cout << "\t| Porem, cuide para nao entrar no vermelho!            |" << endl;
			cout << "\t| Cuide bem para que seu saldo nao se fique negativo!  |" << endl;
			cout << "\t|______________________________________________________|" << endl;
	}
		
	if( (saldoAtual >= 200) && ( ( SalarioAcumulado - gastoTotal )< 1000)){
	
			cout << " " << endl;	
			cout << "\t ___________________________________________________ " << endl;
	        cout << "\t|        Muito bem! Continue poupando!              |" << endl;
			cout << "\t|___________________________________________________|" << endl;
			}
		
	if( saldoAtual >= 1000){
			cout << " " << endl;	
			cout << "\t ___________________________________________________________________ " << endl;
			cout << "\t|               Voce poderia aplicar! O que acha?                   |" << endl;
			cout << "\t|  Para melhores informacoes, converse com seu gerente do banco!    |" << endl;
			cout << "\t|___________________________________________________________________|" << endl;
	}
	 return gastoTotal;
//	_getch();	
};


double diagnosticos::MetodoQUATRO(){
	
	double valorFinal = 0, valorFinal2=0;
	int op, cont =0;
	int mesEscolhido, anoEscolhido;
	map<int,string> identifica_usuario;
	string line, familiaIDlistar;
 	list<list<string>>::iterator itrr; 				//Iterator da lista com as listas de informalção pessoas 
	pessoas verificaint;
	
	
	cout << "\t _______________________________________   " << endl;
	cout << "\t|     Qual a familia quer calcular      :  " << endl;
	int jj=0;
	
	for (itrr = dadosPessoaisDes.begin(); itrr != dadosPessoaisDes.end(); itrr++){
		int posicao = 0;
		list<string>tl = *itrr;
		list<string>::reverse_iterator itt;  // inverte a ordem da lista começando por FamiliaID, Salario ... Nome 
	    itt=tl.rbegin();
	    identifica_usuario[jj]=*itt;
	    cout <<"\t| " << jj <<" --> " <<   *itt     << endl;
	    jj++;
	}
	cout << "\t|_______________________________________" << endl;
	int escolha = verificaint.get_int("\t::: >");
	cin.ignore();
	
	familiaIDlistar = identifica_usuario.find(escolha)->second;
	
	
	std::ostringstream novoTXT;
	novoTXT << familiaIDlistar <<".txt";
	ofstream outfile(novoTXT.str());
	list<list<string>>::iterator itr;
	
		
					
				  system("cls");
				  std::ostringstream novoPath;
				  cout << "\t _______________________________________ " << endl;
	    		  cout << "\t| 1 - Analise por Um mes                |" << endl;
		          cout << "\t| 2 - Por por um ano                    |" << endl;
		          cout << "\t| 3 - Por saldo atual                   |" << endl;
		          cout << "\t|_______________________________________| " << endl;
				  cout << "\t|::>> "; cin >> op;
				  
				if(op==1){
				
				cout << "\t| Para qual mes quer a analise?  ::> " ; cin >> mesEscolhido;  
	            cout << "\t| Para qual ano quer a analise? ::> " ;     cin >> anoEscolhido; 
	            cout << "\t|" << endl;;
		    	}
		    	
		    	if(op==2){
					cout <<"\t| Para qual ano quer a analise?";
		 			cin >> anoEscolhido;
		    	}
				
				

	for (itr = dadosPessoaisDes.begin(); itr != dadosPessoaisDes.end(); itr++){
		int posicao = 0;
		list<string>tl = *itr;
		list<string>::reverse_iterator it;  // inverte a ordem da lista começando por FamiliaID, Salario ... Nome 
	    it=tl.rbegin();
	    
		if(familiaIDlistar == *it){ // restição do código
			for (it = tl.rbegin(); it != tl.rend(); it++){
				
				/*---------------Imprime na tela do usuario-------------------------------------------*/
				if (posicao == 0)   cout    << "\t _______________________________________ " << endl;	
				if (posicao == 0)   cout    << "\t|   Id da Familia      " << *it << endl;
				if (posicao == 0)   cout    << "\t|-------------------------------------- "<< endl;
				if (posicao == 1) { cout    << "\t|   Salario:           " << *it << endl;   setSalario(std::stoi(*it));  }  	
				if (posicao == 2)   cout    << "\t|   Idade:             " << *it << endl;
				if (posicao == 6)   cout    << "\t|-------------------------------------- "<< endl;	
				if (posicao == 6) {	cout    << "\t|                              "<< endl;
									cout    << "\t|  NOME:   "<< *it                << endl;
									cout    << "\t|                             " << endl;
			
				novoPath <<"Despesas_"<< *it  <<".txt";
				setPathP(novoPath.str());
				novoPath.str("");
				/********************************************o metdo começa aqui**********************/
				if (op == 1)
					valorFinal=MetodoUM(mesEscolhido, anoEscolhido) + valorFinal;
				if (op == 2)
					valorFinal2=MetodoDOIS(anoEscolhido) + valorFinal2;
				/********************************************o metdo começa aqui**********************/
				}
				
				posicao++;
			}
			posicao = 0;
		}

	}
	
	if(op==1){
	cout    << "\t|_______________________________________ " << endl;
	cout    << "\t| Para familia [" << familiaIDlistar<<  "] no mes [ " << mesEscolhido <<" ]"<< endl;
	cout    << "\t| O Gastos total foi de R$ : "<< valorFinal << endl;
	cout    << "\t|_______________________________________ " << endl;
	}
	
	if(op==2){
	cout    << "\t|_______________________________________ " << endl;
	cout    << "\t| Para familia [" << familiaIDlistar<<  "] no ano [ " << anoEscolhido <<" ]"<< endl;
	cout    << "\t| O Gastos total foi de R$ : "<< valorFinal2 << endl;
	cout    << "\t|_______________________________________ " << endl;
	}
	
	identifica_usuario.clear();
//	_getch();
	
    };

void   diagnosticos::setPathP(const string pessoa ){ pathP = pessoa;}
string diagnosticos::getPathP() const { return pathP; }

void   diagnosticos::setSalario(const double salar ){ Salario = salar;}
double diagnosticos::getSalario() const { return Salario; cout << Salario << endl;}



