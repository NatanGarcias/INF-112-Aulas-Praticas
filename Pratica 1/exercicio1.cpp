#include <iostream>

using namespace std;

void leiaInteiros(int &a,int &b) {
	cout << "Digite dois numeros inteiros:";
	cin >> a >> b;
}

void leiaInteiros(int *a,int *b) {
	cout << "Digite dois numeros inteiros:";
	cin >> *a >> *b;
}

int main() {
	int a,b;
	leiaInteiros(a,b);
	cout << "Numeros lidos: " << a << " " << b << endl;
	leiaInteiros(&a,&b);
	cout << "Numeros lidos: " << a << " " << b << endl;
	return 0;
}
