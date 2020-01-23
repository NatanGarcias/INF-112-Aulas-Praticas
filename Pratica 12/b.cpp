#include<bits/stdc++.h>
using namespace std;

int main ( int argc , char **argv){
	
	unsigned long long int a,b=0,d=0;
	
	a = atoi(argv[1]);
	for(int i=1;i<=32;i++){
		if((a & (1<<(i-1))) !=0){
			b+= (1<<((i-1)%8));
		}
		if(i%8==0){
			cout << "A parte " << d << " do numero " << a << " eh: " << b << endl;
			b = 0;
			d++;
		}
	}
	return 0;
}