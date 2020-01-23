#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long long int Stirling (unsigned long long int n, unsigned long long int k)
{
	if(n==0 && k==0)
		return 1;
	if(n!=0 && k==0)
		return 0;
	if(n==0 && k!=0)
		return 0;
	return k*Stirling(n-1,k) + Stirling(n-1,k-1);
}

int main (long long int argc,char **argv) 
{	
	unsigned long long int n,k,v;
	//printf("Digite o n e o k.\n");
	//scanf("%d%d",&n,&k);
	
	n = atoi(argv[1]);
	k = atoi(argv[2]);
	v = Stirling (n,k);
	
	printf ("O resultado e: %d\n",v);
	return(0);
}