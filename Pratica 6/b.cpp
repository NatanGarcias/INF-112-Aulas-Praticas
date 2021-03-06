#include<bits/stdc++.h>
using namespace std;

void peneira(int *v, int p, int m) 
{ 
	int maiorFilho = (2*p)+1; 
	//maiorFilho -= 1;
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
	int *v = new int [n];
	
	for(int i=0;i<n;i++)
		cin >> v[i];
	
	for(p = (n/2)-1; p >= 0; p--) 
		peneira(v,p,n);
	
	for(m = n-1; m >= 1; m--)
	{
		swap(v[0],v[m]); 
		peneira(v, 0, m - 1);
	}		
	
	for(int i=0;i<n;i++)
		cout << v[i] << endl;
	
	return 0;
}