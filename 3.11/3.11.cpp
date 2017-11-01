
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
		f = f1 + f2;
		sh = sh1 + sh2;
		p = p1 + p2;
		if (p>=20)
		{
			sh++;
			p -= 20;
		}
		if (sh>=12)
		{
			f++;
			sh -= 12;
		}
		cout << f << ", " << sh << ", " << p << endl;
		break;
	}
	case '-':
	{
		cout << "Second number: ";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		if (f2>f1)
		{
			cout << "negative result"<<endl;
			break;
		}
		if (p2>p1)
		{
			sh1--;
			p1 += 20;
		}
		if (sh2>sh1)
		{
			f1--;
			sh1 += 12;
		}
		f = f1 - f2;
		sh = sh1 - sh2;
		p = p1 - p2;
		cout << f << ", " << sh << ", " << p << endl;
		break;
	}
	case '*':
	{
		cout << "Input factor: ";
		int factor;
		cin >> factor;
		f = f1*factor;
		sh = sh1*factor;
		p = p1*factor;
		while (p >= 20)
		{
			sh++;
			p -= 20;
		}
		while (sh >= 12)
		{
			f++;
			sh -= 12;
		}
		cout << f << ", " << sh << ", " << p << endl;
		break;
	}
	case '/':
	{
		cout << "Input divider: ";
		int divider;
		cin >> divider;
		p = (p1 + sh1 * 20 + f1 * 12 * 20) / divider;
		while (p>=20)
		{
			sh++;
			p -= 20;
		}
		while (sh >= 12)
		{
			f++;
			sh -= 12;
		}
		cout << f << ", " << sh << ", " << p << endl;
		break;
	}

	default:
		cout << "Wrong choise!" << endl;
		break;
	}
	system("pause");
    return 0;
}

