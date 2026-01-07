#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int lin, col, num = 1,h,m;

	for (lin = 1; lin <= 4; lin++) {
		for (col = 1; col <= 4; col++) {
			cout << setw(3) << num++;
		}
		cout << endl;
	}

	cout.fill('0');
	for (int h = 0; h < 24; h++) {
		for (int m = 0; m < 60; m++) {
			for (int s = 0; s < 60; s++) {
				cout << setw(2) << h << ":";
				cout << setw(2) << m << ":";
				cout << setw(2) << s << endl;
			}
		}
	}
		

    return 0;
}