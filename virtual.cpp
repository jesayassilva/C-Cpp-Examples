#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

class Componente {                      
    public:                          
      virtual void exibe() const { cout << "Componente::exibe()" << endl; } 
};  
/*********/
class Botao: public Componente {       
   public: virtual void exibe() const { cout << "Botao::exibe()" << endl; }   
}; 
/*********/
class Janela: public Componente {    
   public: virtual void exibe() const { cout << "Janela::exibe()" << endl;}
};
/*********/
void manipula(const Componente &c)  
{    c.exibe(); } 
/**************/ 
int main()  
{   Botao ok;    
    Janela ajuda;   
    manipula(ok);   //objeto da classe derivada Botao   (Mesmo sendo BOTÃO chama o exibir de COMPONENTE)
    manipula(ajuda); //objeto da classe derivada Janela (Mesmo sendo JANELA chama o exibir de COMPONENTE)
    cout << "FIM";
	return 0;
    
} 
