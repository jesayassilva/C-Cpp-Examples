#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>


class Empregado{
	protected:
		string nome;
		int idade;
	public:
		Empregado(string nome, int idade){
			this->nome = nome;
			this->idade = idade;
		}
		void situacao(){
			cout << "Sou um funcionario"<< endl;
		}
		void minhaFuncao(){
			cout << "Sou empregado"<< endl;
		}

};

class Gerente: public Empregado{
	public:
		void minhaFuncao(){
			cout <<" Sou gerente" << endl;
		}

};






int main(){
	Empregado e  = Empregado("teste",27) ;;
	e.minhaFuncao();
	e.situacao();
	cout << "------"<< endl;
	Gerente g;
	g.minhaFuncao();

}




