#include <iostream>
using namespace std;

int main()
{
	int n, tmp, min, max, * ptr = &tmp;

	cin >> n >> *ptr;

	min = *ptr;
	max = *ptr;

	for (int i = 2; i <= n; i++)
	{
		cin >> *ptr;
		if (*ptr > max) { max = *ptr; }
		else if (*ptr < min) { min = *ptr; }
	}

	cout << "max = " << max << '\n' << "min = " << min;

	return 0;
}