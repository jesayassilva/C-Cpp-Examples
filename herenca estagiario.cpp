#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>
#include <locale.h>

class Trabalhador{
	protected:
		float salario;
		int carga_horaria;
		string funcao ; 
	public:
		Trabalhador(float salario, int carga_horaria, string funcao ){
			this->salario = salario;
			this->carga_horaria = carga_horaria;
			this->funcao = funcao ; 		
		}
		void exibir(){
			cout << "Função de " << funcao 
			<< ", Carga horaria semanal de " 
			<< carga_horaria<<", Salario de " 
			<< salario<<"R$" <<endl;
		}
};

class Estudante{
	protected:
		string curso;
		int matricula;
	public:
		Estudante(string curso, int matricula){
			this->curso = curso;
			this->matricula = matricula;
		}
		void exibir(){
			cout << "Estudante do curso de " 
			<< curso << ", Matricula " 
			<< matricula <<endl;
		}
};


class Estagiario: public Trabalhador, public Estudante{
	public:	 
		Estagiario(float salario, int carga_horaria, string funcao,string curso, int matricula )
		:Trabalhador(salario,carga_horaria,funcao), Estudante(curso,matricula) {
		}
		void exibir(){
			Trabalhador::exibir();
			Estudante::exibir();
		}
		
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	Estudante e =  Estudante("TADS", 876544);
	e.exibir();
	cout << "-----------------" << endl;
	Trabalhador t = Trabalhador(4600, 40, "Gerente");
	t.exibir();
	cout << "-----------------" << endl;
	Estagiario est = Estagiario(1500, 20, "Programador Junior", "TADS", 853695);
	est.exibir();
	
	
}


//class Estagiario: public Tra
