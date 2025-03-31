#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>
#include <locale.h>
class Empregado{
	protected:
		float salario;
		string nome;
	public:
		Empregado(float salario, string nome){
			this->salario = salario;
			this->nome = nome;
		}
		void quemSouEu() {
			cout <<"Sou " 
			<< this->nome <<", empregado desta empresa. Recebo "
			<< this->salario << endl;
		}
		void trabalho_aqui(){
			cout << "Trabalho nesta empresa" << endl;
		}
};

class Gerente: public Empregado{
	protected:
		float salario_ext;
	public:	 
		void quemSouEu() {
			cout <<"Sou " << this->nome 
			<<", Gerente desta empresa. Recebo "
			<< this->salario<< " e um extra de "
			<<	this->salario_ext << endl;
		}
		Gerente(float salario, string nome,float salario_ext)
		:Empregado(salario,nome){
			this->salario_ext = salario_ext;
			this->salario = salario;
		}
};






int main(){
	setlocale(LC_ALL, "Portuguese");
	Empregado empregado  = Empregado(1500,"João");
	empregado.trabalho_aqui();
	empregado.quemSouEu();
	cout << "------"<< endl;
	Gerente gerente = Gerente(1700,"Lucas",600);
	gerente.trabalho_aqui();
	gerente.quemSouEu();
}





