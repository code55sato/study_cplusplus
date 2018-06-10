#include "Lesson2_variable.h"



Lesson2_variable::Lesson2_variable()
{
}


Lesson2_variable::~Lesson2_variable()
{
}

int Lesson2_variable::plusCalc(int x, int y) {
	result = x + y;
	return result;
}

int Lesson2_variable::minusCalc(int x, int y) {
	result = x - y;
	return result;
}

int Lesson2_variable::counterNum(int requestNum) {
	for (size_t i = 0; i <= requestNum; i++)
	{
		cout << i << "”Ô–Ú" << endl;
	}
	return 0;
}

int Lesson2_variable::sizeCheck(int checkNum) {
	returnNum = sizeof(checkNum);
	cout << returnNum << "ƒoƒCƒg" << endl;
	return 0;
}

bool Lesson2_variable::castNum(double castTest_double_Num) {
	if (castTest_double_Num >= 0)
	{
		int castTest_int_Num;
		castTest_int_Num = (double)castTest_double_Num;
		cout << castTest_int_Num << endl;
		return true;
	}
	else
	{
		return false;
	}

}