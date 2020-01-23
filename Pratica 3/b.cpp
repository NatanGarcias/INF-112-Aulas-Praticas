#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) 
{     
	srand(time(NULL)); 
 
    int numTestes, limiteRand,k;
	if (argc != 3) 
	{
		cerr << "Erro, use: ./exercicio numTestes limiteRand" << endl;
		exit(1);     
	}    
 
    numTestes = atoi(argv[1]);
	limiteRand = atoi(argv[2]);  
 
    int *vetor = new int[limiteRand]; 
 
    for(int i = 0; i < limiteRand; i++) 
		vetor[i] = 0;	
	
	for(int i = 0; i < numTestes; i++)       
	{	
		k = rand() % limiteRand; 
		vetor[k]+=1;
	}
	
	for(int i = 0; i < limiteRand; i++)   
		printf("%d %d\n",i,vetor[i]);
	
	delete []vetor;
	
	return 0; 
	}