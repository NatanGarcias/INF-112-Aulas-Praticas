#include <iostream>
#include "Pessoa.h"
using namespace std;

void funcao(Pessoa p) {
	Pessoa::printNumInstancias();
	p.print();
}

int main() {
	Pessoa::printNumInstancias();
	Pessoa p("Salles",25);
	Pessoa::printNumInstancias();
	
	p.print();	
	funcao(p);
	p.print();
	
	Pessoa::printNumInstancias();

	{
		Pessoa p2("asdf",34);
		Pessoa::printNumInstancias();
	}
	Pessoa::printNumInstancias();

	return 0;	
}
