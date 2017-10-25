// 3.11.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите первую сумму: ";
	int f1, sh1, p1;
	cin >> f1 >> sh1 >> p1;

	cout << "Введите желаемую операцию (+, -, *, /): ";
	char answer;
	cin >> answer;

	switch (answer)
	{
	case '+':
	{
		cout << "Введите второе число";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '-':
	{
		cout << "Введите второе число";
		int f2, sh2, p2;
		cin >> f2 >> sh2 >> p2;
		break;
	}
	case '*':
	{
		cout << "Введите множитель";
		int factor;
		cin >> factor;
		break;
	}
	case '/':
	{
		cout << "Введите делитель";
		int divider;
		cin >> divider;
		break;
	}

	default:
		cout << "Неверный формат операции" << endl;
		break;
	}

	system("pause");
    return 0;
}

