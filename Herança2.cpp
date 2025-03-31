#include <iostream>

 using namespace std;

 class base {
    public:
        base() { 
		   	cout << "Construindo base" << endl; 
		}
        ~base() { 
			cout << "Destruindo base" << endl; 
		}
    };

 class derivada1 : public base 
    {
    public:
        derivada1() { 
		   	cout << "Construindo derivada1" << endl;
		}
        ~derivada1() {
			cout << "Destruindo derivada1" << endl; 
		}
    };

 class derivada2: public derivada1 
    {
    public:
        derivada2() {
		   	cout << "Construindo derivada2\n"; 
		}
        ~derivada2() { 
			cout << "Destruindo derivada2\n"; 
		}
    };

 int main(){
 	cout << "----------------\n";
 	base b;
 	cout << "----------------\n";
 	derivada1 d1;
 	cout << "----------------\n";
	derivada2 d2;
	cout << "----------------\n";
    return 0;
 }

