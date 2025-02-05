#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int arr[n]{ 43, 1, 2, 53, 9 };
	int min_indx, tmp;

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < n-1; ++i)
	{
		min_indx = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[min_indx])
			{
				min_indx = j;
			}
		}
		tmp = arr[min_indx];
		arr[min_indx] = arr[i];
		arr[i] = tmp;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	return 0;
}