#include <iostream>
#include <ctime>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int n = 5;

	int arr[n]{};

	int max, count = 0;
	int range_min = 0, range_max = 100;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << arr[i] << ' ';
	}

	cout << endl;
	max = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > max) 
		{ 
			max = arr[i]; 
			count = 1; 
		}
		else if (arr[i] == max) { count++; }
	}

	cout << "Max: " << max << endl; 
	cout << "Количество элементов с этим значением: " << count << endl;

	return 0;
}