#include <iostream>
#include "Pessoa.h"
using namespace std;

void funcao(Pessoa p){
	p.print();
}

int main() {
	Pessoa p("Salles",25);
	
	p.print();	
	funcao(p);
	p.print();

	return 0;	
}