#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long long int m[100];
int n[100];

unsigned long long int fibo(unsigned long long int a)
{
	if(n[a]==1)
	{
		return m[a];
	}
	else
	{
		n[a] = 1;
		m[a] = fibo(a-1)+fibo(a-2);
		return fibo(a-1)+fibo(a-2);
	}
}
int main (int argc, char **argv) {
	
	int a;
	a = atoi(argv[1]);
	unsigned long long int v;
	
	int i;
	
	for(i=0;i<100;i++)
		n[0] = 0;
	
	n[0] = 1;
	n[1] = 1;
	m[0] = 0;
	m[1] = 1;
	
	v =fibo(a);
	
	printf("%lld",v);
   
   return(0);
}