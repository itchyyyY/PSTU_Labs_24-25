#pragma once
#include "Person.h"

using namespace std;

class Teacher : public Person
{
private:
	string subject;
	int hours;
public:
	Teacher(const string& name, const string& subject, int hours, int age) : Person(name, age), subject{ subject }, hours{ hours } {};
	~Teacher() {};
	void setSubject();
	const string& getSubject() const;
	void setHours();
	int getHours() const;
	void increaseHours();
	void decreaseHours();
};