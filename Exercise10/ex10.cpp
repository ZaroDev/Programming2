/*
2. Implement the class Clock, with:
a. Three private data members hours (from 0 to 23), minutes (from 0 to 59), and
seconds (from 0 to 59). Think about which type of data could be more
convenient.

b. A constructor without parameters and another one with the three parameters to
set the initial values of hours, minutes, and seconds.

c. Implement three methods to get the values of the members hours, minutes, and
seconds.

d. Implement a method to know if two clocks show the same time (i.e. their hours,
minutes, and seconds are equal).

e. Implement a method that, given two Clocks, tells whether or not the time of one
clock shows a time before another one.

f. Implement the method setTime(unsigned char h, unsigned char min, unsigned
char sec) that sets the value of the data members in the class.

g. Implement the method printTime that prints the complete time in the following
format HH:MM:SS

h. Write a main program to test the several methods contained in the class Time.*/

#include <iostream>
using namespace std;

class Clock
{
public:
	/*b.A constructor without parametersand another one with the three parameters to
		set the initial values of hours, minutes, and seconds.*/
	Clock() {}
	Clock(unsigned char h, unsigned char m, unsigned char s) : _hours(h), _minutes(m), _seconds(s) {}

	/*c.Implement three methods to get the values of the members hours, minutes, and
		seconds.*/
	unsigned char hours()
	{
		return _hours;
	}
	unsigned char minutes()
	{
		return _minutes;
	}
	unsigned char seconds()
	{
		return _seconds;
	}
	/*d.Implement a method to know if two clocks show the same time(i.e.their hours,
		minutes, and seconds are equal).*/
	bool areTimesEqual(Clock clock1, Clock clock2)
	{
		int sum1 = (int)clock1.hours() + (int)clock1.minutes() + (int)clock1.seconds();
		int sum2 = (int)clock2.hours() + (int)clock2.minutes() + (int)clock2.seconds();
		if (sum1 == sum2) return true;
		else return false;
	}
	/*e.Implement a method that, given two Clocks, tells whether or not the time of one
		clock shows a time before another one*/
	void compareTimes(Clock clock1, Clock clock2)
	{
		int sum1 = (int)clock1.hours() + (int)clock1.minutes() + (int)clock1.seconds();
		int sum2 = (int)clock2.hours() + (int)clock2.minutes() + (int)clock2.seconds();
		
		if (sum1 < sum2)
		{
			cout << "The second Clock is before the first one!" << endl;
			return;
		}
		else if (sum1 > sum2)
		{
			cout << "The first Clock is BEFORE the second one!" << endl;
			return;
		}
		else if (sum1 == sum2)
		{
			cout << "Both times are equal!" << endl;
			return;
		}
	}
	/*f.Implement the method setTime(unsigned char h, unsigned char min, unsigned
		char sec) that sets the value of the data members in the class.*/
	void setTime(unsigned char h, unsigned char min, unsigned char sec)
	{
		_hours = h;
		_minutes = min;
		_seconds = sec;
	}
	/*g.Implement the method printTime that prints the complete time in the following
		format HH : MM:SS*/
	void printTime()
	{
		cout << (int)_hours << " : " << (int)_minutes << ":" << (int)_seconds << endl;
		return;
	}

private:
	/*a. Three private data members hours (from 0 to 23), minutes (from 0 to 59), and
	seconds (from 0 to 59). Think about which type of data could be more
	convenient.*/
	unsigned char _hours;
	unsigned char _minutes;
	unsigned char _seconds;
};




int main()
{
	Clock clock1;
	Clock clock2(23, 30, 40);
	
	clock1.setTime(12, 2, 4);

	clock1.printTime();
	clock2.printTime();

	clock1.compareTimes(clock1, clock2);

	clock1.setTime(12, 2, 4);

	if (clock1.areTimesEqual(clock1, clock2)) cout << "The clocks are equal!" << endl;
	else cout << "Clocks are not equal!" << endl;

	return 0;
}