#include "interface.h"
#include <iostream>
#include <stdlib.h>   
#include <string.h>	  
#include <stdio.h >
#include <conio.h>	  // std::getch()
#include <ctype.h>
#include <sstream>    // std::stringstream
#include <cstdio>
#include <limits>
#include <map>
#include <cstddef>        // std::size_t
#include <fstream>


#include "pessoas.h"
#include "despesas.h"
#include "controle.h"
#include "diagnosticos.h"

using namespace std;
list<list<string> > dadosPessoais;

interface:: interface(){ };
interface::~interface(){ };

/******************************* Lista as opçoes da aplicação *****************************/
void interface::todasOpcoes(){
	int op=1, num;
	controle *ctr = new controle();
	int inMenu = 0;
                 
	do{
		 system("cls");
		 cout << "\t ________________________________________ " << endl;
		 cout<<  "\t|      APP PARA CALCULO DE DESPESAS      |" << endl;
		 cout << "\t|________________________________________|" << endl;
		 cout << "\t|                                        |" << endl;
		 cout << "\t|             MENU INICIAL               |" << endl;
		 cout << "\t|                                        |" << endl;
		 cout << "\t|  1 - Cadastrar Pessoa	+ Despesa        |" << endl;
		 cout << "\t|  2 - Alterar Pessoa                    |" << endl;
		 cout << "\t|  3 - Excluir Pessoa                    |"	<< endl;
		 cout << "\t|________________________________________|" << endl;
		 cout << "\t|                                        |" << endl;
		 cout << "\t|           MENU DE DESPESAS             |" << endl;
		 cout << "\t|                                        |" << endl;
		 cout << "\t|  4 - ADD Despesa                       |" << endl;
		 cout << "\t|  5 - Analises financeiras              |" << endl;
		 cout << "\t|________________________________________|" << endl;
		 cout << "\t|                                        |" << endl;
		 cout << "\t|               OPCOES                   |" << endl;
		 cout << "\t|                                        |" << endl;
		 cout << "\t|  6 - Listar todas as pessoas           |" << endl;
		 cout << "\t|  7 - Listar por familias               |" << endl;
		 cout << "\t|  8 - LEIAME(Descreve as Opc.do menu)   |" << endl;
		 cout << "\t|  0 - Sair                              |" << endl;
		 cout << "\t|________________________________________|" << endl;
		 cout<< "\tDigite sua opc.: ";
		 cin >> num;
		 cin.ignore(numeric_limits<streamsize>::max(), '\n');

			 switch (num){
			 case 1:  cadastrarpessoas();	 		 break;   //chama função para listar pessoas ja cadastradas
			 case 2:  alterarPessoa();		         break;	  //chama função para ALTERAR um cadastro 
			 case 3:  excluirPessoa();		         break;
			 case 4:  addDespesas();		         break;
			 case 5:  analiseFin();                  break;
			 case 6:  listarPessoas();		         break;
			 case 7:  listarFamilias(); 	         break;
			 case 8:  leiaME();				 		 break;	  //Descreve todas as funçoes do MENU
			 case 0:  op = 0; system("exit");		 break;
			 default:
				 cout << "\t|Opcao invalida! Tecle [enter] e tente novante." << endl;
				 system("pause");
				 break;
			}
    }while(op!=0);
}

/******************************* Cria uma nova entrada: Pessoas *****************************/
void interface::cadastrarpessoas(){
		
		controle *novaPessoa = new controle();
		system("cls");
		cout << " " << endl;
	    cout << "\t _________________________________________ " << endl;
		cout << "\t|Preecha de acordo com o que for pedidio:  " << endl ;
		
		list<string> novaPessoaAdd = novaPessoa->criaPessoa();
		string nomeDaPessoa = novaPessoaAdd.front();
		dadosPessoais.push_back(novaPessoaAdd);
		novaPessoa->criaDespesa(nomeDaPessoa);
		delete novaPessoa;
}

