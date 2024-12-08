#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, sum = 0;
	cout << "¬ведите n-e слагаемое: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0) { sum -= i; }
		else { sum += i; }
	}

	cout << "—умма равна " << sum;

	return 0;
}