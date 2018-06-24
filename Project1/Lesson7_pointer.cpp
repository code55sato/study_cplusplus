#include "Lesson7_pointer.h"



Lesson7_pointer::Lesson7_pointer()
{
}


Lesson7_pointer::~Lesson7_pointer()
{
}

void Lesson7_pointer::pointerTestReturnIntNum()
{
	pointerTestIntNum1 = 10;

	cout << pointerTestIntNum1 << endl;
	cout << "変数のアドレス："  << &pointerTestIntNum1 << endl;
	cout << "ポインタp_pointerTestIntNum1の値：" << p_pointerTestIntNum1 << endl;
	cout << "ポインタ*p_pointerTestIntNum1の値：" << *p_pointerTestIntNum1 << endl;
	//cout << p_pointerTestIntNum1 + 10 << endl;
	//cout << *p_pointerTestIntNum1 + 10 << endl;
	getchar();

}

void Lesson7_pointer::pointerTestReturnSwap()
{


	cout << "ポインタテスト用の数字1を入力" << endl;
	cin >> pointerTestIntNum1;
	cout << "ポインタテスト用の数字2を入力" << endl;
	cin >> pointerTestIntNum2;

	temp = *p_pointerTestIntNum2;
	*p_pointerTestIntNum2 = *p_pointerTestIntNum1;
	*p_pointerTestIntNum1 = temp;


	cout << "ポインタテスト用の数字1:" << pointerTestIntNum1 << endl;
	getchar();
	cout << "ポインタテスト用の数字2:" << pointerTestIntNum2 << endl;
	getchar();


}

int Lesson7_pointer::pointerTestReturnSwap(int* p_pointerTestIntNum1, int* p_pointerTestIntNum2)
{
	temp = *p_pointerTestIntNum2;
	*p_pointerTestIntNum2 = *p_pointerTestIntNum1;
	*p_pointerTestIntNum1 = temp;
	return *p_pointerTestIntNum1;
}

