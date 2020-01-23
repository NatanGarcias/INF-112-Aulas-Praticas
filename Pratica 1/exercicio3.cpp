#include <iostream>
#include <cstdio>
using namespace std;

struct Jogador {
	int pontos;
	int x,y;
};

void leDadosJogador(Jogador *j) {
	cout << "Digite o numero de pontos: " ;
	cin >> j->pontos;
	cout << "Digite a coordenada x: " ;
	cin >> j->x;
	cout << "Digite a coordenada y: " ;
	cin >> j->y;
}



int main() {
	Jogador jogadores[5];
	for(int i=0;i<5;i++)
		leDadosJogador(&jogadores[i]);

	for(int i=0;i<5;i++)
		cout << jogadores[i].pontos << " " << jogadores[i].x << " " << jogadores[i].y << endl;

	return 0;
}
