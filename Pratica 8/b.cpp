#include<bits/stdc++.h>
using namespace std;

class Ponto{
	private:
		int x;
		int y;		
	
	public:
	void setX(int a);
	void setY(int a);
	int getX();
	int getY();
	double distancia(int a,int b);
	void imprime();
	void leDoTeclado();
}; 

class Reta{
	private:
	Ponto ab;
	Ponto ba;
	
	public:
	void setP1(Ponto ab2);
	void setP2(Ponto ba2);
	Ponto getP1();
	Ponto getP2();
	double tamanho();
	void imprime2();
	void leDoTecladoReta();
};

int main ()
{
	Reta *h = new Reta[3]; 
	
	for(int i=0;i<3;i++)
	{
		h[i].leDoTecladoReta();
	}
	
	for(int i=0;i<3;i++)
	{
		cout << "Reta: " ;
		h[i].imprime2(); 
		cout << " e o tamanho: " << h[0].tamanho() << endl;
	}
	delete []h;
	
	return 0;
}

void Ponto::setX(int a){
	x = a;
}

void Ponto::setY(int a){
	y = a;
}

int Ponto::getX(){
	return x;
}

int Ponto::getY(){
	return y;
}

double Ponto::distancia(int a,int b)
{
	double f,g;
	f=a-x;
	g=b-y;
	return sqrt((pow((f),(2))+pow((g),(2))));
}

void Ponto::imprime()
{
	cout << "(" << x << "," << y << ")";
}

void Ponto::leDoTeclado()
{
	int a,b;
	
	cout << "Informe o valor do ponto x" << endl;
	cin >> a;
	
	cout << "Informe o valor do ponto y" << endl;	
	cin >> b;
	
	x=a;
	y=b;
}

void Reta::setP1(Ponto ab2){
	ab = ab2;
}

void Reta::setP2(Ponto ba2){
	ba = ba2;
}

Ponto Reta::getP1(){
	return ab;
}

Ponto Reta::getP2(){
	return ba;
}

double Reta::tamanho(){
	ab.distancia(ba.getX(),ba.getY());
}

void Reta::imprime2(){
	cout << "[";
	ab.imprime();
	cout << ",";
	ba.imprime();
	cout << "]"; 
}

void Reta::leDoTecladoReta(){
	
	Ponto a,b;
	
	a.leDoTeclado();
	b.leDoTeclado();
	
	ab=a;
	ba=b;
}