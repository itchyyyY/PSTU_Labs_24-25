#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, side;
	cout << "Введите N: ";
	cin >> n;

	side = sqrt(n);

	if ((pow(side, 2) == n) && (n != 0) && (n != 1))
	{
		for (int i = 1; i <= side; i++)
		{
			for (int j = 1; j <= side; j++)
			{
				cout << "* ";
			}

			cout << endl;
		}
	}
	else
	{
		cout << "Такого квадрата не существует !";
	}
	return 0;
}