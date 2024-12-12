// f(x) = 3x - 4lnx - 5
// [2;4]

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	double a, b, c;
	double fA, fB, fC;
	//double eps = 0.00000001;
	double eps = 1e-5;

	a = 2;
	b = 4;

	while (b - a > eps)
	{
		c = (a + b) / 2;
		fA = 3 * a - 4 * log(a) - 5;
		fB = 3 * b - 4 * log(b) - 5;
		fC = 3 * c - 4 * log(c) - 5;

		if (fA * fC < 0) { b = c; }
		else if (fC * fB < 0) { a = c; }
		else { cout << "Что-то пошло не так !" << endl; }
	}

	cout << "Корни: " << a << ", " << b << endl;

	return 0;
}