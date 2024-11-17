#include <iostream>
using namespace std;

int main()
{
	int a, b, tmp, * pa = &a, * pb = &b;

	cin >> *pa >> *pb;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return 0;
}