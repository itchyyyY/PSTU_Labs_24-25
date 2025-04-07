#include <iostream>
#include "Person.h"

using namespace std;

void Person::setName() 
{ 
	cin >> name; 
}
const string& Person::getName() const { return name; }
void Person::setAge()
{
	cin >> age;
}
int Person::getAge() const { return age; }