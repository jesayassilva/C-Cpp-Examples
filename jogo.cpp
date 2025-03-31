#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>


class Jogo
{private:
   string nome;                                              // nome do jogo
   float preco;                                              // preço do jogo
   int horas;                                                // quantidade de horas jogadas
   float custo;                                              // valor por hora jogada
   
   void calcular() { if (horas > 0) custo = preco/horas; }   // calcular custo da hora jogada
   
public:
   void adquirir(const string & titulo, float valor);        // preencher informações
   void atualizar(float valor);                              // atualizar preço do jogo
   void jogar(int tempo);                                    // registrar horas jogadas
   void exibir();                                            // mostrar informações
};


int main()
{	
	// variável do tipo Jogo
	Jogo gow;

	// chamando métodos 
	gow.adquirir("Gow", 160.0f);    // altera atributos do jogo
	gow.exibir();					// exibe os atributos do jogo

	gow.jogar(5);					// altera horas jogadas
	gow.exibir();					// exibe os dados

	gow.jogar(3);					// adiciona mais 3 horas jogadas
	gow.exibir();					// exibe o jogo
}



void Jogo::adquirir(const string& titulo, float valor){
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = preco;
}

void Jogo::atualizar(float valor) {
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo) {
    horas = horas + tempo;
    calcular();
}

void Jogo::exibir(){
    cout << nome << " R$" << preco << " "<< horas << "h = R$" << custo << "/h\n";
}
