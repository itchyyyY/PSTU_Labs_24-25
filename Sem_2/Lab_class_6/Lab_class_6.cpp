#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	Vector temp(5, -1);
	cout << temp;
	cin >> temp;
	cout << temp;
	Iterator it = &(temp[4]);
	it = it - 4;
	cout << *it;
	return 0;
}

//4 �������
//����� - ��������� ������ � ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//() � ����������� ������� �������;
//*����� � �������� ��� �������� ������� �� �����;
//-n � ������� ����� � �������� � ������� n(� ������� ������ - ���������).