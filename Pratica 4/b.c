#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long long int fat (unsigned long long int a)
{
	if(a==0)
		return 1;
	else
		return a*fat(a-1);
}
int main (int argc, char **argv) {
	
	int a;
	a = atoi(argv[1]);
	
	unsigned long long int v;

	v =fat(a);
	
	printf("%lld",v);
   
   return(0);
}