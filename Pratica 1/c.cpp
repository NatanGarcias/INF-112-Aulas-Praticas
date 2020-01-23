#include<bits/stdc++.h>
using namespace std;

struct Jogador {     
	int pontos;     
	int x,y; 
};

void leDadosJogador(Jogador *a)
{
	cin >> a->pontos;
	cin >> a->x;
	cin >> a->y;
}
int main()
{
	 Jogador a[5];
	 
	for(int i=0;i<5;i++)
		leDadosJogador(&a[i]);
	
	for(int i=0;i<5;i++)
	{
		cout << a[i].pontos << " ";  
		cout << a[i].x << " ";  
		cout << a[i].y << endl; 
	}
	
	return 0;
	
}
		
	 
	 
  
	 
	 
  