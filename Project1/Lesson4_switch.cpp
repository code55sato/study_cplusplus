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
		cout << "‚Ì“š‚¦" << endl;
		getchar();
		cout << switchResult << endl;
		getchar();

	}
	
}

void Lesson4_switch::inputNum_1_2(int &x, int &y)
{
	cout << "‚Ð‚Æ‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
	cin >> x;
	cout << "‚Ó‚½‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
	cin >> y;
}

bool Lesson4_switch::calcCheckOpe()
{
	cout << "ŽÀs‚·‚éŒvŽZ‚ð‘I‘ð\n1:‘«‚µŽZ@2:ˆø‚«ŽZ@3:‚©‚¯ŽZ@4:Š„‚èŽZ" << endl;
	cin >> ope;
	if (ope == 1 || ope == 2 || ope == 3 || ope == 4)
	{
		return true;
	}
	else
	{
		cout << "ƒIƒyƒ‰ƒ“ƒh‚ª•s³‚Å‚·" << endl;
		return false;
	}
	
}