#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int s = 0, n;

	cout << "Введите N: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Невозможно посчитать сумму по порядку при n<=0.";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			int s1 = 1;
			for (int j = i; j <= i * 2; j++)
			{
				s1 *= j;
			}
			s += s1;
		}

		cout << s;
	}

	return 0;
}

//тоже рабочий вариант
//int main()
//{	
//	int s = 0, n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int j = i + 1;
//		int s1 = 1;
//		for (int k = 1, l=i; k <= j; k++, l++)
//		{
//			s1 *= l;
//		}
//		s += s1;
//	}
//
//	cout << s;
//
//	return 0;
//}