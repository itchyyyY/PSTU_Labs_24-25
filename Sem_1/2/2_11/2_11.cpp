#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, tmp;
	bool firstPlus = false;
	bool firstMinus = false;

	cout << "Введите длину последовательности: ";
	cin >> n;

	for (int i = 1; i <= n ; i++)
	{
		cin >> tmp;
		if (!firstPlus && !firstMinus)
		{
			if (tmp > 0) { firstPlus = true; }
			else if (tmp < 0) { firstMinus = true; }
		}
	}

	if (firstPlus) { cout << "Первое число было положительным."; }
	else if(firstMinus) { cout << "Первое число было отрицательным."; }
	else { cout << "Последовательность состоит из нулей."; }

	return 0;
}