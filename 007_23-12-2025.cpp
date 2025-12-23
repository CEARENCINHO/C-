#include <iostream>
#include <windows.h>



using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	short int idade;

	cout << "Sua idade é?" << endl;
	cin >> idade;

	if (idade >= 18) {
		cout << "Você é maior de idade!";
	} else {
		cout << "Você é menor de idade!";
	}

	return 0;
}