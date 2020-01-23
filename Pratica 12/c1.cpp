#include<bits/stdc++.h>
using namespace std;

int particiona( unsigned int *v, int beg, int end, int pivo,int coluna) {
	
	int valorPivo = v[pivo]; 
	swap(v[pivo], v[end-1]);
	int pos = beg;
		
	for(int i = beg; i < end-1; i++) 
	{
		if (v[i] < valorPivo) 
		{
			swap(v[pos], v[i]);
			pos++; 
		}
	}
	swap(v[pos],v[end-1]); 
	return pos; 
}

void quickSort(unsigned int *v, int beg, int end, int coluna) 
{ 
	if(end==beg)
		return;
	
	int pos = particiona(v, beg, end, pivo, coluna); 
	quickSort(v, beg, pos,coluna); 
	quickSort(v, pos + 1, end,coluna); 
}

int main(){
	
	unsigned int b=0,l=0;
	srand(time(NULL));
	int n,k=1;
	printf("Digite o tamanho do vetor.\n");
	cin >> n;
	
	int *v = new unsigned int [n];
	
	for(int i=0;i<n;i++)
		v[i] = rand()%255;
	
	for(int i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("\n");
	
	quickSort(v,0,n,31);
	
	for(int i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("\n");
	
	cout << flush;
	
	delete v;
	
	return 0;
}