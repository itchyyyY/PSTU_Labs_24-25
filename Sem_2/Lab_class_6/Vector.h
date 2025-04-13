#include <iostream>
#pragma once

using namespace std;

class Vector
{
private:
	int size;
	int* data;
public:
	Vector(int s, int k = 0);
	Vector(const Vector&);
	~Vector();
	Vector& operator = (const Vector&);
	int& operator[](int index);
	Vector& operator * (const int k);
	int operator()() const;
	friend ostream& operator<<(ostream& out, const Vector&);
	friend istream& operator>>(istream& in, const Vector&);
};

class Iterator
{
public:
	Iterator() { elem = nullptr; }
	Iterator(int* it) { elem = it; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator==(const Iterator& it) { return elem == it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; }
	void operator++() { ++elem; }
	void operator--() { --elem; }
	int& operator*() const { return *elem; }
	Iterator operator-(int n) const { return Iterator(elem - n); }
	Iterator operator+(int n) const { return Iterator(elem + n); }
	friend class Vector;
private:
	int* elem;
};