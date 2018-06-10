#pragma once
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
	bool calcCheckOpe();
	void calc();
};

