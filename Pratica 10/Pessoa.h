#ifndef PESSOA_K
#define PESSOA_K
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class Pessoa{
	private:
		char *nome;
		int idade;
		static int atualmente;
		static int criadas;
	public:
		Pessoa(char *nome,int idade);
		Pessoa(const Pessoa &);
		~Pessoa();
		void print();
		Pessoa & operator= (const Pessoa&);
		static void printNumInstancias();	
};
#endif