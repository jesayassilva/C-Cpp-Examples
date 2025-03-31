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
			void depositar(int valor);
			void depositar(float valor);
			void depositar(float valor, int parcelas);
			void ver_saldo();
			Banco(string b, int ag, string n);
			Banco();
			void setNome(string nome);
			string getNome();
	};

int main(){
	Banco b1 = Banco("Banco do Brasil", 83,"Jesaias");
	b1.ver_saldo();
	float x;
	cin >> x;
	b1.depositar(x,8);
	b1.sacar(50);
	b1.ver_saldo();
}

void Banco::sacar(float valor){
	if (this->saldo-valor <= 0){
		cout << "Saldo insuficiente" << endl;
	}else{
		this->saldo -= valor;
		cout << "Saque efetivado" << endl;
	}

}

// get = pegar
string Banco::getNome(){
	return this->nome;
}
// set = alterar
void Banco::setNome(string nome){
	this->nome = nome;
}


void Banco::depositar(int valor){
    cout << "Chamou int \n";
	this->saldo = this->saldo + valor;
}

void Banco::depositar(float valor){
    cout << "Chamou float \n";
	this->saldo = this->saldo + valor;
}

void Banco::depositar(float valor, int parcelas){
    cout << "Chamou dois parametros \n";
	this->saldo = this->saldo + valor*parcelas;
}

void Banco::ver_saldo(){
	cout << this->getNome() <<" seu saldo é: " << this->saldo << endl;
}

Banco::Banco(string banco, int agencia, string nome){
	 this->banco = banco;
	 this->agencia = agencia;
	 this->nome = nome;
	 this->saldo = 0;
}


