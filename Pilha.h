
// defini��o do tipo Item
Item = char;

// ----------------------------------
// Declara��o da Classe Pilha
// ----------------------------------

class Pilha
{
private:
	enum { MAX = 10 };                      // limite de itens
	Item itens[MAX];						// armazenamento de itens
	int topo;                               // �ndice do item no topo

public:
	Pilha();                                // construtor

	bool Vazia() const;                     // verifica se a pilha est� vazia
	bool Cheia() const;                     // verifica se a pilha est� cheia

	bool Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item & item);			// remove item da pilha
};

// ----------------------------------
