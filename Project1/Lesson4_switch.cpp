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
			cout << "足し算" << endl;
			cout << "ひとつめの数字を入力" << endl;
			cin >> x;
			cout << "ふたつめの数字を入力" << endl;
			cin >> y;
			switchResult = x + y;
			cout << "足し算の答え" << endl;
			cout << switchResult << endl;
			break;
		case 2:
			cout << "引き算" << endl;
			cout << "ひとつめの数字を入力" << endl;
			cin >> x;
			cout << "ふたつめの数字を入力" << endl;
			cin >> y;
			switchResult = x - y;
			cout << "引き算の答え" << endl;
			cout << switchResult << endl;
			break;
		case 3:
			cout << "かけ算" << endl;
			cout << "ひとつめの数字を入力" << endl;
			cin >> x;
			cout << "ふたつめの数字を入力" << endl;
			cin >> y;
			switchResult = x * y;
			cout << "かけ算の答え" << endl;
			cout << switchResult << endl;
			break;
		case 4:

			cout << "わり算" << endl;
			cout << "ひとつめの数字を入力" << endl;
			cin >> x;
			cout << "ふたつめの数字を入力" << endl;
			cin >> y;
			switchResult = x / y;
			cout << "わり算の答え" << endl;
			cout << switchResult << endl;
			break;
		}
	}
	getchar();
}

bool Lesson4_switch::calcCheckOpe()
{
	cout << "実行する計算を選択\n1:足し算　2:引き算　3:かけ算　4:割り算" << endl;
	cin >> ope;
	if (ope == 1 || ope == 2 || ope == 3 || ope == 4)
	{
		return true;
	}
	else
	{
		cout << "オペランドが不正です" << endl;
		return false;
	}
	
}