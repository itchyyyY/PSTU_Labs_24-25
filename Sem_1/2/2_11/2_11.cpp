#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, tmp;
	bool firstPlus = false;
	bool firstMinus = false;

	cout << "¬ведите количество чисел в последовательности: ";
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

	if (firstPlus) { cout << "ѕервое число было положительным."; }
	else if(firstMinus) { cout << "ѕервое число было отрицательным."; }
	else { cout << "ѕоследовательность состоит из нулей."; }

	return 0;
}