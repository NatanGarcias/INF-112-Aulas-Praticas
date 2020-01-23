#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) 
{     
	srand(time(NULL)); 
 
    int numTestes, limiteRand;
	if (argc != 3) 
	{
		cerr << "Erro, use: ./exercicio numTestes limiteRand" << endl;
		exit(1);     
	}    
 
    numTestes = atoi(argv[1]);
	limiteRand = atoi(argv[2]);  
 
    int *vetor = new int[numTestes]; 
 
    for(int i = 0; i < numTestes; i++)       
		vetor[i] = rand() % limiteRand; 
 
    for(int i = 0; i < limiteRand; i++) 
	{        
		int ct =0;         
		for(int j = 0; j < numTestes; j++)             
			if (vetor[j] == i)                
				ct++;         
		cout << i << " " << ct << endl;    
	}
	
	delete []vetor;     
	return 0; }