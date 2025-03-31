//LISTA
//Coleção de dados, permite adicionar ou remover elemntos em ambas as direções,
#include <iostream>
#include <list>
using namespace std;

bool par(const int & valor){
    return (valor%2)==0;
}

main(){
    list<int> l={1,5,2,0,4,3,1,0};
    list<int> l2={6,7,8,9,10};

    for (auto it=l.begin(); it!=l.end();it++){
        cout << *it << " ";
    }
    cout << "\n\n";


    l.reverse();

    for (auto it=l.begin(); it!=l.end();it++){
        cout << *it << " ";
    }
    cout << "\n\n";
}
