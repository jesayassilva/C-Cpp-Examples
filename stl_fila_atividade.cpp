#include<iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	queue<string> linguagens;//não pode queue<int> v = [2,3,5,7];
	linguagens.push("C++");
	linguagens.push("Java");
	linguagens.push("Python");
	linguagens.push("R");

	cout << "Primeira linguagem de programação da fila é "<< linguagens.front()<< "\n";
    cout << "Ultima linguagem de programação da fila é "<< linguagens.back() << "\n";


    //Não é possivel iterar entre os elementos. Pois só é possivel acessar pelo inicio da fila
    linguagens.pop();

    if(linguagens.empty()){
        cout << "A fila esta vazia";
    }else{
        cout << "A fila  não esta vazia";
    }

    while(!linguagens.empty()){
        cout  << linguagens.front() << endl;
        linguagens.pop();
    }

}

