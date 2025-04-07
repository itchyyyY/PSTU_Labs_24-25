#include <iostream>
#include "Teacher.h"

using namespace std;

void Teacher::setSubject()
{
	cin >> subject;
}
const string& Teacher::getSubject() const
{
	return subject;
}
void Teacher::setHours()
{
	cin >> hours;
}
int Teacher::getHours() const
{
	return hours;
}
void Teacher::increaseHours()
{
	++hours;
}
void Teacher::decreaseHours()
{
	--hours;
}