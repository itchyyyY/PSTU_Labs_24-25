// f(x) = 3x - 4lnx - 5 
// f'(x) = 3 - 4/x
// [2, 4]
// r = 2 
// -1/r < λ < 0, если f'(x) > 0
// λ = -0.05

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	double eps = 1e-5;
	double lambda = -0.05;
	double x, xPrev;
	x = 4;
	xPrev = 0;

	while (abs(x - xPrev) > eps)
	{
		xPrev = x;
		x = xPrev + lambda * (3 * xPrev - 4 * log(xPrev) - 5);
	}

	cout << "Корень: " << x << endl;

	return 0;
}