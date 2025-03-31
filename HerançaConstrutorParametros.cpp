#include <iostream>

 using namespace std;

 class base 
        {
        protected:
                  int i;
        public:
               base(int x) { 
			   		i = x; 
					cout << "Construindo base\n"; 
				}
               ~base() { 
			   		cout << "Destruindo base\n"; 
				}
        };

 class derivada: private base {
              int j;
        public:
               derivada(int x,int y):base(y) {
			   		j = x; 
					cout << "Construindo derivada\n"; 
				}// derivada usa x; y é passada em lista para a base.
               
			   ~derivada() { 
			   		cout << "Destruindo derivada\n";
				}
               
			   void mostrar() {
			   		cout << i << " " << j << "\n"; 
				}
        };


class derivada2: public derivada{
	public:
		derivada2(int x, int y): derivada(x,y){
			cout << "Construindo derivada 2\n"; 
		}
	
	void exibir(){
		cout << i << " " << j << "\n"; 
	}
};

 int main()
 {
    derivada ob(3, 4);
    ob.mostrar(); // mostra 4 3
	cout << "----------------\n"; 
	derivada2 ob2(10, 11);
	ob2.exibir();
	cout << "----------------\n"; 
    return 0;
 }
