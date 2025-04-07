#pragma once

using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person(const string& name, int age) : name{ name }, age{ age } {};
	~Person() {};
	void setName();
	const string& getName() const;
	void setAge();
	int getAge() const;
};