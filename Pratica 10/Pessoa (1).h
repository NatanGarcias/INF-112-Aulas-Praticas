#ifndef PESSOA_H
#define PESSOA_H
class Pessoa{
	public:
		Pessoa(const char *nome,const int idade);
		Pessoa(const Pessoa &);
		Pessoa & operator=(const Pessoa &);
		~Pessoa();
		void print();
		static void printNumInstancias();
	
	private:
		char *nome;
		int idade;
		static int ativas;
		static int criadas;
};
#endif