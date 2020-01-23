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

int main ()
{
	Ponto *v = new Ponto[4];
	
	v[0].setX(0);
	v[0].setY(0);
	v[1].setX(1);
	v[1].setY(2);
	v[2].setX(3);
	v[2].setY(4);
	v[3].setX(3);
	v[3].setY(6);
	
	
	for(int i=0;i<4;i++)
	{
		cout << "Ponto: ";
		v[i].imprime();
		cout << " e a distancia:" << v[0].distancia(v[i].getX(),v[i].getY()) << endl;
	}
	
	Ponto *v2 = new Ponto[4];
	
	for(int i=0;i<4;i++)
	{
		v2[i].leDoTeclado();
	}
	
	for(int i=0;i<4;i++)
	{
		cout << "Ponto: " ;
		v2[i].imprime(); 
		cout << " e a distancia:" << v[0].distancia(v2[i].getX(),v2[i].getY()) << endl;
	}
	
	delete []v;
	delete []v2;
	
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