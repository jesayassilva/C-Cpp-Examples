#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){

	//Instru��o para aceitar caracteres especiais do portugu�s
	setlocale(LC_ALL, "portuguese");

	int a, b, c;
	cout << "Digite o valor de 'a' da equa��o: ";
	cin >> a;

	cout << "Digite o valor de 'b' da equa��o: ";
	cin >> b;

	cout << "Digite o valor de 'c' da equa��o: ";
	cin >> c;

	float x = (-b + sqrt(b*b - 4 * a * c))/(2*a);

	cout << a << "�x + " << b << "x + " << c << endl;
	cout << "solu��o: " << x << endl;

	system("pause");
	return 0;
}
