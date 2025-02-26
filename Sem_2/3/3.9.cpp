#include <iostream>

using namespace std;

int main()
{
	const int n = 6;
	int arr[n]{ 123, 312, 1, 12, 4, 1 };
	int not_even = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0) { ++not_even; }
		cout << arr[i] << ' ';
	}
	cout << endl;

	int* arrk = new int[not_even];

	for (int i = 0, j = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0) {
			arrk[j] = arr[i];
			++j;
		}
	}

	for (int i = 0; i < not_even; ++i)
	{
		cout << arrk[i] << ' ';
	}
	cout << endl;

	return 0;
}