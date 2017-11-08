
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, d, res1, res2;
	float result;

	cout << "First fraction: ";
	cin >> a >> b;
	if (b==0)
	{
		cout << "Division by zero! Wrong!!!" << endl;
		system("pause");
		exit(0);
	}
	cout << "Second fraction: ";
	cin >> c >> d;
	if (d == 0)
	{
		cout << "Division by zero! Wrong!!!" << endl;
		system("pause");
		exit(0);
	}

	cout << "Operation (+, -, *, /): ";
	char answer;
	cin >> answer;

	switch (answer)
	{
	case '+':
	{
		res1 = (a*d) + (b*c);
		res2 = (b*d);
		while ((res1%2==0) && (res2%2==0))
		{
			res1 /= 2;
			res2 /= 2;
		}
		while ((res1 % 3 == 0) && (res2 % 3 == 0))
		{
			res1 /= 3;
			res2 /= 3;
		}
		for (int i = 5; i < 1000; i++)
		{
			while ((res1 % i == 0) && (res2 % i == 0))
			{
				res1 /= i;
				res2 /= i;
			}
		}
		cout << "Result is " << res1 << "/" << res2 << endl;
		break;
	}
	case '-':
	{
		cout << "Result is " << (a*d) - (b*c) << "/" << (b*d) << endl;
		break;
	}
	case '*':
	{
		cout << "Result is " << (a*c) << "/" << (b*d) << endl;
		break;
	}
	case '/':
	{
		cout << "Result is " << (a*d) << "/" << (b*c) << endl;
		break;
	}

	default:
		cout << "Wrong choise!" << endl;
		break;
	}
	system("pause");
    return 0;
}

