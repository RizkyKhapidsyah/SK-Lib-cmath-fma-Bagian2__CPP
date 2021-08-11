#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double a = 5.2, b = 1.3, c = 9.7;
	double ans = fma(a, b, c);

	cout << "fma(a, b, c)= " << ans << endl;

	_getch();
	return 0;
}
