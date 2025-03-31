//Queue é uma FILA
//FIFO - First In First Out
//Primeiro a entrar, primeiro a sair

//queue<tipo_de_dados> nome_variavel;



// push(2)  insere elementos no final da fila
// front() retorna o elemento na frente da fila
// empty() ver se a fila esta vazia
//size() ver o tamanho

#include<iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> fila;//não pode queue<int> v = [2,3,5,7];
	fila.push(11);
	fila.push(13);
	fila.push(15);

	cout << fila.back() << "------\n\n";


    //Não é possivel iterar entre os elementos. Pois só é possivel acessar pelo inicio da fila
    while(!fila.empty()){
        cout  << fila.front() << endl;
        fila.pop();
    }


}


