#include<bits/stdc++.h>
using namespace std;

int main(){  // Radix Direita para a Esquerda LSD
	
	unsigned long long int b=0,l=0;
	srand(time(NULL));
	int n,k=1;
	printf("Digite o tamanho do vetor.\n");
	cin >> n;
	
	int *v = new int [n];
	int *aux = new int [n];
	int *aux2;
	
	for(int i=0;i<n;i++)
		v[i] = rand()%255;
	
	for(int i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("\n");
	
	
	for(int i=0;i<32;i++){
		l = 0;
		for(int j=0;j<n;j++)
		{
			if(!(v[j]&k))
			{
				aux[l] = v[j];
				l++;
			}
		}
		for(int j=0;j<n;j++)
		{
			if((v[j]&k))
			{
				aux[l] = v[j];
				l++;
			}
		}
	aux2 = v;
	v = aux;
	aux = aux2;
	k = k<<1;
	}
	
	for(int i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("\n");
	
	cout << flush;
	
	delete aux;
	delete v;
	
	return 0;
}