/******************************* Altera uma entrada existente: Pessoas *****************************/
void interface::alterarPessoa() {
	string line, nomeParaAlterar,paraRemover;  			// variaveis iniciais da função 
	pessoas *novaAlterada = new pessoas();	// nova entrada para pessoa alterada
	bool shouldBreak = false;
	cout << "\t ________________________________________ " << endl;
	cout << "\t|  Quem cadastrado deseja ALTERAR? >     " << endl;
	nomeParaAlterar = mostraUsuarios();
	
	//cout << "Digite o nome da pessoa cadastrada que deseja ALTERAR : >";
	//getline(cin, nomeParaAlterar); 			// espera usuario digitar o nome da pessoa que quer alterar
	
 	list<list<string> >::iterator itr; 				//Iterator da lista com as listas de informalção pessoas 
 	cout << endl;
	for (itr = dadosPessoais.begin(); itr != dadosPessoais.end(); itr++){ // inicio da iteração para as posições da lista 
		
		list<string> tl = *itr;   // iterator para itear as posiçoes usadas dentro da lista 1 list< it(1) = list<string> 1, it(2) = list<string> 2;
		list<string>::iterator it;// iterator para itear as posiçoes usadas dentro da listas 1,2,3 ... it(1) =nome , it(2) = dia de nascimento ....
		for (it = tl.begin(); it != tl.end(); it++){ // inicio da iteração da lista<string> i com i= 1,2,3 ...
			 if(nomeParaAlterar == *it ){  // se dentro desta lista for encontrado o nome a ser alterado 
				 cout << "\t ________________________________________ " << endl;
				 cout << "\t|  Alterando Da Lista: " << *it             << endl;
				 paraRemover = buscarPessoa(*it);
				 removedABaseDDados(paraRemover);
				 dadosPessoais.remove(*itr); //remove a lista correspondente a entrada a ser alterada 
				 novaAlterada->setData();    // chama novamente o preechimento de dados pessois
				 dadosPessoais.push_front(novaAlterada->retornaListaDados()); // adiciona dados alterados ao topo da lista de usuarios
				 
				 //*****altera o nome dos documentos de texto/
				 //1. le alista que retorna os dos do novo usuario  novaAlterada->retornaListaDados();
				 //2. pegar a primeira posiçao (o Nome) = novoNome e usar um 
				 //3.   abrido o documento anterio com o nome aneterio (paraRemover)
				 //4.   ostringstream novoTitolo;
				 //5.   novoTitolo << "Dispesas_" << "novoNome.txt";
				 //6.   string nova = linha do com o novo nome 
				 //********************************************
			
			
			
				 shouldBreak = true;
				 delete novaAlterada; //limpa a memoria 
				 break;	  			  // para se o ciclo e volta ao menu
			}
			 if (shouldBreak)  break;
		}
		if (shouldBreak)  break;
	}
     cout << "\t| Entrada alterada com sucesso!           " << endl;
     cout << "\t|________________________________________ " << endl;
     cout << "\t (ENTER ...)" << endl;
	getch();
}
/******************************* Exclui uma entrada: Pessoas *****************************/
void interface::excluirPessoa() { 
  //mesmo raciocínio exceto que nao é preciso alter os dados pessoais e somente excluir a entrada da lista 
	string line, nomeParaExcluir,paraRemover;
//	cout << "Digite o nome da pessoa que deseja Excluir : >";
//	getline(cin, nomeParaExcluir);
	cout << "\t ________________________________________ " << endl;
	cout << "\t|  Quem cadestrado desejas ALTERAR? >     " << endl;
	nomeParaExcluir = mostraUsuarios();

	bool shouldBreak = false;
 	list<list<string>>::iterator itr;
 	cout << endl;
	for (itr = dadosPessoais.begin(); itr != dadosPessoais.end(); itr++){
		int posicao = 0;
		list<string>tl = *itr;
		list<string>::iterator it;
		
		for (it = tl.begin(); it != tl.end(); it++){
			
			 if(nomeParaExcluir == *it ){ // se dentro desta lista for encontrado o nome a ser excluido 
			 cout << "REMOVIDO DA LISTA:" << *it << endl;
			 paraRemover = buscarPessoa(*it);
			 removedABaseDDados(paraRemover);
			 dadosPessoais.remove(*itr); //remove a lista correspondente a entrada a ser excluido 
			 shouldBreak = true;
			 break;	  			  // para se o ciclo e volta ao menu
			 }
			 if (shouldBreak)  break;
		}
		
		
		
		if (shouldBreak)  break;
	}
	getch();
};

