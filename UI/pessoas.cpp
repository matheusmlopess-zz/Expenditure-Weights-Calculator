#include "pessoas.h"
#include <iostream>
#include <string.h> 
#include <sstream>
#include <conio.h> 
#include <map>
#include <utility>      // std::pair, std::get
#include <list>
#include <ctime>
#include <ios>
#include <fstream>
#include <limits>
//#include <time.h> // biblioteca para identificar o ano

using namespace std;

time_t theTime = time(0);	
struct tm *aTime = localtime(&theTime);  // Para rodar no Dev C++
//struct tm mytime;						   // Para rodar no Visula Studio 
namespace coverte
{
    template < typename T > std::string inteiro_paraTexto( const T& n )
    {
        		ostringstream stm ;
        		stm << n ;
        return  stm.str() ; //retorna string de um inteiro
    }
}

pessoas::pessoas(const string n, const int d, const int m, const int a, const int r, const string familiaID) {
		
		 //localtime_s(&mytime, &theTime);
		 //int anoAtualaux = mytime.tm_year + 1900;
		 int anoAtualaux = aTime->tm_year + 1900;
		 int idadeAux = anoAtualaux - a; //Calculo da idade!
		 std::ostringstream geraTxt;

		 setNome(n);
		 setDia(d);
		 setMes(m);
		 setAno(a);
		 setIdade(idadeAux);
		 setSalario(r);
		 setFamiliaID(familiaID);
};
	 pessoas::~pessoas( ) { };
void pessoas::cls(){ system("cls"); }

bool  pessoas::setData(){
	//-------------------------define o ano atual apartir do relogio do PC -------------------------//
	//								     Para usar no Dev C++ :						
	  time_t theTime = time(0);		    
	  struct tm *aTime = localtime(&theTime);  // Para rodar no Dev C++    //
      int anoAtual = aTime->tm_year + 1900; // Define o ano a partir de 1900   // Dev C++ anoAtual 
	//								Para usar no Visual Studio C++:									//
	//localtime_s(&mytime, &theTime);
	//int anoAtual = mytime.tm_year + 1900;
	//----------------------------------------------------------------------------------------------//

	list<string> info;    		// Define uma lista de string para armazenar os dados pessoais
	string nome;
	int dia =-1;  				//define valor inicial 
	int mes =-1;  				//define valor inicial 
	int anoNascimento=1000 ; 	//define valor inicial 
	int renda =-1;  	        //define valor inicial 
	int idade ;  				//define valor inicial 
	bool existe;
	/*--------------------Obetem info apartir do usuario-------------------------*/
	// nome: recebe nomes com mais de 2 caracteres e menos de 50	
	// dia : verifica se é inteiro puro e se esta entre 1 e 31 dias possiveis
	// mes :verifica se é inteiro puro e se esta entre 0 e 12 meses possiveis
	// anoNacimento: verifica se é inteiro puro e se esta entre 1900 e 2016 
	// renda :verifica se é inteiro puro e se renda > zero
	int i = 0;
    cout << "\t|_________________________________________ " << endl;
	cout<<( "\t|  Digite o nome > ");  
	getline(cin, nome);
	
    // restriçoes do inteiro destinado para definir o dia do nascimento
	while (dia > 31 || dia < 1){ 
		   dia = get_int("\t|  Digitar o dia de nascimento: > ");
 	       if (i > 0) cls();
		   i++; 
    }
	// restriçoes do inteiro destinado para definir o mês do nascimento		 
	i = 0; 
	while (mes > 12 || mes < 0){ 
	              
			mes = get_int("\t|  Digitar mes > "); 
			if (i > 0) cls(); 
			i++; 
	} 
	// restriçoes do inteiro destinado para definir o ano do nascimento
	i = 0;
	while (anoNascimento < 1900 || anoNascimento > 2016){
	                    
	      anoNascimento = get_int("\t|  Digitar o ano: > ");
		  if (i > 0) cls(); 
		   i++; 
	} 
	// restriçoes do inteiro destinado para definir o a renda
	i = 0; 
	while (renda < 0){ 
	     
		  renda = get_int("\t|  Digitar a renda: >"); 
		   if (i > 0) cls();
		   i++;
    } 
	// restriçoes do inteiro destinado para definir o a chave de um grupo familiar
	cout<<"\t| Chave que identifica sua familia " << endl;
	cout<<"\t| (sugestao: Sobrenome MAIUSCULO): >";
	cin >> familiaID;
	/*--------------------Fim: Obetem info apartir do usuario-------------------------*/

	idade = anoAtual - anoNascimento; //Calculo da idade!
	
		std::ostringstream geraTxt;
		//EX: verifica se a entrada ja exite "nome", 28, 04, 1990, 9999, "UTFPR";
		geraTxt <<nome<<","<<std::to_string(dia)<<","<<  std::to_string(mes)<<","<< std::to_string(anoNascimento)<<","<< std::to_string(renda)<<","<<familiaID; 
		existe = escreveNaBaseDDados(geraTxt.str());
		geraTxt.clear();
		
		
	
	/*--------------------Settings* da info obtida -------------------------*/
	setNome(nome);		// setta' nome da pessoa
	setDia(dia);		// setta' dia de nascimento 	
	setMes(mes);		// setta' mes de nascimeto
	setAno(anoNascimento);	 // setta' ano de nascimento 
	setIdade(idade);		 // setta' idade da pessoa
	setSalario(renda);		 // setta' valor da renda
	setFamiliaID(familiaID); // setta' chave que identifica grupo 
	
	return existe;
	         

}

