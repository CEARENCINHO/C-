#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int m = 5, x = 2, c = 3, y = m * x + c;
	cout << y << endl;

	return 0;

}