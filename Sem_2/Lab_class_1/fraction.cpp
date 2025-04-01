#include <iostream>
#include "fraction.h"

using namespace std;

fraction::fraction(int first, double second)
{
	if (first >= 0 && second >= 0 && second < 1) { this->first = first; this->second = second; }
	else cout << "Некорректные данные !" << endl;
}

void fraction::Read()
{
	int first; 
	double second;
	
	cout << "Введите first: ";
	cin >> first;

	cout << "Введите second: ";
	cin >> second;

	if (first >= 0 && second >= 0 && second < 1) { this->first = first; this->second = second; }
	else cout << "Некорректные данные";
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