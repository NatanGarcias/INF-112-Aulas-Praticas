#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int Busca(int b[],int a)
{
	if(a==0)
		return 0;
	int x = Busca(b,a-1);
	if(b[x]>b[a])
		return x;
	else
		return a;
}
int main () {
	
	int a,i,c;
	printf("Digite o numero de elementos.\n");
	scanf("%d",&a);
	int b[a];
	printf("Digite os elementos.\n");
	for(i=0;i<a;i++)
		scanf("%d",&b[i]);
	
	c = Busca(b,a-1);
	printf("%d",c);
	
   return(0);
}