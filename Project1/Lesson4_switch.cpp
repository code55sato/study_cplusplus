#include "Lesson4_switch.h"



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
			cout << "�����Z" << endl;
			cout << "�ЂƂ߂̐��������" << endl;
			cin >> x;
			cout << "�ӂ��߂̐��������" << endl;
			cin >> y;
			switchResult = x + y;
			cout << "�����Z�̓���" << endl;
			cout << switchResult << endl;
			break;
		case 2:
			cout << "�����Z" << endl;
			cout << "�ЂƂ߂̐��������" << endl;
			cin >> x;
			cout << "�ӂ��߂̐��������" << endl;
			cin >> y;
			switchResult = x - y;
			cout << "�����Z�̓���" << endl;
			cout << switchResult << endl;
			break;
		case 3:
			cout << "�����Z" << endl;
			cout << "�ЂƂ߂̐��������" << endl;
			cin >> x;
			cout << "�ӂ��߂̐��������" << endl;
			cin >> y;
			switchResult = x * y;
			cout << "�����Z�̓���" << endl;
			cout << switchResult << endl;
			break;
		case 4:

			cout << "���Z" << endl;
			cout << "�ЂƂ߂̐��������" << endl;
			cin >> x;
			cout << "�ӂ��߂̐��������" << endl;
			cin >> y;
			switchResult = x / y;
			cout << "���Z�̓���" << endl;
			cout << switchResult << endl;
			break;
		}
	}
	getchar();
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