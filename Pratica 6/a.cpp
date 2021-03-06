#include<bits/stdc++.h>
using namespace std;

void peneira(int *v, int p, int m) 
{ 
	int maiorFilho = 2 * p; 
	
	while(maiorFilho <= m) 
	{
		if (maiorFilho < m && v[maiorFilho+1] > v[maiorFilho])
			maiorFilho++;
		if (v[p] > v[maiorFilho])
			return; 
		swap(v[p],v[maiorFilho]); 
		p = maiorFilho; 
		maiorFilho *= 2; 
	} 
}

int main()
{
	int n,p,m;
	cin >> n;
	int *a = new int [n];
	int *v = new int [n+1];
	
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=0;i<n;i++)
		v[i+1] = a[i];
	
	for(p = n/2; p >= 1; p--) 
		peneira(v,p,n);
	
	for(m = n; m >= 2; m--)
	{
		swap(v[1], v[m]); 
		peneira(v, 1, m - 1);
	}		
	
	for(int i=1;i<n+1;i++)
		a[i-1] = v[i];
	
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
	
	return 0;
}