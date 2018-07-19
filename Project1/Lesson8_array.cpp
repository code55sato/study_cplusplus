#include "Lesson8_array.h"

Lesson8_array::Lesson8_array()
{
}


Lesson8_array::~Lesson8_array()
{
}


void Lesson8_array::timeZoneChangeGreeting()
{
	//char *ctime(const time_t *timep);
	//char *ctime_r(const time_t *timep, char *buf);

	//printf("%s", ctime(&ofTime));

	//cout << nowHour << endl;

	greetingMornig = "Good Morning";
	greetingHello = "Hello";
	greetingEvening = "Good Evening";
	greetingBye = "Good Bye";

	if (nowHour >= 5 && nowHour <= 9) {
		cout << greetingMornig << endl;
	}
	else if (nowHour >= 10 && nowHour <= 16){
		cout << greetingHello << endl;
	}
	else if (nowHour >= 17 && nowHour <= 19) {
		cout << greetingEvening << endl;
	}
	else {
		cout << greetingBye << endl;
	}

	greetingBye[6] = 'A';
	cout << greetingBye << endl;

	getchar();
}
