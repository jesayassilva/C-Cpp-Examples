#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>
#include <locale.h>

class Circulo{
	private:
		float raio;
		float area;
		float circunferencia;
		void calcular_area(){	area = 3.14 * raio * raio; }
		void calcular_circunferencia(){circunferencia = 2 * 3.14 * raio;}
	
	public:
		Circulo(float r){
			raio = r;
			calcular_area();
			calcular_circunferencia();
		}
		void mostrar_dados(){
			cout << "A Circunferência do círculo é " << circunferencia << endl;
			cout << "A Área do círculo é " << area << endl;
		}

};
int main(){
	setlocale(LC_ALL, "Portuguese");
	Circulo c =  Circulo(5);
	c.mostrar_dados();
}


//class Estagiario: public Tra
