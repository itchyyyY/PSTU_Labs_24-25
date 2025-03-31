#include <iostream>
#include "Pair.h"

using namespace std;

bool Pair::operator==(const Pair& op) const
{
	return ((this->first == op.first) && (this->second == op.second));
}

bool Pair::operator!=(const Pair& op) const
{
	return ((this->first != op.first) && (this->second != op.second));
}

Pair& Pair::operator-(const int num)
{
	first -= num;
	return *this;
}

Pair& Pair::operator-(const double num)
{
	second -= num;
	return *this;
}