#include<bits/stdc++.h>
using namespace std; 

class MemoriaExcept { 
};  

class DivisaoPorZeroExcept {
};

class RaizDeNumeroNegativoExcept {
};

class LogDeNaoPositivoExcept {
};

class Racional {
	private: 
	long long int*x; 
	static long long int mdc(long long int x, long long int y){
			if (y==0)
				return x;
			else
				return mdc(y,x % y);
	}
	static void Conserta(Racional &a){
		long long int m,n;
		if((a.x[0]<0 && a.x[1]<0) || (a.x[0]>=0 && a.x[1]<0)){
				a.x[0] *= -1;
				a.x[1] *= -1;
		}   
        m = abs(a.x[0]);
        n = abs(a.x[1]); 
        if(n!=1){
            m = mdc(m,n);
            a.x[0] = a.x[0]/m;
            a.x[1] = a.x[1]/m;
        }
	}
	public: 
		Racional(){
			x = new long long int[2];
			x[0] = 0; 
			x[1] = 1;
		} 
		Racional(long long int p, long long int q) {
			if(q==0){
				throw DivisaoPorZeroExcept();
			}
			
			x = new long long int[2];
			x[0] = p;
			x[1] = q;
			Conserta(*this);
		} 
		void imprime(){
			cout << "(" << x[0] << "," << x[1] << ")" << endl;
		}
        ~Racional(){
            delete[]x;
        }
        Racional(const Racional &a){
			long long int m,n;
            x = new long long int[2];
            Racional k;
            for(int i=0;i<2;i++){
                k.x[i] = a.x[i];
            }
            Conserta(k);
            for(int i=0;i<2;i++){
                x[i] = k.x[i];
            }
        }
        Racional operator+(const Racional &a) const{
            Racional k;
            k.x[0] = this->x[0] * a.x[1] + this->x[1] * a.x[0];
            k.x[1] = this->x[1] * a.x[1];

			Conserta(k);
            return k;
        }
        Racional operator+(const long long int a) const{
            Racional k;
            k.x[0] = this->x[0] + a * this->x[1];
            k.x[1] = this->x[1];
            return k;
        }
        Racional operator-(const Racional &a) const{
            Racional k;
            k.x[0] = this->x[0] * a.x[1] - this->x[1] * a.x[0];
            k.x[1] = this->x[1] * a.x[1];
			
			Conserta(k);
            return k;
        }
        Racional operator*(const Racional &a) const{
            Racional k;
            k.x[0] = this->x[0] * a.x[0];
            k.x[1] = this->x[1] * a.x[1];
			
			Conserta(k);
            return k;
        }
		Racional operator/(const Racional &a) const{
            Racional k;
			if(this->x[0] ==0 || a.x[0] ==0){
				k.x[0] = 0;
				k.x[1] = 1;
			}
			else{
				k.x[0] = this->x[0] * a.x[1];
				k.x[1] = this->x[1] * a.x[0];
			}
			Conserta(k);
            return k;
        }
		Racional Sqrt(){
			Racional k;
			if(x[0]<0){
				throw RaizDeNumeroNegativoExcept();
			}
			long long int inicio = 1, meio, fim = x[0];
			for(;;){
				if (fim == 1)
					break;
				if(inicio == fim-1)
					break;
				meio = (inicio+fim)/2;
				if(meio*meio > x[0])
					fim = meio;
				if(meio*meio < x[0])
					inicio = meio;
			}
			k.x[0] = inicio;
			
			inicio = 1; 
			meio;
			fim = x[1];
			for(;;){
				if (fim == 1)
					break;
				if(inicio == fim-1)
					break;
				meio = (inicio+fim)/2;
				if(meio*meio > x[1])
					fim = meio;
				if(meio*meio < x[1])
					inicio = meio;
			}
			k.x[1] = inicio;
			return k;
        }
		Racional Log(){
			long long int n=0,m=0;
			if(x[0]<=0){
				throw LogDeNaoPositivoExcept();
			}
            Racional k;
            k.x[0] = x[0];
            k.x[1] = x[1];
			
			for(int i=0;i<x[0];i++){
				k.x[0]/=2;
				if(k.x[0]/2==0){
					n = ++i;
					break;
				}
			}
			for(int i=0;i<x[1];i++){
				k.x[1]/=2;
				if(k.x[1]/2==0){
					m = ++i;
					break;
				}
			}
			k.x[0] = n-m;
			k.x[1] = 1;

			return k;
        }
        Racional& operator=(const Racional &a){
            if(this == &a)
                return *this;

            this->x[0] = a.x[0];
            this->x[1] = a.x[1];
            return *this;
		}
		void SetElementoX(long long int p){
			x[0] = p;
		}
		void SetElementoY(long long int p){
			if(p==0)
				throw DivisaoPorZeroExcept();
			x[1] = p;
		}
};

Racional f(Racional x, Racional y) {
	return x + (x/y); 
}

 int main (int argc, char *argv[]) { 
	
	long long int a,b;
	/*Racional x(atoi(argv[1]), atoi(argv[2])); // usa argumentos da linha de comando
	Racional y(atoi(argv[3]), atoi(argv[4])); // usa argumentos da linha de comando */
	while(true){
		try{
			cout << "Digite o valor do numerador e do denominador:" << endl;
			cin >> a >> b;
			Racional x(a,b);
			cout << "Digite o valor do numerador e do denominador:" << endl;
			cin >> a >> b;
			Racional y(a,b);
			cout << "x: ";
			x.imprime(); 
			cout << "y: ";
			y.imprime(); 
			Racional z = x + y; 
			cout << "z = x+y: ";
			z.imprime(); 
		    z = x - y; 
			cout << "z = x-y: ";
            z.imprime(); 
			z = x + 1;
            cout << "z = x+1:";
			z.imprime();
            z = x * y;
            cout << "z = x*y:";
            z.imprime();	
			z = f(x, y);
			cout << "f(x,y): "; 
			z.imprime(); 
			cout << "Sqrt de x: ";
			x.Sqrt().imprime();
			cout << "Sqrt de y: ";
			y.Sqrt().imprime();
			cout << "Log de x: ";
			x.Log().imprime();
			cout << "Log de y: ";
			y.Log().imprime();	
			break;
		}
		catch (LogDeNaoPositivoExcept &ex){
				cerr << "Inesperado! tentando calcular log de numero negativo!" << endl;
				cerr << "Impossivel de calcular, programa sendo finalizado" << endl;
				exit(1);
		}
		catch (MemoriaExcept &ex){
				cerr << "Inesperado! não temos mais espaço na memoria!" << endl;
				cerr << "Memoria insuficiente, alocacao nao foi realizada" << endl;
				exit(1);
		}
		catch (RaizDeNumeroNegativoExcept &ex){
				cerr << "Inesperado! tenando calcular raiz de numero negativo!" << endl;
				cerr << "Impossivel de calcular, programa sendo finalizado" << endl;
				exit(1);
		}
		catch (DivisaoPorZeroExcept &ex){
				cerr << "Inesperado! divisão por zero!" << endl;
				cerr << "Tente novamente!" << endl;
				cout << "_______________ Programa Reiniciando! _______________" << endl;
				cout << endl;
				continue; 
		}
	}
	return 0; 
}