#include <iostream>
#include <cstdlib>

using namespace std;

int posMaior(int *v,int n) {
	if (n==1) return 0;
	int pm = posMaior(v,n-1);
	if (v[n-1] > v[pm])
		return n-1;
	else 
		return pm;
}

int main(int argc, char **argv) {
	int n;
	cout << "Digite o tamanho do array:" ;
	cin >> n;
	int *v = new int[n];
	cout << "Digite os numeros..." << endl;
	for(int i=0;i<n;i++) { cout << "Digite o numero da posicao " << i << " :"; cin >> v[i]; }
	cout << "O maior numero estah na posicao: " << posMaior(v,n) << endl;
	delete []v;
	return 0;
}
