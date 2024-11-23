#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;

	cout << "¬ведите N: ";
	cin >> n;

	if ((n % 2 == 0) || (n <= 3))
	{
		cout << "N Ч натуральное нечетное число больше 3.";
	}
	else
	{
		int spaces = n / 2;
		int stars = 1;
		int h = (n / 2) + 1;

		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= spaces; j++)
			{
				cout << ' ';
			}

			spaces--;

			for (int j = 1; j <= stars; j++)
			{
				cout << '*';
			}

			stars += 2;

			cout << endl;
		}
	}
	
	return 0;
}