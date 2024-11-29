#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, sum = 0;

	cout << "Введите N: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Невозможно посчитать сумму натуральных чисел при n <= 0";
	}
	else 
	{
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}

		cout << sum;
	}

	return 0;
}