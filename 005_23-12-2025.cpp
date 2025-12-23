#include <iostream>
#include <windows.h>


using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	float num1, num2, sum;

	cout << "Primeiro numero: " << endl;
	cin >> num1;

	cout << "Segundo numero: " << endl;
	cin >> num2;

	sum = num1 + num2;
	cout << "A soma dos dois é: " << sum << endl;

	return 0;
}