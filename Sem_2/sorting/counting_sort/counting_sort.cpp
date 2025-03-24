#include <iostream>

using namespace std;

void countingSort(int arr[], int size)
{
	int* output = new int[size];

	int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}

	int* count = new int[max + 1];

	for (int i = 0; i <= max; ++i) { count[i] = 0; }

	for (int i = 0; i < size; i++) { count[arr[i]]++; }

	for (int i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}

	for (int i = size-1; i >=0; i--)
	{
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}

	for (int i = 0; i < size; i++) { arr[i] = output[i]; }

	delete[] count;
	delete[] output;
}

int main()
{
	int arr[10] = { 0, 1, 6, 6, 5, 1, 5, 2, 2, 7 };

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	countingSort(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	return 0;
}