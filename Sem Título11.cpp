#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>


class Aluno{
	private:
		string matricula;
		string nome;
		float n1,n2,trabalho,media;
	public:
		Aluno(string matricula, string nome, float n1,float n2,float trabalho);
		~Aluno();
		float final();
		string getNome();
		string getMatricula();
		void setNome(string nome);
		void setMatricula(string matricula);
};
int main(){
	Aluno a = Aluno("77878", "Jesa",7,7,6);
	cout << "Para o aluno "<< a.getNome() << " faltam " <<a.final() << " para ser aprovado";
	return 0;
}

Aluno::Aluno(string matricula, string nome, float n1,float n2,float trabalho){
	this->matricula =matricula;
	this->nome =  nome;
	this->n1 = n1;
	this->n2 = n2;
	this->trabalho = trabalho;
	//this->n1,this->n2 = n1,n2;
	this->media = (n1*2.5 + n2*2.5 + trabalho*2)/7;
}
float Aluno::final(){
	if(this->media >= 7){
		//cout << "Aprovado";
		return 0;
	}else{
		return 7-this->media;
	}
}

string Aluno::getNome(){
	return this->nome;
}
string Aluno::getMatricula(){
	return this->matricula; 
}
void Aluno::setNome(string nome){
	this->nome = nome;
}
void Aluno::setMatricula(string matricula){
	this->matricula = matricula;
}

Aluno::~Aluno(){
	cout << "Objeto destruido";
}
