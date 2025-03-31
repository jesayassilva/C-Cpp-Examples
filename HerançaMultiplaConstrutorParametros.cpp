#include <iostream>

 using namespace std;

 class base1 {
    protected:
              int i;
    public:
			teste(int i){
				cout << "Da base"
			}
            base1(int x) { 
		   		i = x; 
				cout << "Construindo base1\n"; 
			}
    };

 class base2 {
    protected:
              int k;
    public:
           base2(int x) { 
		   		k = x; 
				cout << "Construindo base2\n"; 
			}
    };

 class derivada: public base1, public base2 
    {
         int j;
    public:
           derivada(int x, int y, int z): base1(x), base2(y){ 
		   		j = z; 
		   		i=100;
				cout << "Construindo derivada\n"; 
			}
           void mostrar() { 
		   		cout << i << " " << k << " " << j << "\n"; 
			}
    };

 int main()
 {
    derivada ob(3, 4, 5);
    ob.mostrar(); // mostra 4 3 5       4  5 3
    return 0;
 }

