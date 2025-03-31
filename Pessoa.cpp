#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

class Pessoa{
	private:
		string nome;
		int idade;
		int dia;
		int mes;
		int ano;
	public:
		Pessoa();
		Pessoa(string nome_, int dia_, int mes_, int ano_);
		void calculaIdade(int dia_hoje, int mes_hoje, int ano_hoje);
		int informaIdade();
		string informaNome();		
};

int main(){
	Pessoa albert;
	albert = Pessoa("Albert Einstein", 14,03,1879);
	Pessoa iss = Pessoa("Isaac Newton",4,1,1643);
	
	albert.calculaIdade(18,5,2023);
	iss.calculaIdade(18,5,2023);
	
	cout << albert.informaNome() << " teria " << albert.informaIdade() << " anos se estivesse vivo" << endl;
	cout << iss.informaNome() << " teria " << iss.informaIdade() << " anos se estivesse vivo" << endl;
	
	Pessoa jesaias = Pessoa("Jesaias", 9,1,1996);
	jesaias.calculaIdade(10,01,2023);
	cout << jesaias.informaNome() << " tem " << jesaias.informaIdade() << " anos." << endl;	 
}


void Pessoa::calculaIdade(int dia_hoje, int mes_hoje, int ano_hoje){
	if(mes_hoje<mes){
		idade = ano_hoje-ano-1;
	}else 
		if(mes_hoje==mes){
			if(dia_hoje >= dia){
				idade = ano_hoje-ano;
			}else{
				idade = ano_hoje-ano-1;
			}
	
	}else{
		idade = ano_hoje-ano;
	}
}
int Pessoa::informaIdade(){
	return idade;
}
string Pessoa::informaNome(){
	return nome;
}

Pessoa::Pessoa(string nome_, int dia_, int mes_, int ano_){
	nome =  nome_;
	dia = dia_;
	mes = mes_;
	ano = ano_;
}
Pessoa::Pessoa(){
}
