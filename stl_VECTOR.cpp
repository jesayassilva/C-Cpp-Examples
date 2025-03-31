//Vector é basicamente um array

//vector<tipo_de_dados> nome_variavel;

//acessar por indice v[1] acessa o valor pelo indice

//assign(4,2) redimencionar o vector com 4 elemntos (todos 0) se tiver um segundo parametros os elementos são todos o valor 2 nesse caso
//push_back(5)
//pop_back() deleta o ultimo do vector
//size() ver o tamanho

#include<iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    vector<string> v;
	//vector<int> v= {2,3,5,7};
	//vector<string> v(10,"ABC");
	v.push_back("A");
	v.push_back("B");
	v.push_back("D");



    //Inserir um valor em outra possição do vector
	v.insert(v.begin()+2,"C");
	//Passar um iterator e um valor para inserir no meio do vector




	for(int i =0;i<v.size();i++){
		cout <<v[i] << endl;
	}

    //Outra forma de mostrar
	//for(auto c : v){
	//	cout << c << endl;
	//}

    //Outra forma de mostrar
    //Como ele é um conteiner stl, um iterador de um vector é:

    /* vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }*/



}


