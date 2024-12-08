#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, d; 
	cout << "¬ведите сторону куба: ";
	cin >> n; 
	d = n / 2; 

	for (int i = 0; i < d; i++)
	{
		cout << ' ';
	}
	for (int i = 0; i < n; i++) 
	{ 
		cout << "* "; 
	} 
	cout << endl;

	for (int i = 0; i < d-1; i++)
	{
		for (int j = 1; j < d - i; j++) {
			cout << ' ';
		}
		cout << "* ";
		for (int j = 0; j < n-2; j++)
		{
			cout << "  ";
		}
		cout << '*';
		for (int j = 0; j < i; j++)
		{
			cout << ' ';
		}
		cout << '*' << endl;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	for (int i = 0; i < d-2; i++)
	{
		cout << ' ';
	}
	cout << '*' << endl;

	for (int i = 0; i < n-d-1; i++)
	{
		cout << "* ";
		for (int i = 0; i < n-2; i++)
		{
			cout << "  ";
		}
		cout << "* ";
		for (int i = 0; i < d-2; i++)
		{
			cout << " ";
		}
		cout << '*' << endl;
	}

	for (int i = 0; i < d - 1; i++)
	{
		cout << "* ";
		for (int j = 0; j < n - 2; j++)
		{
			cout << "  ";
		}
		cout << '*';
		for (int j = 1; j < d-i-1; j++)
		{
			cout << " ";
		}
		cout << '*' << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << "* ";
	}
	cout << endl;

	return 0;
}