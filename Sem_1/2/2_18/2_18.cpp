#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, c = 0, r = 0;
	cout << "Введите число: ";
	cin >> n;

	while (n != 0)
	{
		r = r * 10 + n % 10;
		n /= 10;
		c++;
	}
	
	cout  << "Перевёрнутое число = " << setw(c) << setfill('0') << r;

	return 0;
}