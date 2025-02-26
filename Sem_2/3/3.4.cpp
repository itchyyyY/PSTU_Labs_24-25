#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	const int n = 5;

	bool is_sorted = true;

	int arr[n]{ 1, 2, 3, 7, 5 };

	for (int i = 0; i < n - 1; ++i)
	{
		if ((arr[i] <= arr[i + 1]) && (is_sorted))
		{
			is_sorted = true;
		}
		else { is_sorted = false; }
	}

	if (is_sorted) { cout << "ћассив отсортирован по возрастанию" << endl; }
	else { cout << "ћассив не отсортирован по возрастанию" << endl; }

	return 0;
}