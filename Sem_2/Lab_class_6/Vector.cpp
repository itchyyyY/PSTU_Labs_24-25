#include "Vector.h"

Vector::Vector(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; ++i) { data[i] = k; }
}
Vector::Vector(const Vector& vec)
{
	size = vec.size;
	data = new int[size];
	for (int i = 0; i < size; ++i) { data[i] = vec.data[i]; }
}
Vector::~Vector()
{
	delete[] data;
	data = nullptr;
}
Vector& Vector::operator = (const Vector& vec)
{
	if (this == &vec) return *this;
	size = vec.size;
	if (data != nullptr) delete[] data;
	data = new int[size];
	for (int i = 0; i < size; ++i) { data[i] = vec.data[i]; }
	return *this;
}
int& Vector::operator[](int index)
{
	if (index < size && index >= 0) { return data[index]; }
	throw std::out_of_range("Index out of range !");
}
Vector& Vector::operator * (const int k)
{
	for (int i = 0; i < size; ++i) { data[i] *= k; }
	return *this;
}
int Vector::operator()() const
{
	return size;
}
ostream& operator<<(ostream& out, const Vector& vec)
{
	for (int i = 0; i < vec(); i++)
	{
		out << vec.data[i] << ' ';
	}
	out << endl;
	return out;
}
istream& operator>>(istream& in, const Vector& vec)
{
	for (int i = 0; i < vec(); i++)
	{
		in >> vec.data[i];
	}
	return in;
}