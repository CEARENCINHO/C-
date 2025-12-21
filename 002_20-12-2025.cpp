#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int idade = 20;
	cout << "Eu tenho " << idade << " anos." << endl;

	float nota = 9.5;
	cout << "Minha tirei " << nota << " na prova de programção" << endl;

	char letra = 'c';
	cout << "A terceira letra do alfabeto é" << letra << endl;

	string nome = "John";
	cout << "Meu nome é " << nome << endl;

	bool verdade = true;
	cout << "Verdade que passei raspando em calculo 1? " << verdade << endl;

	return 0;

}