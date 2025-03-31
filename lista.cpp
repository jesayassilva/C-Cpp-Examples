//LIST
//Coleção de dados, permite adicionar ou remover elemntos em ambas as direções,
//podemos adicionar no eio tbm

#include <iostream>
#include <list>
using namespace std;


bool par(const int& valor){
    return (valor%2)==0;
}

int main(){

    //list<int> lista;
    //list<int> lista(10,5);
    //list<int> lista(outro_dq);
    list<int> lista = {0,1,2,3,4,5};

    for (auto it=lista.begin(); it!=lista.end();it++){
        cout << *it << endl;
    }


    //Funções de Capacidade
    //tamanho
    cout << lista.size()<< endl;
    //capacidade maxima de elementos
    cout << lista.max_size()<< endl;

    //Primeiro
    cout<< lista.front()<< endl;
    //ultimo
    cout<< lista.back()<< endl;

    if (lista.empty()){
        cout << "Vazia\n";
    }else{
        cout << "Não Vazia\n";
    }

    //Modificadores, substitui os valores atuais por um valor padrão
    //dq.assign(5,8);


    cout << "Modificadores\n-------------\n";

    lista.pop_front();
    lista.pop_back();

    for (auto it=lista.begin(); it!=lista.end();it++){
        cout << *it << endl;
    }

    cout << "Inserir\n-------------\n";

    lista.push_back(77);
    lista.push_front(777);
    for (auto it=lista.begin(); it!=lista.end();it++){
        cout << *it << endl;
    }

    cout << "Inserir\n-------------\n";

    lista.insert(lista.begin(),8);

    for (auto it=lista.begin(); it!=lista.end();it++){
        cout << *it << endl;
    }



    list<int> lista2={0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0};
    cout << "\nLista 2\n-------------\n";


    for (auto it=lista2.begin(); it!=lista2.end();it++){
        cout << *it << " ";
    }

    cout << "\nRemover Lista 2\n-------------\n";

    lista2.remove(0);

    for (auto it=lista2.begin(); it!=lista2.end();it++){
        cout << *it << " ";
    }


    cout << "\nRemover Lista 2 com condição IF \n-------------\n";

    //Precisa criar a função que vai listar se é par
    lista2.remove_if(par);

    for (auto it=lista2.begin(); it!=lista2.end();it++){
        cout << *it << " ";
    }


    //Outras funções


    list<int> lista3={4,1,2,2,6,3,0};
    cout << "\nLista 3\n-------------\n";
    lista3.sort();//Ordenar
    lista3.unique();//Deixar unico
    lista3.merge(lista2);//Junta lista 2 a 3
    lista3.reverse();//Inverter a lista



    for (auto it=lista3.begin(); it!=lista3.end();it++){
        cout << *it << " ";
    }






}

