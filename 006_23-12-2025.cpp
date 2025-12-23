#include <iostream>
#include <windows.h>



using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	double raio, pi = 3.14, c;

	cout << "Qual é o tamanho do raio?" << endl;
	cin >> raio;

	c = 2 * raio * pi;
	cout << "A circunferencia é de " << c << endl;

	return 0;
}