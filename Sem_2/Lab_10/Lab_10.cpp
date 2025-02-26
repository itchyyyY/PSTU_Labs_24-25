#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

int main()
{

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 10);

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	int min = 10;
	int min_i = 0, min_j = 0;
	cout << "¬ведите размер массива: ";
	cin >> size;

	int** arr = new int* [size];
	int** res = new int* [size - 1];

	for (int i = 0; i < size; ++i)
	{
		arr[i] = new int[size];
	}

	for (int i = 0; i < size-1; ++i)
	{
		res[i] = new int[size];
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			arr[i][j] = dist(gen);
			if (arr[i][j] < min)
			{
				min = arr[i][j];
				min_i = i; min_j = j;
			}
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0, res_i = 0; i < size; ++i)
	{
		if (i == min_i) { continue; }
		for (int j = 0, res_j = 0; j < size; ++j)
		{
			if (j == min_j) { continue; }
			res[res_i][res_j] = arr[i][j];
			res_j++;
		}
		res_i++;
	}

	for (int i = 0; i < size-1; ++i)
	{
		for (int j = 0; j < size-1; ++j)
		{
			cout << res[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < size; ++i)
	{
		delete[] arr[i];
	}

	for (int i = 0; i < size-1; ++i)
	{
		delete[] res[i];
	}

	return 0;
}