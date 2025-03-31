//Exemplos
#include<iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Loja{
private:
    vector<string> nome;
    vector<int> preco;
    vector<int>::iterator it;
public:
	void inserir_produto(string nome, int preco);
	void mostrar_produtos();
	int somar();
	void informacoes();

    string to() {
        return "deu certo";
    }


};

int main(){
    Loja americanas;
    americanas.inserir_produto("bolacha",8);
    americanas.inserir_produto("Amendoin",15);
    americanas.inserir_produto("Bola",50);
    americanas.mostrar_produtos();
    americanas.informacoes();
    cout << "IAI? "<< americanas;


    /*
    vector<int> vt {11,12,13};
    vector<int>::iterator it1,it2;
    it1=vt.begin();
    it2=vt.end()-1;
    cout << "\n\nValores entre it1 e it2 são: " << distance(it1,it2)-1 << endl;
    */

}




void Loja::inserir_produto(string nome, int preco){
    this->nome.push_back(nome);
    this->preco.push_back(preco);
}

void Loja::mostrar_produtos(){
    for(int i=0; i <nome.size();i++ ){
            cout << nome[i]<< " " << preco[i]<<"R$\n";
    }
}

void Loja::informacoes(){
    cout << "Quantidade de produtos: " <<nome.size() << "- Pecos totais " << somar() <<"R$\n";
}

int Loja::somar(){
    int somatorio =0;
    for(auto e:this->preco){
        somatorio = somatorio + e;
    }
    return somatorio;
}


