#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>


class Tempo{
private:
   int horas;                              // quantidade de horas
   int minutos;                            // quantidade de minutos
public:
   Tempo();                                // construtor padrão   
   Tempo(int h, int m = 0);                // construtor com horas e minutos   
   void  Adicionar(int h, int m);          // adiciona horas e minutos
   void  Resetar(int h = 0, int m = 0);    // modifica tempo armazenado
   //Tempo Somar(const Tempo & t) const;     // retorna soma dos tempos 
   Tempo operator+(const Tempo & t) const;
   friend Tempo operator+(int num, const Tempo & t);
   friend ostream & operator<<(ostream & os, const Tempo & t);
   void  Exibir() const;                   // exibe tempo na tela

};


//Tempo operator+(int num, const Tempo & t);

Tempo operator+(int num, const Tempo & t)
{   
	Tempo soma;
	soma.horas = num + t.horas; 
    soma.minutos = t.minutos;    
    return soma;
}

int main(){
    Tempo projetando;
    Tempo codificando(2, 40);
    Tempo corrigindo(5, 55);
    Tempo total;
    Tempo total2;

    cout << "Tempo projetando = ";
    projetando.Exibir();
    cout << endl;
    cout << "Tempo codificando = ";
    codificando.Exibir();
    cout << endl;

    cout << "Tempo corrigindo = ";
    corrigindo.Exibir();
    cout << endl;

    //total = codificando.Somar(corrigindo);
    //total = codificando + corrigindo;
    total = 2 + corrigindo;
    cout << "Tempo Total = ";
    total.Exibir();
    cout << endl;
    
    total2 = corrigindo + corrigindo;
	cout << "Tempo da viagem: "  << total2 << endl;           
    
    return 0;
}



Tempo::Tempo(){
    horas = 0;
	minutos = 0;
}

Tempo::Tempo(int h, int m){
    horas = h;
	minutos = m;
}

void Tempo::Adicionar(int h, int m){
    horas += h;
	minutos += m;   // minutos excedentes viram horas    
	horas += minutos / 60;
    minutos %= 60;
}

void Tempo::Resetar(int h, int m){
    horas = h;
	minutos = m;
}

    


void Tempo::Exibir() const{
    cout << horas << " horas, " << minutos << " minutos";
}


//Tempo Tempo::Somar(const Tempo & t) const {
Tempo Tempo::operator+ (const Tempo & t) const {
    Tempo soma;
    soma.horas = horas + t.horas;
	soma.minutos = minutos + t.minutos;  // minutos excedentes viram horas    
	soma.horas = soma.horas + soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}



ostream & operator<<(ostream & os, const Tempo & t){
	os << t.horas << " horas, " << t.minutos << " minutos";
	return os;
}





