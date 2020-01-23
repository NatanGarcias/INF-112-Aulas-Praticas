#ifndef VETOR_INTEIROS
#define VETOR_INTEIROS
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class  VetorInteiros{ 
	private:
		int n;
		int *v;
	public:
	VetorInteiros(int n,int valorPadrao);
	VetorInteiros(int n);
	~VetorInteiros();
	void mudaTamanho(int novoTamanho);
	void insereElementoFinal(int valor);
	int getElemento(int pos)const;	
	void setElemento(int pos, int valor);
	int procuraElemento(int valor)const;
	int getTamanho() const;
	void imprime()const; 
};
#endif