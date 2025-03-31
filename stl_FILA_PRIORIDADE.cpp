//Priority Queue � uma FILA de Prioridade
//(por alguma ordem, padr�o decrescente)


//queue<tipo_de_dados> nome_variavel;



// push(2)  insere elementos no final da fila
// front() retorna o elemento na frente da fila
// empty() ver se a fila esta vazia
//size() ver o tamanho

#include<iostream>
#include <queue>
using namespace std;
int main(){
	//priority_queue<string> p;//n�o pode queue<int> v = [2,3,5,7];
	priority_queue<string, vector<string>, greater<string> > p;
	//Al�m do TIPO de dados temos que usar o CONTEINER e o COMPARADOR
	//p.push("ADDD");
	p.push("d");
	p.push("C");
	p.push("Daa");
    p.push("B");
    p.push("B");

    //N�o � possivel iterar entre os elementos. Pois s� � possivel acessar pelo inicio da fila
    while(!p.empty()){
        cout  << p.top() << endl;
        p.pop();
    }


}


