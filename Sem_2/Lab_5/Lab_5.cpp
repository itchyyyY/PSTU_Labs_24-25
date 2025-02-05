#include <iostream>
#include <random>
#include <clocale>

using namespace std;

void func(int** matrix, int n)
{
	int product = 1;
	bool c;

	for (int k = 0; k < n; ++k)
	{
		if ((matrix[0][k] != matrix[0][0]) && (matrix[0][k] != matrix[0][n - 1]))
		{
			c = false;
			if ((matrix[0][k] > matrix[0][0]) && (matrix[0][k] > matrix[0][n - 1]))
			{
				c = true;
			}
			for (int i = 1; i < n; i++)
			{
				if ((matrix[0][k] > matrix[i][i]) && (matrix[0][k] > matrix[i][n - i - 1]) && c)
				{
					c = true;
				}
				else { c = false; }
			}
			if (c)
			{
				for (int i = 0; i < n; i++)
				{
					product *= matrix[i][k];
				}
				cout << "Произведение столбца " << k + 1 << " равна " << product << endl;
				product = 1;
			}
		}
	}

	delete[] matrix;
}

int main()
{
	setlocale(LC_ALL, "ru");

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 100);

	int n;
	cout << "Введите N: ";
	cin >> n;

	int** matrix = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		matrix[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			matrix[i][j] = dist(gen);
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	func(matrix, n);

	return 0;
}