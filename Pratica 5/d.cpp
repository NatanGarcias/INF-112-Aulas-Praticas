#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int *v, int n,int k) 	
{ 	
	for (int i = 0; i < k; i++) 
	{ 
	// acha a posicao do menor elemento // entre as posições (i) e (n-1) 
	int posMenor = i; 
	for (int j = i+1; j < n; j++) 
		if (v[j] < v[posMenor]) posMenor = j;
	// troca o menor elemento (que está na // posicao posMenor) com o elemento (i) 
	int aux = v[i]; 
	v[i] = v[posMenor]; 
	v[posMenor] = aux;
	}
}
int main(){
	int n,k;
	cout << "Digite n e k " << endl;
	
	cin >> n >> k;
	
	int *arr=new int[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	SelectionSort(arr,n,k); 	
	
	for(int i=0;i<k;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}