
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "First number: ";
	int f1, sh1, p1, f, p, sh;
	f = 0;
	sh = 0;
	p = 0;
	cin >> f1 >> sh1 >> p1;

	cout << "Operation (+, -, *, /): ";
	char answer;
	cin >> answer;

	switch (answer)
	{
	case '+':
	{
		cout << "Second number: ";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		
		break;
	}
	case '-':
	{
		cout << "Second number: ";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		
		break;
	}
	case '*':
	{
		cout << "Input factor: ";
		int factor;
		cin >> factor;
		
		break;
	}
	case '/':
	{
		cout << "Input divider: ";
		int divider;
		cin >> divider;
		
		break;
	}

	default:
		cout << "Wrong choise!" << endl;
		break;
	}
	system("pause");
    return 0;
}

