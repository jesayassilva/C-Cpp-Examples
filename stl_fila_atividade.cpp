#include<iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	queue<string> linguagens;//n�o pode queue<int> v = [2,3,5,7];
	linguagens.push("C++");
	linguagens.push("Java");
	linguagens.push("Python");
	linguagens.push("R");

	cout << "Primeira linguagem de programa��o da fila � "<< linguagens.front()<< "\n";
    cout << "Ultima linguagem de programa��o da fila � "<< linguagens.back() << "\n";


    //N�o � possivel iterar entre os elementos. Pois s� � possivel acessar pelo inicio da fila
    linguagens.pop();

    if(linguagens.empty()){
        cout << "A fila esta vazia";
    }else{
        cout << "A fila  n�o esta vazia";
    }

    while(!linguagens.empty()){
        cout  << linguagens.front() << endl;
        linguagens.pop();
    }

}