/******************************* Adciona uma entrada: Despesas *****************************/
void interface::addDespesas(){
	bool existe = false;
	despesas *novaDespesa = new despesas();
	string nomeCadastro;
	
	map <string, char> grade_list;
	system("cls");
    cout << "\t____________________________________ "<< endl;
	cout <<"\t|    Adicionar dispesas para:        |"<<endl;
	nomeCadastro = mostraUsuarios();
	novaDespesa->addDespesas(nomeCadastro);

};
/******************Chama as classes responsaveis pela analise finaceira ********************/
void interface::analiseFin(){ 

// nova instacia do analiseResulda.cpp
// novaAnalis *test = new novaAnalis();

// pedir o nome do usario cadastrado
/*	test->metodo1(nome);
	test->metodo1(nome);
	test->metodo1(nome);
	chama as funçoes da analise financeira a aprtir de um switch case
	1 classe metodi 1
	2 classe metodi 2
	3 classe metodi 3
*/

	system("cls");
		string salario;
		string nomeDaPessoa;
		int op;
		diagnosticos *qual;
		int conta =0;

	do{
		if(conta>0){
		  cout << "\t(ENTER) Continue..." << endl;
		  _getch();
		}
		conta ++;
		system("cls");
		cout << endl;
		cout << "\t _______________________________________ " << endl;
		cout << "\t| 1 - Analise por Um mes                |" << endl;
		cout << "\t| 2 - Por pora um ano                   |" << endl;
		cout << "\t| 3 - Por saldo atual                   |" << endl;
		cout << "\t| 4 - Por Familia                       |" << endl; 
		cout << "\t| 5 - SAIR                              |" << endl;
		cout << "\t|_______________________________________|" << endl;
		cout << "\t:::>";
		cin >> op;
		
		if (op != 4 && op != 5){
		cout << "\t _______________________________________" << endl;
		cout << "\t| Para quem? >" << endl;
		cout << "\t|---------------------------------------" << endl;
		nomeDaPessoa=mostraUsuarios();
		cout << "\t         [ "<< nomeDaPessoa <<" ]      "  << endl;
   		std::ostringstream geraTxt;
		geraTxt <<"Despesas_"<< nomeDaPessoa <<".txt"; // busca pelo nome a lista de despesas dessas pessoa

				qual = new diagnosticos(geraTxt.str(), nomeDaPessoa , dadosPessoais); // envia para a analise de diagnostico
		}
		
		switch (op){
			case 1:		
				int mesEscolhido, anoEscolhido;
				cout << "\t Para qual mes quer a analise?";
	            cin >> mesEscolhido;
	            cout << "\t Para qual ano quer a analise?";
	            cin >> anoEscolhido;
		    	qual->MetodoUM(mesEscolhido, anoEscolhido);
						break;
			case 2: 	
				cout << "\t Para qual ano quer a analise?";
		 		cin >> anoEscolhido;
				qual->MetodoDOIS(anoEscolhido);     	break;
			
			case 3: 
				qual->MetodoTRES(); 		break;
			case 4: 
				qual = new diagnosticos(" ", "  " , dadosPessoais); // envia para a analise de diagnostico
				qual->MetodoQUATRO(); 		break;
			
			case 5:  	system("exit"); 			break;
			default:	cout << "Opcao invalida!" << endl;		getchar(); 			break;	
		}
	}while(op!=5);
};

/***************Adiciona a lista da interface apartir de outra classe***********************/
void interface::addList(list<string> listParaImprimir){ dadosPessoais.push_back(listParaImprimir); };

