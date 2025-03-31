#include <iostream>
#include <stdio.h>
using namespace std;
#include <string>

// defini��o do tipo Item
using Item = char;


// declara��o da classe Pilha
class Pilha{
private:
   enum { MAX = 10 };                      // limite de itens
   Item itens[MAX];                        // armazenamento de itens
   int topo;                               // �ndice do item no topo
public:
   Pilha();                                // construtor
   bool Vazia() const;                     // verifica se a pilha est� vazia
   bool Cheia() const;                     // verifica se a pilha est� cheia

   bool Empilhar(const Item & item);       // adiciona item na pilha                                              
   bool Desempilhar(Item & item);          // remove item da pilha
};


int main()
{
    Pilha pilha;

    pilha.Empilhar('A');
    pilha.Empilhar('H');
    pilha.Empilhar('L');
    pilha.Empilhar('I');
    pilha.Empilhar('P');

    while (!pilha.Vazia()){
        Item i; 
        pilha.Desempilhar(i);
        cout << i << endl;
    }
	}



Pilha::Pilha() {
    topo = 0;
}

bool Pilha::Vazia() const{
    return topo == 0;
}

bool Pilha::Cheia() const{
    return topo == MAX;
}

bool Pilha::Empilhar(const Item& item){
    if (topo < MAX) {
        itens[topo++] = item;
        return true;
    }
    return false;
}


bool Pilha::Desempilhar(Item& item)
{
    if (topo > 0) {
        item = itens[--topo];
        return true;
    }
    return false;
}


