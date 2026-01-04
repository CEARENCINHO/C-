#include <iostream>
using namespace std;

int main()
{
    int produto = 1, aux, n;

	cout << "Digite um numero: " << endl;
	cin >> n;
	
	for (aux = 1; aux <= n; aux++){
		produto *= aux;
	}

	cout << "O fatorial de " << n << " e: " << produto << endl;

    return 0;
}