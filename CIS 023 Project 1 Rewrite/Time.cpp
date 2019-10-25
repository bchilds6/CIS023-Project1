#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using std::cout;
using std::endl;



Time::Time(int aHour, int aMinute, int aSecond) {
	setTime(aHour, aMinute, aSecond);
}

void Time::setTime(int aHour, int aMinute, int aSecond) {
	setHour(aHour);
	setMinute(aMinute);
	setSecond(aSecond);
}

void Time::setHour(int aHour) {
	if (aHour >= 0 && aHour < 24) {
		hour = aHour;
	} else {
		printf("Invalid hour (%i) set to 0\n", aHour);
		hour = 0;
	}
}

void Time::setMinute(int aMinute) {
	if (aMinute >= 0 && aMinute < 60) {
		minute = aMinute;
	}
	else {
		printf("Invalid Minute (%i) set to 0\n", aMinute);
		minute = 0;
	}
}

void Time::setSecond(int aSecond) {
	if (aSecond >= 0 && aSecond < 60) {
		second = aSecond;
	}
	else {
		printf("Invalid Second (%i) set to 0\n", aSecond);
		second = 0;
	}
}

unsigned Time::getHour() {
	return hour;
}

unsigned Time::getMinute() {
	return minute;
}

unsigned Time::getSecond() {
	return second;
}

void Time::printUniversal() {
	printf("%02i:%02i:%02i", getHour(), getMinute(), getSecond());
}

void Time::printStandard() {
	if(getHour() < 12 && getHour() >= 1) {
		printf("%02i:%02i:%02i %s", getHour(), getMinute(), getSecond(), "AM");
	} else if(getHour() == 12) {
		printf("%02i:%02i:%02i %s", getHour(), getMinute(), getSecond(), "PM");
	} else if(getHour() > 12) {
		printf("%02i:%02i:%02i %s", getHour() - 12, getMinute(), getSecond(), "PM");
	}
}

Time::~Time() {
}
