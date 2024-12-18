// f(x) = 3x - 4lnx - 5 
// f'(x) = 3 - 4/x
// f''(x) = 4/x^2
// [2;4]

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	// f(b) * f''(b) > 0 => x0 = b;

	double eps = 1e-5;
	double x, xPrev;
	x = 4;
	xPrev = 0;

	while (abs(x - xPrev) > eps)
	{
		xPrev = x;
		x = xPrev - ((3 * xPrev - 4 * log(xPrev) - 5) 
			/ (3 - 4 / xPrev));
	}

	cout << "Корень: " << x << endl;

	return 0;
}