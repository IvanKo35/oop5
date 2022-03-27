#include "func.h"
#include <iostream>
#include <math.h>
using namespace std;

double func_for_m(double a, double b, double n)
{
	if (n < b) {
		return ((n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n)));
	}
	else if (n == b) {
		return pow(b, 2) + tan(n * a);
	}
	else {
		return pow(b, 3) + n * pow(a, 2);
	}
}

double func_for_n(double a, double b)
{
	if (a >= b) {
		return pow(a - b, 1/3);
	}
	else {
		return pow(a, 2) + (a - b) / sin(a * b);
	}
}
