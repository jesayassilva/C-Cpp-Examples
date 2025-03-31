//DEQUE
// Fila dupla
// Iteradores
#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq2;
    deque<int> dq3(10,5);
    deque<int> dq4(dq3);
    deque<int> dq={6,1,8,5,4,5};

    for(auto e = dq.begin(); e!=dq.end(); e++){
        cout << *e << endl;
    }
    cout << "-----------\n";
    //Funções
    //tamanho
    cout << dq.size() << endl;
    //Capacidade maxima
    cout << dq.max_size()<< endl;

    cout << "-----------\n";
    //alterar o tamanho do deque e preenche os espacos com 0 ou um valor padrão
    dq.resize(10,8);

    for(auto e = dq.begin(); e!=dq.end(); e++){
        cout << *e << endl;
    }
    cout << "-----------\n";

    //Funções de acesso
    //primeiro
    cout << dq.front();
    //ultimo
    cout << dq.back();
    //terceiro objeto
    cout << dq[2];

    //Modificadoras
    //inicio
    dq.push_front(555);
    //final
    dq.push_back(777);
    cout << "-----------\n";

    dq.insert(dq.begin()+2,333);


    for(auto e = dq.begin(); e!=dq.end(); e++){
        cout << *e << endl;
    }

     cout << "-----------\n";
     //
    dq.pop_back();//remover do inicio

    for(auto e = dq.begin(); e!=dq.end(); e++){
        cout << *e << endl;
    }
    cout << "-----------\n";
    int elemento = (dq.size()/2);
    dq.erase(dq.begin()+elemento);//Reover elementos no meio do dq


    for(auto e = dq.begin(); e!=dq.end(); e++){
        cout << *e << endl;
    }
    cout << "Inverter os dq\n-----------\n";
    dq.swap(dq3);
    dq.clear();

    cout << "\ndq\n-----------\n";
    for(auto e = dq.begin(); e!=dq.end(); e++){
        cout << *e << endl;
    }

    cout << "\ndq3\n-----------\n";
    for(auto e = dq3.begin(); e!=dq3.end(); e++){
        cout << *e << endl;
    }

    //C++ 11 ou mais
    dq3.emplace_back(6767);
    dq3.emplace_front(433);
    dq3.emplace(dq3.begin()+4,1234);

    cout << "\ndq3\n-----------\n";
    for(auto e = dq3.begin(); e!=dq3.end(); e++){
        cout << *e << endl;
    }
}











