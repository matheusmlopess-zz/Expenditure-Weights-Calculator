#ifndef CONTROLE_H
#define CONTROLE_H

#include <iostream>
#include <string.h> 
#include <list> 

class controle 
{
public:

	controle();
	
	std::list <std::string> criaPessoa();
	void criaDespesa(std::string ok);
	void criaDespesa();
	void pause();
	virtual ~controle();


};
#endif
