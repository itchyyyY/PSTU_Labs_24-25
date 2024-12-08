#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float n, a, max;
	int i = 2, num = 1;

	cout << "Введите n: ";
	cin >> n;

	max = sin(n + 1 / n);

	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			num = i;
		}
		i++;
	}

	cout << "Максимальный элемент под номером " << num << " равен " << max;

	return 0;
}