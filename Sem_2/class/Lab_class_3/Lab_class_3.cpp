#include <iostream>
#include "Pair.h"

using namespace std;

int main()
{
	Pair p1(1, 5.5);
	Pair p2;
	Pair p3(p2);

	cout << (p1 == p2) << endl;
	cout << (p1 != p2) << endl;
	cout << (p2 == p3) << endl;

	return 0;
}