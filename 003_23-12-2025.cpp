#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	cout << "Variável 'int' ocupa: " << sizeof(int) << " bytes." << endl;
	cout << "Variável 'float' ocupa: " << sizeof(float) << " bytes." << endl;
	cout << "Variável 'double' ocupa: " << sizeof(double) << " bytes." << endl;
	cout << "Variável 'char' ocupa: " << sizeof(char) << " bytes." << endl;
	cout << "Variável 'bool' ocupa: " << sizeof(bool) << " bytes." << endl;
	cout << "Variável 'string' ocupa: " << sizeof(string) << " bytes." << endl;

}