/*******************Lista as pessoas cadastradas na aplicação  *****************************/
void interface::listarPessoas(){ // mesmo raciocínio exceto que nao é preciso alter os dados pessoais mas agora imprime na tela as informações dentro das listas 
	ofstream outfile("pessoasPresentesExport.txt");
 	list<list<string>>::iterator itr;
 	cout << endl;
	for (itr = dadosPessoais.begin(); itr != dadosPessoais.end(); itr++){
		int posicao = 0;
		list<string>tl = *itr;
		list<string>::iterator it;
		for (it = tl.begin(); it != tl.end(); it++){
			/*---------------Imprime na tela do usuario-------------------------------------------*/
			if (posicao == 0)   cout    << " \t._____________________________"<< endl;	
			if (posicao == 0)   cout    << "\t|Nome: "<< *it 				  << endl;
			if (posicao == 0)   cout    << "\t|----------------------------- "<< endl;	
			if (posicao == 1)   cout    << "\t|   Dia de nascimento: " << *it << endl;
			if (posicao == 2)   cout    << "\t|   Mes de nascimento: " << *it << endl;
			if (posicao == 3)   cout    << "\t|   Ano de nascimento: " << *it << endl;
			if (posicao == 4)   cout    << "\t|   Idade:             " << *it << endl;
			if (posicao == 5)   cout    << "\t|   Salario:           " << *it << endl;
			if (posicao == 6)	cout    << "\t|   Id da Familia      " << *it << endl;
			
			/*---------------Escreve num arquivo de texto-----------------------------------------*/
			if (posicao == 0)	outfile << "\t._____________________________" << endl;		
			if (posicao == 0)   outfile << "\t|Nome: "<< *it 				  << endl;
			if (posicao == 0)   outfile << "\t|---------------------------- " << endl;
			if (posicao == 1)	outfile << "\t|   Dia de nascimento: " << *it << endl;
			if (posicao == 2)	outfile << "\t|   Mes de nascimento: " << *it << endl;
			if (posicao == 3)	outfile << "\t|   Ano de nascimento: " << *it << endl;
			if (posicao == 4)	outfile << "\t|   Idade:             " << *it << endl;
			if (posicao == 5)	outfile << "\t|   Salario:           " << *it << endl;
			if (posicao == 6)	outfile << "\t|   Id da Familia      " << *it << endl;
		
			posicao++;
		}
		posicao = 0;
	
	}
		outfile.close();
		
	getch();
};

string interface::buscarPessoa(string nomeP){

 	
 // mesmo raciocínio exceto que nao é preciso alter os dados pessoais mas agora imprime na tela as informações dentro das listas 
	list<list<string>>::iterator itr;
 	string  a,b,c,d,e,f;
 	int posicao=0;
 	//cout << "Digite o primeiro, segundo ou o nome completo da pessoa que deseja achar >";
 	//getline(cin,nomeP);
 	
 	std::ostringstream geraNome;
	
 	
 		for (itr = dadosPessoais.begin(); itr != dadosPessoais.end(); itr++){ // inicio da iteração para as posições da lista 
		
		list<string> tl = *itr;   // iterator para itear as posiçoes usadas dentro da lista 1 list< it(1) = list<string> 1, it(2) = list<string> 2;
		list<string>::iterator it;// iterator para itear as posiçoes usadas dentro da listas 1,2,3 ... it(1) =nome , it(2) = dia de nascimento ....
		
		it=tl.begin();
		std::size_t encontrada = nomeP.find(*it);
		
		if (encontrada!=std::string::npos){
		//if(nomeP == *it){ 
	    posicao=0;
		for (it = tl.begin(); it != tl.end(); it++){ // inicio da iteração da lista<string> i com i= 1,2,3 ...
		 // se dentro desta lista for encontrado o nome a ser alterado 
				
			if (posicao == 0) {  cout    << " \t._____________________________"<< endl;	 }
			if (posicao == 0) {  cout    << "\t|Nome: "<< *it 				   << endl; a = *it; }
			if (posicao == 0) {  cout    << "\t|----------------------------- "<< endl;	        }
			if (posicao == 1) {  cout    << "\t|   Dia de nascimento: " << *it << endl;	b = *it; }
			if (posicao == 2) {  cout    << "\t|   Mes de nascimento: " << *it << endl;	c = *it; }
			if (posicao == 3) {  cout    << "\t|   Ano de nascimento: " << *it << endl;	d = *it; }
			if (posicao == 4) {  cout    << "\t|   Idade:             " << *it << endl;	        }
			if (posicao == 5) {  cout    << "\t|   Salario:           " << *it << endl;	e = *it; }
			if (posicao == 6) {	 cout    << "\t|   Id da Familia      " << *it << endl;	f = *it; }
			
			posicao++;
			}
		 geraNome <<a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f; 
		 //cout    << "\t|"<<  geraNome.str() << endl;
		 //_getch();
		  }
		}
		
	 return geraNome.str();
     cout << "Precione qualquer techa para retornar ao menu" << endl;
	getch();
 	
};

