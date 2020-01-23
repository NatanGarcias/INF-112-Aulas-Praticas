#include<bits/stdc++.h>
using namespace std;

void leia(int &a,int &b)
{
	cin >> a;
	cin >> b;
}

void leia2(int *a,int *b)
{
	cin >> *a;
	cin >> *b;
}

int main ()
{	
	int a,b;
	
	leia(a,b);
	
	cout << a << " " << b << endl;
	
	leia2(&a,&b);
	
	cout << a << " " << b << endl;
	
	return 0;
}