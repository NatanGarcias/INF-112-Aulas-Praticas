#include<bits/stdc++.h>
using namespace std;

void pre(int a,int b[],int c[])
{
	int *d = b;
	int *e = c;
	
	for(int i=0;i<a;i++)
		{
			d[i] = rand()%10;
			e[i] = rand()%10;
		}
}

void imprime(int a,int b[],int c[])
{
	int *d = b;
	int *e = c;
	
	for(int i=0;i<a;i++)
		{
			if(i==a-1)
				cout << d[i] << endl;
			else
				cout << d[i] << " ";
		}
		for(int i=0;i<a;i++)
		{
			if(i==a-1)
				cout << e[i] << endl;
			else
				cout << e[i] << " ";
		}	
}

void con(int a,int b[],int c[],int &p,int &k)
{
	int *d = b;
	int *e = c;
	
	for(int i=0;i<a;i++)
	{
		if((d[i]+e[i])%2==0)
			p++;
		else
			k++;
	}
}

int main()
{
	srand(time(NULL));
	int a;
	
	for(;;)
	{
		cout << "Digite a quantidade de jogadas a simular:" << endl;
		
		cin >> a;
		if(a<0)
			break;
		
		int *b = new int[a];
		int *c = new int[a];
		
		int p=0,k=0;
		
		pre(a,b,c);
		
		imprime(a,b,c);
		
		con(a,b,c,p,k);
		
		cout << "Par: " << p << endl;
		cout << "Impar: " << k << endl;
		
	}
	
	return 0;
}	
	 
	 
  
	 
	 
  