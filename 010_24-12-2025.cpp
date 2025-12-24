#include <iostream>
#include <windows.h>



using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	short int day;

	cout << "Digite um dia da semana: " << endl;
	cin >> day;

	switch (day) {
		case 1:
			cout << "Segunda - feira" << endl;
			break;
		case 2:
			cout << "Terça-feira" << endl;
			break;
		case 3:
			cout << "Quarta-feira" << endl;
			break;
		case 4:
			cout << "Quinta-feira" << endl;
			break;
		case 5:
			cout << "Sexta-feira" << endl;
			break;
		case 6:
			cout << "Sabado" << endl;
			break;
		case 7:
			cout << "Domingo" << endl;
			break;
		default:
			cout << "Valor invalido" << endl;
			break;
	}

	return 0;
}