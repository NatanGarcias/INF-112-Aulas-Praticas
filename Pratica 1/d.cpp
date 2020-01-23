#include<bits/stdc++.h>
using namespace std;

int main()
{     
	char str[] = "abc teste";
	char *ptr = str;
	
	while(*ptr!='\0') 
		ptr++; 
 
	ptr--;
	
	for(;ptr>=str;ptr--)
		cout << *ptr;
	
	cout << endl;
	
    return 0; 
}
		
	 
	 
  