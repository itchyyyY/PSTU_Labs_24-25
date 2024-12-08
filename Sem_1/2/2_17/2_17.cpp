#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	float x, fact = 1, sum;

	cout << "¬ведите n и x:" << endl;
	cin >> n >> x;

	sum = 1 + x;

	for (int i = 2; i <= n; i++)
	{
		fact *= i;
		sum += (pow(x, i) / fact);
	}

	cout << "«начение многочлена равно " << sum << endl;

	return 0;
}