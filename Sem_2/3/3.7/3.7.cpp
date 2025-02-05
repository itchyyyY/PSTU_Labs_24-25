#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int n = 10;
	int arr[n]{};
	int range_min = 0, range_max = 100;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min; 
		cout << arr[i] << " ";
	}
	cout << endl;

	int min = arr[0], max = arr[0];

	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > max) { max = arr[i]; }
		else if (arr[i] < min) { min = arr[i]; }
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;
}