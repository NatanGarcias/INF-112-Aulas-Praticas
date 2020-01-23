#include "VetorInteiros.h" 

VetorInteiros::VetorInteiros(int n,int valorPadrao){ 
	this->n = n;
	int *v =(int*) malloc(n* sizeof(int));
	this->v = v;
	for(int i=0;i<n;i++)
		v[i] = valorPadrao;
}
 
VetorInteiros::VetorInteiros(int n){
	this->n = n; 
	int *v =(int*) malloc(n* sizeof(int));
	this->v = v;
	for(int i=0;i<n;i++)
		v[i] = 0;
}

VetorInteiros::~VetorInteiros(){
	free(v);
}

void VetorInteiros::mudaTamanho(int novoTamanho){
	int k = getTamanho();
	v = (int*) realloc(v,novoTamanho * sizeof(int));
	n = novoTamanho;
	this->v = v;
	for(int i=k;i<n;i++)
		v[i] = 0;
}

void VetorInteiros::insereElementoFinal(int valor){
	mudaTamanho(getTamanho()+1);
	v[n-1] = valor;	
}

int VetorInteiros::getElemento(int pos)const{
	if(pos<getTamanho())
		return v[pos];
	else
		return -1;
}
	
void VetorInteiros::setElemento(int pos, int valor){
	if(pos<getTamanho())
		v[pos] = valor;
}

int VetorInteiros::procuraElemento(int valor) const{
	for(int i=0;i<getTamanho();i++)
		if(v[i] == valor)
			return i;
	return -1;
}

int VetorInteiros::getTamanho() const{
	return n;
}

void VetorInteiros::imprime()const {
	printf("[");
	for(int i=0;i<n;i++){
		if(i!=n-1)
			printf("%d,",v[i]);
		else
			printf("%d]\n",v[i]);
	}	
} 