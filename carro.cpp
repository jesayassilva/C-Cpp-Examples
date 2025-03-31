#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

class Carro{
private:
   int cor;
   string tipo;
   float velocidade;
public:
	Carro();
	void mudar_tipo(string tp);
	void mostrar_tipo(){
		cout <<"O tipo de carro é " <<tipo << endl;
	};	
};

int main(){
	Carro car;
	string tipo_carro;
	cout << "Qual tipo de carro"<< endl;
	cin >> tipo_carro;
	car.mudar_tipo(tipo_carro);
	
	Carro car2;
	string tipo_outro_carro;
	cout << "Qual tipo de carro 2 "<< endl
	cin >> tipo_outro_carro;
	car2.mudar_tipo(tipo_outro_carro);
	
	car.mostrar_tipo();	
	car2.mostrar_tipo();
}

void Carro::mudar_tipo(string tp){
	tipo = tp;
};

Carro::Carro(){
}
