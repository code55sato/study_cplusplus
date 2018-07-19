#pragma once
#include <io.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

class Lesson8_array
{
public:
	Lesson8_array();
	~Lesson8_array();

	string greeting;
	string greetingMornig;
	string greetingHello;
	string greetingEvening;
	string greetingBye;

	//string greeting[] = {"Good Morning","Hello","Good Evening","Good Bye"};

	time_t ofTime = time(NULL);

	int nowHour = (ofTime / 3600 + 9) % 24;

	char dateArray[64];
	
	const int sec = 60;
	const int minut = 60;
	const int hour = 24;
	const int day = 365;
	const int month = 12;
	

	void timeZoneChangeGreeting();


};

