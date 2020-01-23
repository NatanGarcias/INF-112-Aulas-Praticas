#include <iostream>
#include "Pessoa.h"
using namespace std;

int main() {
	Pessoa p("Salles",25);
	p.print();
	Pessoa p2("Abc Def", 34);
	p2.print();
	p = p2;
	p.print();
	p2.print();


	return 0;	
}
