#include<bits/stdc++.h>
using namespace std;

int main (int argc , char **argv){
	
	unsigned long long int a,b=0,d=0;
	
	a = strlen(argv[1]);
	char *c = new char [a+1];
	strcpy(c,argv[1]);
	
	for(int i=0;i<a;i++){
		if(c[i] == '1'){
			b = b + pow(2,a-i-1);
		}
	}
	cout << "O número digitado é: " << b << endl;
	
	for(int i=0;i<a;i++){
		if(c[a-i-1]=='1'){
			d = d | ( 1ll << i);
		}
	}
	cout << "O número digitado é: " << d << endl;
	
	return 0;
}