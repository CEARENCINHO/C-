#include <iostream>
#include <windows.h>



using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	short int num;

	cout << "Digite uma numero: " << endl;
	cin >> num;

	(num%2) == 0 ? (cout << "Numero par"):(cout << "Numero impar");

	return 0;
}