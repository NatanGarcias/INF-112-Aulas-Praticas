#include <iostream>
#include <cstdio>
using namespace std;

int calculaTamanhoString1(char *c) {
	int i;
	for(i=0;c[i]!='\0';i++);
	return i;
}

int calculaTamanhoString2(char *c) {
	int i;
	for(i=0;*(c+i)!='\0';i++);
	return i;
}


int calculaTamanhoString3(char *c) {
	char *c2;
	for(c2 = c;*c2!='\0';c2++);
	return (c2-c)/sizeof(char);
}




int main() {
	char str[51];
	cout << "Digite alguma string... (com até 50 caracteres):";
	cin.getline(str,50);
	cout << "Tamanhos calculados:" << endl;
	cout << calculaTamanhoString1(str) << " " << calculaTamanhoString2(str) << " " << calculaTamanhoString3(str) << " " << endl;

	return 0;
}
