#include<iostream>
#include<cstring>
#include "Pessoa.h"

using namespace std;

int Pessoa::ativas=0;
int Pessoa::criadas=0;

Pessoa::Pessoa(const char *nome,const int idade){
	this->nome = new char[ strlen(nome) + 1 ];
	strcpy(this->nome,nome);
	this->idade = idade;
	ativas++;
	criadas++;
}

Pessoa::Pessoa(const Pessoa &p){
	this->nome = new char[strlen(p.nome) + 1];
	strcpy(this->nome, p.nome);
	this->idade = p.idade;
	ativas++;
	criadas++;
}

Pessoa & Pessoa::operator=(const Pessoa &p){
	delete []this->nome;
	this->nome = new char[strlen(p.nome) + 1];
	strcpy(this->nome, p.nome);
	this->idade = p.idade;
	
	return *this;
}

Pessoa::~Pessoa(){
	delete []this->nome;
	ativas--;
}
		
void Pessoa::print(){
	cout << "[nome=\"" << nome << "\" , idade=" << idade << "]" << endl;
}

void Pessoa::printNumInstancias(){
	cout << ativas << " " << criadas << endl;
}