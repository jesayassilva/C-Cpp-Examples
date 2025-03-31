//Deque
//Fila dupla
//Possui iteradores
//Pode ser acessado de ambos os lados (Remover/inserir no inicio no final )

#include <iostream>
#include <deque>
using namespace std;

int main(){
    //deque<int> dq;
    //deque<int> dq(10,5);
    //deque<int> dq(outro_dq);
    deque<int> dq = {0,1,2,3,4,5};

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }
    cout << "-------------\n";

    //Funções de Capacidade
    //tamanho
    cout << dq.size()<< endl;
    //capacidade maxima de elementos
    cout << dq.max_size()<< endl;
    cout << "-------------\n";
    //alterar o tamanho do deque e preenche os espacos com 0 ou um valor padrão
    dq.resize(10);
    dq.resize(12,1);

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }
    cout << "-------------\n";


    //Funções de acesso
    //Terceiro
    cout<< dq[2]<< endl;
    //primeiro
    cout<< dq.front()<< endl;
    //ultimo
    cout<< dq.back()<< endl;

    //Modificadores, substitui os valores atuais por um valor padrão
    //dq.assign(5,8);


    cout << "-------------\n";

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }
    cout << "-------------\n";

    dq.pop_front();
    dq.pop_back();

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }

    cout << "Inserir\n-------------\n";

    dq.push_back(77);
    dq.push_front(777);
    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }

    cout << "Inserir\n-------------\n";
    dq.insert(dq.begin()+1,888);//Inserir na possição 1

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }

    //remover da possição 1
    dq.erase(dq.begin()+1);

    cout << "-------------\n";
    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }

    //Troca os elemtos dos dq
    //dq.swap(outro_dq);
    //cout << "Limpar o deque\n-------------\n";
    //dq.clear();

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }

    cout << "Adicionar no deque\n-------------\n";
    //C++ 11
    //dq.emplace(dq.begin()+1,543);
    //dq.emplace_back(233);
    //dq.emplace_front(3453);

    for (auto it=dq.begin(); it!=dq.end();it++){
        cout << *it << endl;
    }

}








