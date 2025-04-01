#pragma once

class fraction
{
private:
	int first;
	double second;
public:
	fraction() : first(0), second(.0) {};
	fraction(int first, double second);
	void Read();
	void Show();
	double multiply(int k);
};