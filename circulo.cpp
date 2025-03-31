#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>
#include <locale.h>

class Circulo{
	private:
		float raio;
	public:
		Circulo(float r){
			raio = r;
		}
		void calcular_circunferencia(){
			float circunferencia = 2 * 3.14 * raio; 
			cout << "A circunferência do círculo é " << circunferencia << endl;
		}
			
		void calcular_area(){
			float area = 3.14 * raio * raio;
			cout << "Área do círculo é " << area << endl;	
		}
};



int main(){
	setlocale(LC_ALL, "Portuguese");
	Circulo c =  Circulo(3);
	c.calcular_circunferencia();
	c.calcular_area();

	
	
}


//class Estagiario: public Tra
