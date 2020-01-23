#include"Pessoa.h"

int Pessoa::atualmente = 0;
int Pessoa::criadas = 0;

Pessoa::Pessoa(char *nome,int idade){
	atualmente++;
	criadas++;
	this->nome = new char[strlen(nome)+1];
	strcpy(this->nome,nome);
	this->idade = idade;
}

void Pessoa::print(){
	cout << "[nome=\"" << nome << "\" , idade=" << idade << "]" << endl;
}

Pessoa::~Pessoa (){
	delete[] nome;
	atualmente--;
}

Pessoa & Pessoa::operator= (const Pessoa &pessoa) {
	if (this == &pessoa) 
		return *this; 
	atualmente++;
	criadas++;
	delete[] this->nome;
	this->nome = new char[strlen(pessoa.nome)+1];
	strcpy(this->nome,pessoa.nome);
	this->idade = pessoa.idade;
	
	return *this; 
}
	
Pessoa::Pessoa(const Pessoa &a){
	atualmente++;
	criadas++;
	this->nome = a.nome;
	nome = new char[strlen(a.nome)+1];
	strcpy(this->nome,a.nome);
	this->idade = a.idade;
}

void Pessoa::printNumInstancias(){
	cout << "Numero de Instancias Atualmente: " << atualmente << endl;
	cout << "Numero de Instancias Criadas: " << criadas << endl;
}
