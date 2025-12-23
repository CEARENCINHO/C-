#include <iostream>
#include <windows.h>



using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	char operador;
	short int num1, num2;

	cout << "Primeiro numero: ";
	cin >> num1;

	cout << endl << "Operador";
	cin >> operador;

	cout << endl << "Segundo numero: ";
	cin >> num2;

	if (operador == '+') {
		cout << "Resultado " << num1 + num2;
	} 
	else if (operador == '*') {
		cout << "Resultado " << num1 * num2;
	}
	else if (operador == '/') {
		cout << "Resultado " << num1 / num2;
	}
	else if (operador == '-') {
		cout << "Resultado " << num1 - num2;
	}
	


	return 0;
}