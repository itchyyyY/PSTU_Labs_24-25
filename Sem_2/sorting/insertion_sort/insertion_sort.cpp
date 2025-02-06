#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int arr[n]{ 5, 4, 3, 2, 1 };

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	int key;

	for (int i = 1; i < n; ++i)
	{
		key = arr[i];
		for (int j = i - 1; (j > -1)&&(arr[j] > key); --j)
		{
			arr[j + 1] = arr[j];
			arr[j] = key;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	return 0;
}