#include <iostream>
#include "fraction.h"

using namespace std;

fraction::fraction(int first, double second)
{
	if (first >= 0 && second >= 0 && second < 1) { this->first = first; this->second = second; }
	else cout << "������������ ������ !" << endl;
}

void fraction::Read()
{
	int first; 
	double second;
	
	cout << "������� first: ";
	cin >> first;

	cout << "������� second: ";
	cin >> second;

	if (first >= 0 && second >= 0 && second < 1) { this->first = first; this->second = second; }
	else cout << "������������ ������";
}

void fraction::Show()
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

double fraction::multiply(int k)
{
	return k * (first + second);
}