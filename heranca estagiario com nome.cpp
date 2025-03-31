#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>
#include <locale.h>

class Pessoa{
	protected: 
		string nome;
	public:
		Pessoa(string nome){
			this->nome = nome;
		}
		void exibir(){
			cout << "Nome " << nome <<endl;
		}
};

class Trabalhador: public Pessoa{
	protected:
		float salario;
		int carga_horaria;
		string funcao ; 
	public:
		Trabalhador(string nome, float salario, int carga_horaria, string funcao )
		: Pessoa(nome) {
			this->salario = salario;
			this->carga_horaria = carga_horaria;
			this->funcao = funcao ; 		
		}
		void exibir(){
			Pessoa::exibir();
			cout << "Função de " << funcao 
			<< ", Carga horaria semanal de " 
			<< carga_horaria<<", Salario de " 
			<< salario<<"R$" <<endl;
		}
};

class Estudante: public Pessoa{
	protected:
		string curso;
		int matricula;
	public:
		Estudante(string nome, string curso, int matricula):
		Pessoa(nome){
			this->curso = curso;
			this->matricula = matricula;
		}
		void exibir(){
			Pessoa::exibir();
			cout << "Estudante do curso de " 
			<< curso << ", Matricula " 
			<< matricula <<endl;
		}
};


class Estagiario: public Trabalhador, public Estudante{
	public:	 
		Estagiario(string nome, float salario, int carga_horaria, string funcao,string curso, int matricula )
		:Trabalhador(nome, salario,carga_horaria,funcao), Estudante(nome, curso,matricula) {
		}
		void exibir(){
			Estudante::exibir();
			cout << "Função de " << funcao 
			<< ", Carga horaria semanal de " 
			<< carga_horaria<<", Salario de " 
			<< salario<<"R$" <<endl;
		}
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	Estudante e =  Estudante("Jesaias", "TADS", 876544);
	e.exibir();
	cout << "-----------------" << endl;
	Trabalhador t = Trabalhador("Igor", 4600, 40, "Gerente");
	t.exibir();
	cout << "-----------------" << endl;
	Estagiario est = Estagiario("Joao", 1500, 20, "Programador Junior", "TADS", 853695);
	est.exibir();	
}


//class Estagiario: public Tra
