#pragma once

const int evNothing = 0; 
const int evMessage = 100; 
const int cmMake = 1; //������� ������(������ ������� : m ���������� ��������� ������).
const int cmAdd = 2; //�������� ������� � ������(������ ������� : +)
const int cmDel = 3; //������� ������� �� ������(������ ������� - )
const int cmShow = 4; //������� ���������� �� ��������� ������(������ ������� : s)
const int cmGetName = 5; //������� ���������� �� ����� �������� � ������� k(������ ������� : z k, ��� k � ����� �����)
const int cmQuit = 101; //����� ������(������ ������� : q)

struct TEvent
{
	int what;
	union
	{
		int command;
		struct
		{
			int message;
			int a;
		};
	};
};