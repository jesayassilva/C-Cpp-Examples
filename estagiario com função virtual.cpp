#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>
#include <locale.h>

class Componente {                      
    public:                          
      virtual void exibe() const { cout << "Componente::exibe()" << endl; } 
};   
/**************/
class Botao: public Componente {       
   public:            
      void exibe() const { cout << "Botao::exibe()" << endl; }   
};
/**************/ 
class Janela: public Componente {
   public:         
      void exibe() const { cout << "Janela::exibe()" << endl; } 
}; 
/**************/ 
void manipula(const Componente &c)  
{    c.exibe(); } 
/**************/ 
int main(){
	setlocale(LC_ALL, "Portuguese");
	Botao ok;    
    Janela ajuda;   
    manipula(ok);   //objeto da classe derivada Botao
    manipula(ajuda); //objeto da classe derivada Janela
    return 0;

}


//class Estagiario: public Tra
