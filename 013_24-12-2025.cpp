#include <iostream>
using namespace std;

int main()
{
    int num = 0, num1, op;

    do {
        cout << "Digite um numero de 0 a 10" << endl;
        cin >> num1;

        if (num1 <= 10 && num1 >= 0){
            while (num < 10){
                cout << num << " * " << num1 << " = " << num1 * num << endl;
                ++num;
            }
        }
        cout << "Valor invalido, quer digita certo?\n   1 - Sim\n   2 - Nao" << endl;
        cin >> op;
    } while (op != 2);

    return 0;
}