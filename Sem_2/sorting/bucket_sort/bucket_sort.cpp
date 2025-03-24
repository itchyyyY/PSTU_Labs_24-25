#include <iostream>

using namespace std;

const int BUCKET_NUM = 10; 
const int BUCKET_SIZE = 10;

void bucketSort(int arr[], int n)
{
	int buckets[BUCKET_NUM][BUCKET_SIZE];
	int bucketSizes[BUCKET_NUM] = { 0 };

	for (int i = 0; i < n; i++)
	{
		int bucketIndex = arr[i] / BUCKET_NUM;
		buckets[bucketIndex][bucketSizes[bucketIndex]] = arr[i];
		bucketSizes[bucketIndex]++;
	}

	for (int i = 0; i < BUCKET_NUM; i++)
	{
		for (int j = 0; j < bucketSizes[i]; j++) 
		{
			int tmp = buckets[i][j];
			int k = j - 1;
			while (k >= 0 && buckets[i][k] > tmp)
			{
				buckets[i][k + 1] = buckets[i][k];
				k--;
			}
			buckets[i][k + 1] = tmp;
		}
	}

	int idx = 0;

	for (int i = 0; i < BUCKET_NUM; i++)
	{
		for (int j = 0; j < bucketSizes[i]; j++)
		{
			arr[idx] = buckets[i][j];
			idx++;
		}
	}
}

int main()
{
	int arr[10] = { 2, 1, 5, 7, 9, 2, 3, 7, 9, 99 };

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	bucketSort(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}