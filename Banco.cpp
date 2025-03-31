#include "Banco.h"
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


void Banco::depositar(float valor){

	this->saldo = this->saldo + valor;
}

void Banco::depositar(float valor, int parcelas){
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


