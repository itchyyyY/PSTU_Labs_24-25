#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, n1, sum = 0;
	cout << "Введите число: ";
	cin >> n;
	n1 = n;

	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}

	cout << "Сумма цифр числа " << n1 << " равна " << sum;

	return 0;
}