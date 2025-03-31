#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){

	//Instrução para aceitar caracteres especiais do português
	setlocale(LC_ALL, "portuguese");

	int a, b, c;
	cout << "Digite o valor de 'a' da equação: ";
	cin >> a;

	cout << "Digite o valor de 'b' da equação: ";
	cin >> b;

	cout << "Digite o valor de 'c' da equação: ";
	cin >> c;

	float x = (-b + sqrt(b*b - 4 * a * c))/(2*a);

	cout << a << "²x + " << b << "x + " << c << endl;
	cout << "solução: " << x << endl;

	system("pause");
	return 0;
}
