#include <string.h> 
#include <iostream> 
using namespace std;
#include <string> 

class ClasA { 
	protected : 
		string nome; 
	public : 
		void mostrar () {
			cout << "\nNome na Classe\t: " << nome;
		} 
}; 

class ClasB1 : public virtual ClasA { 
	public : 
		ClasB1 (string n = "Classe B1") {
			nome=n;
		} 
		void mostrar() {
			ClasA::mostrar();
		} 
}; 

class ClasB2 : public virtual ClasA { 
	public : 
		ClasB2(string n = "Classe B2") {
			nome =n;
		} 
		void mostrar() {
			ClasA::mostrar();
		} 
}; 

class ClasC : public ClasB1, public ClasB2 { 
	public : 
		void saida () { 
		ClasB1::mostrar(); ClasB2::mostrar();      
		} 
}; 

int main(){
//clrscr(); 
ClasC objClasC; 
objClasC.saida(); 
} 
