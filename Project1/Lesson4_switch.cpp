#include "Lesson4_switch.h"
#include "Lesson5_error.h"



Lesson4_switch::Lesson4_switch()
{
}


Lesson4_switch::~Lesson4_switch()
{
}

void Lesson4_switch::calc()
{
	int x;
	int y;
	if (Lesson4_switch::calcCheckOpe() == true) {
		switch (ope)
		{
		case 1:
			cout << ja_PlusStr << endl;
			inputNum_1_2(x, y);
			switchResult = x + y;
			cout << ja_PlusStr;
			break;
		case 2:
			cout << ja_MinusStr << endl;
			inputNum_1_2(x, y);
			switchResult = x - y;
			cout << ja_MinusStr;
			break;
		case 3:
			cout << ja_MultiplyStr << endl;
			inputNum_1_2(x, y);
			switchResult = x * y;
			cout << ja_MultiplyStr;
			break;
		case 4:
			cout << ja_DividStr << endl;
			inputNum_1_2(x, y);
			if (x == 0 || y == 0)
			{
				Lesson5_error ls5;
				ls5.Lesson5_error::Lesson5_error();
			}else{
			switchResult = x / y;
			cout << ja_DividStr;
			}
			break;
		}
		cout << "�̓���" << endl;
		getchar();
		cout << switchResult << endl;
		getchar();

	}
	
}

void Lesson4_switch::inputNum_1_2(int &x, int &y)
{
	cout << "�ЂƂ߂̐��������" << endl;
	cin >> x;
	cout << "�ӂ��߂̐��������" << endl;
	cin >> y;
}

bool Lesson4_switch::calcCheckOpe()
{
	cout << "���s����v�Z��I��\n1:�����Z�@2:�����Z�@3:�����Z�@4:����Z" << endl;
	cin >> ope;
	if (ope == 1 || ope == 2 || ope == 3 || ope == 4)
	{
		return true;
	}
	else
	{
		cout << "�I�y�����h���s���ł�" << endl;
		return false;
	}
	
}