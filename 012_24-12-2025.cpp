#include <iostream>

using namespace std;

int main() {

	int num = 0, num1;

	cout << "Digite um numero entre 1 a 10: ";
	cin >> num1;

	if (num1 <= 10 && num1 >= 0) {

		while (num <= 10){
			cout << num << " * " << num1 << " = " << num * num1 << endl;
			++num;
		}
	}
	else {
		cout << "Valor invalido";
	}
	
	return 0;
}