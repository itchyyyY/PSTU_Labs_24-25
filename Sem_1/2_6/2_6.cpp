#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "¬ведите N: ";
	cin >> n;

	if (n > 2)
	{
		int spaces = 0;
		int stars = n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= spaces; j++)
			{
				cout << "  ";
			}
			for (int j = 1; j<=stars; j++)
			{
				cout << "* ";
			}
			spaces++;
			stars--;
			cout << endl;
		}
	}
	else
	{
		cout << "N - натуральное число больше 2.";
	}

	return 0;
}