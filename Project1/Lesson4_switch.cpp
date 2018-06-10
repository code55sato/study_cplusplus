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
			cout << "‘«‚µŽZ" << endl;
			cout << "‚Ð‚Æ‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> x;
			cout << "‚Ó‚½‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> y;
			switchResult = x + y;
			cout << "‘«‚µŽZ‚Ì“š‚¦" << endl;
			cout << switchResult << endl;
			break;
		case 2:
			cout << "ˆø‚«ŽZ" << endl;
			cout << "‚Ð‚Æ‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> x;
			cout << "‚Ó‚½‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> y;
			switchResult = x - y;
			cout << "ˆø‚«ŽZ‚Ì“š‚¦" << endl;
			cout << switchResult << endl;
			break;
		case 3:
			cout << "‚©‚¯ŽZ" << endl;
			cout << "‚Ð‚Æ‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> x;
			cout << "‚Ó‚½‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> y;
			switchResult = x * y;
			cout << "‚©‚¯ŽZ‚Ì“š‚¦" << endl;
			cout << switchResult << endl;
			break;
		case 4:

			cout << "‚í‚èŽZ" << endl;
			cout << "‚Ð‚Æ‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> x;
			cout << "‚Ó‚½‚Â‚ß‚Ì”Žš‚ð“ü—Í" << endl;
			cin >> y;
			switchResult = x / y;
			cout << "‚í‚èŽZ‚Ì“š‚¦" << endl;
			cout << switchResult << endl;
			break;
		}
	}
	getchar();
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