//Exemplos
#include<iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Loja{
private:
    map<int,string > produto;
    vector<int>::iterator it;
public:
	void inserir_produto(string nome, int preco);
	void mostrar_produtos();
	//int somar();
	//void informacoes();


};

int main(){
    Loja americanas;
    americanas.inserir_produto("Bolacha",8);
    americanas.inserir_produto("Faca",12);
    americanas.inserir_produto("Amendoin",15);
    americanas.inserir_produto("Bola",50);
    americanas.inserir_produto("Pera",2);
    americanas.mostrar_produtos();
    //americanas.informacoes();




    /*
    vector<int> vt {11,12,13};
    vector<int>::iterator it1,it2;
    it1=vt.begin();
    it2=vt.end()-1;
    cout << "\n\nValores entre it1 e it2 são: " << distance(it1,it2)-1 << endl;
    */

}




void Loja::inserir_produto(string nome, int preco){
    //this->produto.insert(pair<int,string>(preco,nome));
    this->produto[string preco,nome];
}

void Loja::mostrar_produtos(){
    for(auto it=produto.begin(); it!=produto.end(); ++it ){
            cout << it->first << " " << it->second <<"R$\n";
    }
}

/*
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
*/

