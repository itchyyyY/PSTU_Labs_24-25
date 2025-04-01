#include <iostream>
#include "ATM.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	ATM ATM0(0, 100, 1'000'000);
	ATM ATM1(ATM0);

	ATM1.setID(1);
	ATM1.setMaxSum(1'000'000'000);

	ATM0.showInfo();
	ATM1.showInfo();

	return 0;
}