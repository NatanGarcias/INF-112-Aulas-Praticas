#include<bits/stdc++.h>
using namespace std;

int calculaTamanhoString1(char *str)
{
	int a = 0;
	for(int i=0;str[i]!='\0';i++)
		a++;
	
	return a;
}

int calculaTamanhoString2(char *str)
{
	int a = 0;
	for(int i=0;*(str+i)!='\0';i++)
		a++;
	
	return a;
}

int calculaTamanhoString3(char *str)
{
	char *b = str;
	
	for(;*str!='\0';str++);
	
	return (str-b) / sizeof(char);
}

int main() 
{  
	char str[51];   
	
	cout << "Digite alguma string... (com ate 50 caracteres):";   
	
	cin.getline(str, 50);  
 
	cout << "Tamanhos calculados:" << endl;
	
	cout << calculaTamanhoString1(str) << " " << calculaTamanhoString2(str) << " " << calculaTamanhoString3(str);  
	
	cout << endl;   
	
	return 0;
}