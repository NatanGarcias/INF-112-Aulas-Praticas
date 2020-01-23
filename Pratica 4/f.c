#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Prod(int b[],int a)
{
	if(a==0)
		return b[a];
	return b[a]*Prod(b,a-1);
}
int main () {
	
	int a,i,v;
	printf("Digite o numero de elementos.\n");
	scanf("%d",&a);
	int b[a];
	printf("Digite os elementos.\n");
	for(i=0;i<a;i++)
		scanf("%d",&b[i]);
	
	v = Prod(b,a-1);
	printf("%d",v);
   
	return(0);
}