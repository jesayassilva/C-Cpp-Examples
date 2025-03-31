#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

int fatorial(int a){
	int resultado  = 1;
	for(int i =1; i<=a;i++){
		resultado = resultado * i;
	}
	return resultado;
}

int main(int argc, char** argv) {
	cout << fatorial(3) << endl;
	

}



