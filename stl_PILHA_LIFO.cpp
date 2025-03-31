//Stack é uma PILHA
//LIFO - Last In First Out
//Ultimo a entrar, primeiro a sair
// Como uma pilha de pratos

//stack<tipo_de_dados> nome_variavel;



// push(2)  insere elementos no inicio da pilha
// top() retorna o elemento do topo da pilha
// empty() ver se esta vazia
//pop_back() deleta o ultimo do vector
//size() ver o tamanho

#include<iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> v;//não pode stack<int> v = [2,3,5,7];
	v.push(11);
	v.push(13);
	v.push(15);




    //Não é possivel iterar entre os elementos. Pois só é possivel acessar pelo topo
    while(!v.empty()){
            cout  << v.top() << endl;
            v.pop();
    }

	/*
	for(auto e : v){
		cout << e << endl;
	}
    */

    //Como ele é um conteiner stl
    //um iterador de um vector é
    /*
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it)<< endl;
    }*/


    //Inserir sem ser no fim



}


