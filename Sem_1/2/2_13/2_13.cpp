#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float a, b, c, sqrtD, x1, x2;

	cout << "Введите коэффициенты a, b, c: ";
	cin >> a >> b >> c;

	sqrtD = sqrt(b * b - 4 * a * c);

	if (sqrtD > 0)
	{
		x1 = (- b + sqrtD) / (2 * a);
		x2 = (- b - sqrtD) / (2 * a);

		cout << "x1 = " << x1 << endl << "x2 = " << x2;
	}
	else if (sqrtD == 0) 
	{ 
		x1 = -b / 2 * a; 
		cout << "x1 = x2 = " << x1;
	}
	else
	{
		cout << "Корней нет.";
	}

	return 0;
}