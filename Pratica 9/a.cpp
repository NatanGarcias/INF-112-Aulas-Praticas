#include <iostream>
#include "VetorInteiros.h" 
using namespace std; 
 
int main() 
{
    VetorInteiros v1(5);         
	v1.imprime();     
	for(int i=0;i<v1.getTamanho()+4;i++){
		v1.setElemento(i,i*10);     
	}
	v1.imprime();
	cout << v1.procuraElemento(20) << endl;     
	cout << v1.procuraElemento(15) << endl; 
    VetorInteiros v2(3,2);     
	v2.imprime();     
	for(int i=0;i<5;i++)         
		v2.insereElementoFinal((i+1)*100); 
    v2.imprime();
	v2.mudaTamanho(10);
	v2.imprime();
	v2.mudaTamanho(5);
	v2.imprime();

    const VetorInteiros v3(3,2); 
	v3.imprime();
	cout << v3.getElemento(2) << endl; 

    return 0; 
} 