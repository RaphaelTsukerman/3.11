// 3.11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "������� ������ �����: ";
	int f1, sh1, p1;
	cin >> f1 >> sh1 >> p1;

	cout << "������� �������� �������� (+, -, *, /): ";
	char answer;
	cin >> answer;

	switch (answer)
	{
	case '+':
	{
		cout << "������� ������ �����";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '-':
	{
		cout << "������� ������ �����";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '*':
	{
		cout << "������� ���������";
		int factor;
		cin >> factor;
		break;
	}
	case '/':
	{
		cout << "������� ��������";
		int divider;
		cin >> divider;
		break;
	}

	default:
		cout << "�������� ������ ��������" << endl;
		break;
	}

	system("pause");
    return 0;
}

