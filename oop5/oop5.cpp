#include "func.h"

int main() {
	double n;
	double m;
	double a = 4.8;
	double b = -7.9;
	n = func_for_n(a, b);
	m = func_for_m(a, b, n);

	cout << "n = " << n << endl;
	cout << "m = " << m;
	return 0;
}