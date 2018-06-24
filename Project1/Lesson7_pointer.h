#pragma once
#include <io.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

class Lesson7_pointer
{
public:
	Lesson7_pointer();
	~Lesson7_pointer();

	int pointerTestIntNum1;
	int pointerTestIntNum2;
	int* p_pointerTestIntNum1 = &pointerTestIntNum1;
	int* p_pointerTestIntNum2 = &pointerTestIntNum2;
	int temp;

	void pointerTestReturnIntNum();
	void pointerTestReturnSwap();
	int pointerTestReturnSwap(int* p_pointerTestIntNum1,int* p_pointerTestIntNum2);

};

