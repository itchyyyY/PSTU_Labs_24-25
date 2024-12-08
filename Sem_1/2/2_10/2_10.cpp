#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, tmp, max;

	cout << "Введите длину последовательности: ";
	cin >> n;

	cout << "Введите первое число: ";
	cin >> max; 

	for (int i = 2; i <= n; i++)
	{
		cout << "Введите следующее число: ";
		cin >> tmp;
		if (tmp > max) { max = tmp; }
	}

	cout << "Максимальный элемент: " << max << endl;

	return 0;
}