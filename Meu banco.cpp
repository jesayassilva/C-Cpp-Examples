#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

#include "Banco.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Banco b1 = Banco("Banco do Brasil", 83,"Jesaias");
	b1.ver_saldo();
	b1.depositar(100);
	b1.sacar(50);
	b1.ver_saldo();
	return 0;
}
