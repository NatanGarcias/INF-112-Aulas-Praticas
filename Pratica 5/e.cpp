#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n,int &in){
	for(int i=1;i<n;i++){
		int elementoInserir=arr[i];
		int j= i-1;
		while(j>=0 && arr[j]>elementoInserir){
			arr[j+1]=arr[j];
			j--;
			in++;
		}
		arr[j+1]=elementoInserir;
	}
	return;
}

int main(){
	int n,in;
	in = 0;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	insertionSort(arr,n,in);
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << in << endl;
	return 0;
}