#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <list>


class interface
{
    private:
		std::string path, pathFinancas;
	public:
		
		 interface();
		~interface();
/*OPC*/ void todasOpcoes();
/* 1 */	void cadastrarpessoas();
/* 2 */	void alterarPessoa(); 
/* 3 */	void excluirPessoa();
/* 4 */	void addDespesas();
/* 5 */ void analiseFin();
/* 6 */	void listarPessoas();
/* 7 */	void listarFamilias();
/* 8 */	std::string buscarPessoa(std::string buscaNome);
/* 9 */	void leiaME();

   void addList(std::list<std::string> listParaImprimir);
   void setPath(const std::string pathFile);
   void setPathFinancas(const std::string pathFile2);

   void removedABaseDDados(std::string removeDaBaseDDados);
   std::string mostraUsuarios();  
   std::string getPath()const;
   std::string getPathFinancas()const;
  
	
	bool equals(const interface&);
    
};

#endif
