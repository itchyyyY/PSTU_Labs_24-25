#include <iostream>
#include <ctime>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	const int n = 5;
	int arr[n]{};
	int shift_arr[n]{};

	int range_min = 0, range_max = 100;

	int k;

	cout << "¬ведите k: ";

	cin >> k;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_max;
		cout << arr[i] << ' ';
	}

	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		shift_arr[(i + n - k) % n] = arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << shift_arr[i] << ' ';
	}
	cout << endl;

	return 0;
}