int pessoas :: get_int(char *message) {
	int out;		// vairavel de retorno 
	string in ;		// variavel de entrado do usuario
	while (true) {  // enquanto verdadeiro continua
		cout << message; // imprime a mesnge que a função recebe
		cin>> in;		 // recebe a entrada do usuario
		stringstream ss(in); // converte para stringstream para comparar com inteiro puro 
		if (ss >> out && !(ss >> in)) return out; // atribui o valor de entrada a variavel de retorno e verifica se é inteiro puro 
		cin.clear(); /// caso a o inteiro tenha caracteres ou caracteres especiais limpa o cin e retorna erro 
		cerr << "\n Valor invalido ou nao aceito. Tente novamente:\n"; //mensagem de erro 
	}
}



list<string> pessoas::retornaListaDados(){
	
		list<string> listaDDados;
		// Preenche a lista de string com os dados obtidos
		listaDDados.push_back(getNome()); 							     // adiciona nome a lista
		listaDDados.push_back(coverte::inteiro_paraTexto(getDia()));     // adiciona dia de nascimento a lista
		listaDDados.push_back(coverte::inteiro_paraTexto(getMes()));     // adiciona mes de nascimento a lista
		listaDDados.push_back(coverte::inteiro_paraTexto(getAno()));     // adiciona ano de nascimento a lista
		listaDDados.push_back(coverte::inteiro_paraTexto(getIdade()));   // adiciona idade a lista
		listaDDados.push_back(coverte::inteiro_paraTexto(getSalario())); // adiciona renda a lista
		listaDDados.push_back(getFamiliaID()); // adiciona renda a lista

		return listaDDados;
	}

	// Gets & Sets 
	void pessoas::setNome(const string n) { nome = n;				  }
	void pessoas::setMes(const int m)	  { mes = m; 				  }
	void pessoas::setIdade(const int i)   { idade = i;				  }
	void pessoas::setDia(const int d)     { dia = d;				  }
	void pessoas::setSalario(const int r) { salario = r;			  }
	void pessoas::setAno(const int a)     { ano = a;                  }
	void pessoas::setFamiliaID(const string fmId) { familiaID = fmId; }

	string pessoas::getNome()const      { return nome;      };
	string pessoas::getFamiliaID()const { return familiaID; };
	int pessoas	  ::getDia()const       { return dia;       };
	int pessoas   ::getMes()const       { return mes;       };
	int pessoas   ::getAno()const       { return ano;	    };
	int pessoas   ::getIdade()const     { return idade;     };
	int pessoas   ::getSalario()const   { return salario;   };
	
bool pessoas::escreveNaBaseDDados(string pessoNova) {

	bool verificaSejaexiste = false;

	ofstream output("bancoDDado.txt", std::ios::app);
	verificaSejaexiste = verificaSeExiste(pessoNova);
	
	if (verificaSejaexiste == false) 
		output << pessoNova;
		
	if (verificaSejaexiste == true){
		 cout <<"\t"<< pessoNova <<" ja esta na base de dados. Tente novamente!"<< endl;
		_getch();
	   // cout << "Esta pessoa ja esta cadastrada precione enter para retornar!" << endl;
	}
	
	return verificaSejaexiste;
}

void pessoas::lerDaBaseDDados() {

	bool exite = false;
	string linha;
	ifstream abreArquivo;
	abreArquivo.open("bancoDDado.txt");  //open the file

	while (!abreArquivo.eof()) // To get you all the lines.
	{
		getline(abreArquivo, linha); // Saves the line in STRING.
		stringstream ss(linha);
		std::string token;

		while (std::getline(ss, token, ','))
		{
			std::cout << token << '\n';
		}

	}
	abreArquivo.close();
}

bool pessoas::verificaSeExiste(string novaPessoa) {

	bool exite = false;
	string linha;
	ifstream abreArquivo;
	abreArquivo.open("bancoDDado.txt");  
	while (!abreArquivo.eof()) 
	{
		getline(abreArquivo, linha); 
		if (linha == novaPessoa)
			exite = true;
	}
	abreArquivo.close();
	return exite;
}

bool pessoas::verificaSeExiste(string novaDespesa, string paths) {

	bool exite = false;
	string linha;
	ifstream abreArquivo;
	abreArquivo.open(paths);  
	//cout << novaDespesa << "  e ---> " << paths << endl;
	//_getch();
	while (!abreArquivo.eof()) 
	{
		getline(abreArquivo, linha); 
		if (linha == novaDespesa)
			exite = true;
	}
	abreArquivo.close();
	return exite;
}

