#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

class Banco{
	private:
		string banco;
		int agencia;
		string nome;
		float saldo;
	public:
		void sacar(float valor);
		void depositar(float valor);
		void depositar(float valor, int parcelas);
		void ver_saldo();
		Banco(string b, int ag, string n);	
		Banco();
		void setNome(string nome);
		string getNome();
};



