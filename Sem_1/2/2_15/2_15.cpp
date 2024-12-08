#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, n1, s, k;
	bool flag = false;

	cout << "Введите N и S: " << endl;
	cin >> n >> s;

	n1 = n;

	if (s >= 0 && s < 10)
	{
		while (n != 0 && !flag)
		{
			k = n % 10;
			if (k == s)
			{
				cout << "Цифра " << s << " входит в число " << n1;
				flag = true;
			}
			else
			{
				n /= 10;
			}
		}

		if (!flag)
		{
			cout << "Цифра " << s << " не входит в число " << n1;
		}
	}
	else
	{
		cout << "Некорректное значение s: " << s;
	}

	return 0;
}