#include <iostream>

using namespace std;

int main()
{
	const int n = 6;
	int arr[n]{ 1, 2, 3, 4, 5, 6 };
	int even = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0) { ++even; }
		cout << arr[i] << ' ';
	}
	cout << endl;

	int k = n + even;
	int k1 = k;
	int* arrk = new int[k];

	int i = 0, j = 0;

	while (k-1 >= 0)
	{
		if (arr[i] % 2 == 0)
		{
			arrk[j] = -1;
			++j;
			arrk[j] = arr[i];
			++i;
			++j;
		}
		else
		{
			arrk[j] = arr[i];
			++i;
			++j;

		}
		--k;
	}

	for (int i = 0; i < k1; ++i)
	{
		cout << arrk[i] << ' ';
	}
	cout << endl;

	return 0;
}