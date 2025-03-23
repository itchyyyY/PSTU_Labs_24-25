#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	/*if (low < high)
	{
		int pI = partition(arr, low, high);
		quickSort(arr, low, pI - 1);
		quickSort(arr, pI + 1, high);
	}*/

	if (low >= high) return;
	int pI = partition(arr, low, high);
	quickSort(arr, low, pI - 1);
	quickSort(arr, pI + 1, high);
}

int main()
{
	int arr[5] = { 5, 4, 3, 1, 2 };

	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << ' ';
	}
	cout << endl;

	quickSort(arr, 0, 4);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << ' ';
	}

	return 0;
}