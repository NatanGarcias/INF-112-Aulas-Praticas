#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	int bytes_read;
	int nbytes = 100;
	char *a;
	int b[10],i;
	
	for(i=0;i<10;i++)
		b[i] = 0;

	a = (char *) malloc (nbytes + 1);
	bytes_read = getline(&a, &nbytes, stdin);
	
	if (bytes_read == -1)
    {
      puts ("ERROR!");
    }
   char *token;
   
   token = strtok(a,":,");
   
   i=0;
   while( token != NULL ) {
      b[i] = atoi(token);
      i++;
      token = strtok(NULL,":,");
   }
   
   for(int j=0;j<i;j++)
		printf("%d\n",b[j]);
   
   free(a);
   
   return(0);
}