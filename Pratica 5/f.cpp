#include <bits/stdc++.h>
using namespace std;

void merge(int *v, int p, int q, int r,int *aux,int &in){ //Intercala
	int tam= r-p;
	int i = p; //Cursor 1
	int j = q; //Cursor 2
	int k = 0; //Cursor para aux
	while(i<q && j<r){
		if(v[i] <= v[j])
			aux[k++] = v[i++];
		else{
			in+= q-i;
			aux[k++] = v[j++];
		}
	}
	while(i < q) //Dois while para preencher o restante
		aux[k++] = v[i++];
	while(j < r)
		aux[k++] = v[j++];
	for(k=0;k < tam; k++) //transferindo o ordenado p/ o original
		v[p+k] = aux[k];
}
void mergeSort(int *v, int p, int r,int *aux, int &in){ //Divide and conquer
	if(p< r-1){
		int meio= (p+r)/2;
		mergeSort(v,p,meio,aux,in);
		mergeSort(v,meio,r,aux,in);
		merge(v,p,meio,r,aux,in); /* intercala */
	}
}

void mergeSort2(int *v, int n, int &in){
	int *aux = new int [n];
	mergeSort(v,0,n,aux,in);
	delete []aux;
}

int main(){
	int n,in;
	in = 0;
	cin >> n;
	int *arr=new int[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	mergeSort2(arr,n,in);
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << in << endl;
	delete []arr;
	return 0;
}