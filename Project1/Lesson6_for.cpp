#include "Lesson6_for.h"



Lesson6_for::Lesson6_for()
{
}


Lesson6_for::~Lesson6_for()
{
}

void Lesson6_for::counterNumber10()
{
	counter = 10;
	for (size_t i = 0; i < counter; i++)
	{
		cout << countNum << endl;
		countNum += 1;
	}
	getchar();
}

void Lesson6_for::counterNumber20()
{
	int i = 0;
	counter = 20;
	while (i < counter)
	{
		cout << countNum << endl;
		i++;
		countNum++;
	}
	getchar();
}

void Lesson6_for::counterNumber30()
{
	int i = 1;
	counter = 30;
	do
	{
		cout << "Hello" << i << endl;
		i++;
	} while (i <= counter);
	getchar();
}
