#include<bits/stdc++.h>
using namespace std;

int particiona(int *v, int beg, int end, int pivo) 
{
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
void insertionSort(int *v,int k, int n) 
{ 
	for (int i = k+1; i < n; i++) 
	{ 
		int elemInserir = v[i];
		int j = i-1; 
		while(j >= k && v[j] > elemInserir) 
		{
			v[j+1] = v[j];
			j--; 
		}	 
		v[j+1] = elemInserir; 
	} 
}

void quickSort(int *v, int beg, int end) 
{ 
	if(end-beg < 10)
	{
		insertionSort(v,beg,end);
		return;
	}
	int pos = particiona(v, beg, end, beg); 
	quickSort(v, beg, pos); 
	quickSort(v, pos + 1, end); 
}

void quickSort(int *v, int n) 
{
	quickSort(v, 0, n); 
}
int main()
{
	srand (time(NULL));
	int n;
	printf("Digite o tamanho do vetor.\n");
	cin >> n;
	int *v = new int [n];
	
	for(int i=0;i<n;i++)
	{
		v[i] = rand() % 1000000;
	}
	
	quickSort(v,n);
	
	for(int i=0;i<n;i++)
		printf("%d",v[i]);
	
	return 0;
}