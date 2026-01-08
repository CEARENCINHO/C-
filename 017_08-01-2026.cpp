#include <iostream>

using namespace std;

int menu() {

	int opcao;

	while (true) {
		cout << endl << "0 - Sair" << endl;
		cout << "1 - Soma" << endl;
		cout << "2 - Subtração" << endl;
		cout << "3 - Multiplicação" << endl;
		cout << "4 - Divisão" << endl;
		cin >> opcao;

		if (opcao < 0 || opcao > 4) {
			cout << "opcao invalidada" << endl;
		}
		else {
			break;
		}
	}
	

	return opcao;
	
}

float soma(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}
float mult(float a, float b) {
	return a * b;
}
float div(float a, float b) {
	if (b != 0) {
		return a / b;
	}
	else {
		cout << "B não pode ser 0!" << endl;
	}
}
int main(){
	
	int op;
	float a, b;
	

	do {
		op = menu();

		if (op) {
			cout << "Numero A: ";
			cin >> a;
			cout << endl << "Numero B:";
			cin >> b;

			switch (op)
			{
			case 1:
				cout << "Resultado: " << soma(a, b);
				break;
			case 2:
				cout << "Resultado: " << sub(a, b);
				break;
			case 3:
				cout << "Resultado: " << mult(a, b);
				break;
			case 4:
				cout << "Resultado: " << div(a, b);
				break;
			}
		}
		else {
			cout << "Saindo...";
		}
		
		
	} while (op != 0);
	
	

    return 0;
}