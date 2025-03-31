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

#include <algorithm> //Usada pra trabalAR COM    COLEÇÕES
#include <iterator>

using namespace std;


class Carro{
private:
   int cor;
   string tipo;
   float velocidade;
public:
	Carro();
	void mudar_tipo(string tp);
	string mostrar_tipo(){
		return tipo ;
	};

};



int main(){
    vector<Carro> v;
	//vector<int> v= {2,3,5,7};
	//vector<string> v(10,"ABC");



    Carro car1;
	car1.mudar_tipo("HB20");


    Carro car2;
	car2.mudar_tipo("S10");

    Carro car3;
	car3.mudar_tipo("Corolla");

	v.push_back(car1);
	v.push_back(car2);
	v.push_back(car3);
	v.push_back(car2);
	//v.pop_back();


	cout << "\n\nQuantidade de S10 é "<< count(v.begin(),v.end(), car2) <<endl;



	//v.insert(v.begin()+1,car3);


	//Passaru um iterator e um valor


    cout << v[0].mostrar_tipo();


	for(int i =0;i<v.size();i++){
        cout <<(v[i]).mostrar_tipo() << endl;
	}


	//for(auto c : v){
	//	cout << c << endl;
	//}


    //Como ele é um conteiner stl
    //um iterador de um vector é
    /*
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it).mostrar_tipo() << endl;
    }*/


    //Inserir sem ser no fim



}


void Carro::mudar_tipo(string tp){
	tipo = tp;
};

Carro::Carro(){
}


