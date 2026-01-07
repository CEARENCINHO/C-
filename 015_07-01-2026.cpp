#include <iostream>
using namespace std;

int main()
{
    int n, temp, ult = 1, penult = 0, aux;

    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> n;

    for (aux = 0; aux <= n; aux++) {
        cout << "Numero: " << ult + penult << endl;

        temp = penult;
		penult = ult;
		ult = ult + temp;
    }

    return 0;
}