#pragma once
#include <io.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

class Lesson4_switch
{
public:
	Lesson4_switch();
	~Lesson4_switch();

	int ope = 0;
	int switchResult = 0;
	const string ja_PlusStr = "�����Z";
	const string ja_MinusStr = "�Ђ��Z";
	const string ja_MultiplyStr = "�����Z";
	const string ja_DividStr = "���Z";
	bool calcCheckOpe();
	void calc();
	void inputNum_1_2(int &x, int &y);
};