/******************Lista as familias cadastradas na aplicação *****************************/
void interface::listarFamilias(){ 
// mesmo raciocínio exceto que nao é preciso alter os dados pessoais e somente inverte a leitura da lista final -> inicio
	map<int,string> identifica_usuario;
	string line, familiaIDlistar;
 	list<list<string>>::iterator itrr; 				//Iterator da lista com as listas de informalção pessoas 
	pessoas verificaint;
	
	cout << "\t _______________________________________" << endl;
	cout << "\t|     Qual a familia que quer listar :  " << endl;
	int jj=0;
	for (itrr = dadosPessoais.begin(); itrr != dadosPessoais.end(); itrr++){
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
	/*
 	lista:
 	|1 - > /1/2/3/4.......// dados pessoais
 	|2 - > /1/2/3/4.......// dados pessoais
 	|3 - >
 	|4
 	|5
 	|6
 	...
 	*/
 	
	cout << endl;
	for (itr = dadosPessoais.begin(); itr != dadosPessoais.end(); itr++){
		int posicao = 0;
		list<string>tl = *itr;
		list<string>::reverse_iterator it;  // inverte a ordem da lista começando por FamiliaID, Salario ... Nome 
	    it=tl.rbegin();
		if(familiaIDlistar == *it){ // restição do código
			for (it = tl.rbegin(); it != tl.rend(); it++){
				
				/*---------------Imprime na tela do usuario-------------------------------------------*/
				if (posicao == 0)   cout    << " \t._____________________________"<< endl;	
				if (posicao == 0)   cout    << "\t|   Id da Familia      " << *it << endl;
				if (posicao == 0)   cout    << "\t|----------------------------- "<< endl;
				if (posicao == 1)   cout    << "\t|   Salario:           " << *it << endl;	
				if (posicao == 2)   cout    << "\t|   Idade:             " << *it << endl;
		    //	if (posicao == 3)   cout    << "\t|   Ano de nascimento: " << *it << endl;	
			//	if (posicao == 4)   cout    << "\t|   Mes de nascimento: " << *it << endl;
			//	if (posicao == 5)   cout    << "\t|   Dia de nascimento: " << *it << endl;
				if (posicao == 6)   cout    << "\t|----------------------------- "<< endl;	
				if (posicao == 6)   cout    << "\t|NOME:   "<< *it 				  << endl;


			/*---------------Escreve num arquivo de texto-----------------------------------------*/
				if (posicao == 0)   outfile << " \t._____________________________"<< endl;	
				if (posicao == 0)   outfile << "\t|   Id da Familia      " << *it << endl;
				if (posicao == 0)   outfile << "\t|----------------------------- "<< endl;
				if (posicao == 1)   outfile << "\t|   Salario:           " << *it << endl;	
				if (posicao == 2)   outfile << "\t|   Idade:             " << *it << endl;
			//	if (posicao == 3)   outfile << "\t|   Ano de nascimento: " << *it << endl;	
			//	if (posicao == 4)   outfile << "\t|   Mes de nascimento: " << *it << endl;
			//	if (posicao == 5)   outfile << "\t|   Dia de nascimento: " << *it << endl;
				if (posicao == 6)   outfile << "\t|----------------------------- "<< endl;	
				if (posicao == 6)   outfile << "\t|NOME:   "<< *it 				  << endl;
				posicao++;
			}
			posicao = 0;
			
		}
	}
	identifica_usuario.clear();
	getch();

};

/******************************* Descreve as opçoes do Menu ********************************/
void interface::leiaME(){ 
	system("cls");
	cout << "\t______________________________________________________________"   << endl;
	cout << "\t                        MENU INICIAL                          "   << endl;
	cout << "\t  1 - Castra uma nova pessoa no programa	                     "   << endl;
	cout << "\t  2 - Alterar dados de uma pessoa ja cadstrada			     "   << endl;
	cout << "\t  3 - Excluir dados de uma pessoa ja cadstrada			     "   << endl;
	cout << "\t______________________________________________________________"   << endl;
	cout << "\t                    MENU DE DESPESAS                          "   << endl;
	cout << "\t  4 - Adiciona novas despesas a uma pessoa ja cadastrada	     "   << endl;
	cout << "\t  5 - Resultado de analises financeiras (pessoa ja cadastrada)"   << endl;
	cout << "\t______________________________________________________________"   << endl;
	cout << "\t                      OPCOES do ADM                           "   << endl;
	cout << "\t  6 - Lista todas as pessoas cadastradas no programa		     "   << endl;
	cout << "\t  7 - Lista as familias cadastradas no programa   		     "   << endl;
	cout << "\t  8 - LEIAME(Descreve as Opc.do menu)                         "   << endl;
	cout << "\t  0 - Sair                                                    "   << endl;
	cout << "\t______________________________________________________________\n" << endl;
	cout << "\t--->Precione qualquer tecla para retornar ao MENU"<< endl;
	getch();
};


string interface::mostraUsuarios(){ 
	
	pessoas verificaInteiro;
	map<int,string> identifica_usuario;
    map<int,string>::iterator itr_usuario;
	map <string, char> grade_list;
	
	string line, nomeParaAlterar;  			// variaveis iniciais da função 
 	list<list<string>>::iterator itr; 				//Iterator da lista com as listas de informalção pessoas 
 	int jj=0;
	for (itr = dadosPessoais.begin(); itr != dadosPessoais.end(); itr++){ // inicio da iteração para as posições da lista 
		
		list<string> tl = *itr;   // iterator para itear as posiçoes usadas dentro da lista 1 list< it(1) = list<string> 1, it(2) = list<string> 2;
		list<string>::iterator it;// iterator para itear as posiçoes usadas dentro da listas 1,2,3 ... it(1) =nome , it(2) = dia de nascimento ....
		it = tl.begin();
		identifica_usuario[jj]=*it;
		cout <<"\t| " << jj <<" --> " <<   *it     << endl;
	
		jj++;
	}
	cout << "\t|_______________________________________" << endl;
	int escolha = verificaInteiro.get_int("\t::: >");
	cin.ignore();
	
	return identifica_usuario.find(escolha)->second;

};

void interface::removedABaseDDados(std::string removeDaBaseDDados){

	bool exite = false;
	string linha;
//	cout << removeDaBaseDDados << endl;
//	getch();
		
	fstream abreArquivoRecover,abreArquivo;
	ofstream output("swap.txt", std::ios::app);
	abreArquivo.open("bancoDDado.txt", std::fstream::in| std::fstream::ios_base::out);  
	
	while (!abreArquivo.eof()) 	{
		getline(abreArquivo, linha); 
			if (linha != removeDaBaseDDados)
	    			    output << linha <<endl;
	}
	abreArquivo.close();
	output.close();
	remove("bancoDDado.txt");
	
	abreArquivoRecover.open("swap.txt");
	abreArquivo.open("bancoDDado.txt", std::fstream::ios_base::out); 
	while (!abreArquivoRecover.eof()) 	{
			getline(abreArquivoRecover, linha); 
					if(!linha.empty())
		   				abreArquivo << linha << endl;
	}
	abreArquivoRecover.close();
	abreArquivo.close();
	remove("swap.txt");
	
};
 

bool interface::equals(const interface&othermenu) { return false; };

/******************************* Sets & Gets ********************************/
// atribui a path (varaiavel privada da classe) a string com o caminho do txt com pessoas
void   interface::setPath(const string pathFile) { path = pathFile; } 
string interface::getPath()const				 { return path; };

// atribui a path (varaiavel privada da classe) a string com o caminho do txt com despesas
void   interface::setPathFinancas(const string pathFile) { pathFinancas = pathFile; }
string interface::getPathFinancas()const { return pathFinancas; };
