#include <iostream>
#include <clocale>

using namespace std;

void fill_visual(int n, int** visual)
{
	for (int i = 0; i < n; ++i)
	{
		visual[i] = new int[3];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0) { visual[i][j] = i + 1; }
			else { visual[i][j] = 0; }
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << visual[i][j] << ' ';
		}
		cout << endl;
	}
}

void print_hanoi(int n, int n1, int start, int finish, int** visual)
{
	for (int i = 0; i < n1; i++)
	{
		if (visual[i][start - 1] == n)
		{
			visual[i][start - 1] = 0;
			break;
		}
	}

	for (int i = n1 - 1; i >= 0; i--)
	{
		if (visual[i][finish - 1] == 0)
		{
			visual[i][finish - 1] = n;
			break;
		}
	}

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << visual[i][j] << ' ';
		}
		cout << endl;
	}
}

void hanoi(int n, int n1, int start, int finish, int** visual)
{
	if (n == 1)
	{
		cout << "Перекладываем кольцо " << n << " со стержня под номером " << start << " на стержень под номером " << finish << endl;

		print_hanoi(n, n1, start, finish, visual);

		return;
	}
	else
	{
		int tmp = 6 - start - finish;
		hanoi(n - 1, n1, start, tmp, visual);
		cout << "Перекладываем кольцо " << n << " со стержня под номером " << start << " на стержень под номером " << finish << endl;
		
		print_hanoi(n, n1, start, finish, visual);

		hanoi(n - 1, n1, tmp, finish, visual);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	int n, n1;
	cout << "Введите количество колец: ";
	cin >> n;
	n1 = n;

	int** visual = new int* [n];

	fill_visual(n, visual);
	hanoi(n, n1, 1, 3, visual);

	delete[] visual;
	return 0;
}