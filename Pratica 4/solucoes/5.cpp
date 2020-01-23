#include <iostream>
#include <cstdlib>

using namespace std;

int produtorio(int *v,int n) {
	if (n<1) return 0;
	if (n==1) return v[0];
	return v[n-1]*produtorio(v,n-1);
}

int produtorio(int *v,int beg, int end) {
	if (beg > end) return 0;
	if (beg == end) return v[beg];
	return v[beg]*produtorio(v,beg+1,end);
}

int main(int argc, char **argv) {
	int n;
	cout << "Digite o tamanho do array:" ;
	cin >> n;
	int *v = new int[n];
	cout << "Digite os numeros..." << endl;
	for(int i=0;i<n;i++) { cout << "Digite o numero da posicao " << i << " :"; cin >> v[i]; }
	cout << "O produtorio calculado utilizando a primeira versao da funcao eh: " << produtorio(v,0,n-1) << endl;
	cout << "O produtorio calculado utilizando a segunda versao da funcao eh: " << produtorio(v,n) << endl;

	delete []v;
	return 0;
}
