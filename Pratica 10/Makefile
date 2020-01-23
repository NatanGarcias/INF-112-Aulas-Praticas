all: exercicio1 exercicio2 exercicio3 exercicio4

exercicio1: Pessoa.o exercicio1.o 
	g++  exercicio1.o Pessoa.o -o exercicio1

exercicio2: Pessoa.o exercicio2.o 
	g++  exercicio2.o Pessoa.o -o exercicio2

exercicio3: Pessoa.o exercicio3.o 
	g++  exercicio3.o Pessoa.o -o exercicio3

exercicio4: Pessoa.o exercicio4.o 
	g++  exercicio4.o Pessoa.o -o exercicio4

Pessoa.o: Pessoa.h Pessoa.cpp
	g++ -c Pessoa.cpp  

exercicio1.o: exercicio1.cpp Pessoa.h
	g++ -c exercicio1.cpp 

exercicio2.o: exercicio2.cpp Pessoa.h
	g++ -c exercicio2.cpp 

exercicio3.o: exercicio3.cpp Pessoa.h
	g++ -c exercicio3.cpp 

exercicio4.o: exercicio4.cpp Pessoa.h
	g++ -c exercicio4.cpp 
