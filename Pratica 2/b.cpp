#include<bits/stdc++.h>
using namespace std;

struct Imagem {
	int **pixels;
	//matriz com os im.pixels da imagem
	int nrows;	//numero de linhas na imagem (altura)
	int ncolumns; //numero de colunas na imagem (largura) 
	};
	
void leImagem (Imagem &im)
{
	string a;
	int b,c;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	im.nrows = c;
	im.ncolumns = b;
	
	im.pixels = new int*[c];

	for(int i=0;i<c;i++)
		im.pixels[i] = new int[b];
	
	for(int i=0;i<im.nrows;i++)
		for(int j=0;j<im.ncolumns;j++)
			cin >> im.pixels[i][j];
}
		
void inverte (Imagem &im)
{
	for(int i=0;i<im.nrows;i++)
		for(int j=0;j<im.ncolumns;j++)
			if(im.pixels[i][j]==0)
				im.pixels[i][j] = 1;
			else
				im.pixels[i][j] = 0;
}

void imprimeImagem (Imagem &im)
{
	cout << "P1" << endl;
	cout << im.ncolumns << " " << im.nrows << endl;
	
	for(int i=0;i<im.nrows;i++)
		for(int j=0;j<im.ncolumns;j++)
		{
			if(i==im.nrows-1)
				cout << im.pixels[i][j] << endl;
			else
				cout << im.pixels[i][j];
		}	
}

void deletaImagem (Imagem &im)
{
	for(int i=0;i<im.nrows;i++)
		delete []im.pixels[i];
	
	delete []im.pixels;
}
	
int main() 
{
	
	Imagem im;
	leImagem(im);
	inverte(im);
	imprimeImagem(im);
	deletaImagem(im);
	return 0; 

} 