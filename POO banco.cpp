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
		void ver_saldo();
		Banco(string b, int ag, string n);
		~Banco();	
};

int main(){
	Banco bb = Banco("Banco do Brasil", 83,"Jesaias");
	bb.sacar(10);
	bb.ver_saldo();
	bb.depositar(50);
	bb.sacar(40);
	bb.sacar(5);
	bb.depositar(15);
	bb.ver_saldo();
	bb.sacar(50);
	bb.depositar(45);
	bb.sacar(50);
	bb.ver_saldo();
	
}

void Banco::sacar(float saque){
	if (saldo - saque < 0){
		cout << "Você não possui saldo sufuciente para fazer esse saque" << endl<< "Seu saldo é"<< saldo<<endl;
	}else{
		saldo = saldo - saque;
		cout << "Saque concluido com sucesso"<< endl;
		cout << "Seu saldo é: "<< saldo<< endl;
	}
	
}
void Banco::depositar(float valor){
	saldo = saldo + valor;
}
void Banco::ver_saldo(){
	cout <<this->nome << " seu saldo no " << banco << " Ag: "<<agencia<<endl <<"É: " << saldo << endl;
}

Banco::Banco( string banco, int agencia, string nome){
	cout << "Inicio do objeto";
	 this->banco = banco;
	 this->agencia = agencia;
	 this->nome = nome;
	 this->saldo = 0;
}
Banco::~Banco(){
	cout << "Fim do objeto";
}

