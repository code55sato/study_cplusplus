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
		cout << "の答え" << endl;
		getchar();
		cout << switchResult << endl;
		getchar();

	}
	
}

void Lesson4_switch::inputNum_1_2(int &x, int &y)
{
	cout << "ひとつめの数字を入力" << endl;
	cin >> x;
	cout << "ふたつめの数字を入力" << endl;
	cin >> y;
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