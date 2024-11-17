#include <iostream>
using namespace std;

int main()
{
	unsigned int n, f = 1, * pf = &f;

	cin >> n;

	for (unsigned int i = 2; i <= n; i++)
	{
		*pf *= i;
	}

	cout << *pf;

	return 0;
}