#include <iostream>
#include <complex>

using namespace std;

int sub(double a, double b) { return a - b; }

complex<double> sub(complex<double> a, complex<double> b) { return a - b; }

int main()
{
	complex<double> a1(3.0, -5.0);   
	complex<double> b1(2.1, 4.4);

	cout << sub(a1, b1) << endl;

	int a2 = 5;
	int b2 = 8;

	cout << sub(a2, b2) << endl;

	return 0;
}