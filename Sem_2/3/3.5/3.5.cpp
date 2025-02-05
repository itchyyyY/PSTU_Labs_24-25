#include <iostream>

using namespace std;

int main()
{
	const int n = 5;

	int arr[n]{23, 12, 42, 1, 9};

	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}

	cout << "max = " << max << endl;

	return 0;
}