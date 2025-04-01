#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int k;
	cout << "¬ведите k: ";
	cin >> k;

	fraction f;
	f.Read();
	f.Show();

	cout << "f.multuply = " << f.multiply(k);

	return 0;
}