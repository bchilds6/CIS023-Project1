#include "DateAndTime.h"
#include <iostream>
#include <iomanip>

DateAndTime::DateAndTime(int aMonth, int aDay, int aYear, Time aTime) {
	setZero(false);
	setMonth(aMonth);
	setYear(aYear);
	setDay(aDay);
	time1.setTime(aTime.getHour(), aTime.getMinute(), aTime.getSecond());
}

DateAndTime::DateAndTime(Time tInput):
time1(tInput)
{
	setMonth(1);
	setYear(2011);
	setDay(1);
	setZero(true);
}


void DateAndTime::print()  {

	printf("%i/%i/%i ", month, day, year);
	time1.printStandard();
}

void DateAndTime::setMonth(int aMonth) {
	month = checkMonth(aMonth);
}

void DateAndTime::setYear(int aYear) {
	year = checkYear(aYear);
}

void DateAndTime::setDay(int aDay) {
	day = checkDay(aDay);
}

unsigned DateAndTime::checkDay(int aDay) {
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (aDay > 0 && aDay <= 31) {
			return aDay;
		}
		else {
			printf("Invalid month (%i) set to 1\n", aDay);
			return 1;
		}
		break;
	case 4: case 6: case 9: case 11:
		if (aDay > 0 && aDay <= 30) {
			return aDay;
		}
		else {
			printf("day (%i) set to 1\n", aDay);
			return 1;
		}
		break;
	case 2:
		if (aDay > 0 && aDay <= 28) {
			return aDay;
		}
		else {
			printf("day (%i) set to 1\n", aDay);
			return 1;
		}
		break;
	default:
		printf("Month not set, day set to 1\n");
		return 1;
		break;
	}

}


unsigned int DateAndTime::checkYear(int aYear) {
	if (aYear >= 1900 && aYear < 10000) {
		return aYear;
	}
	else {
		printf("Invalid year (%i) set to 2011\n\n", aYear);
		return 2011;
	}

}

unsigned DateAndTime::checkMonth(int aMonth) {
	if (aMonth > 0 && aMonth <= monthsPerYear) {
		return aMonth;
	}
	else {
		printf("Invalid month (%i) set to 1\n", aMonth);
		return 1;
	}
}

void DateAndTime::setTime(int aHour, int aMinute, int aSecond) {
	setHour(aHour);
	setMinute(aMinute);
	setSecond(aSecond);
}

void DateAndTime::setHour(int aHour) {
	if (aHour >= 0 && aHour < 24) {
		time1.setHour(aHour);
	}
	else {
		printf("Invalid hour (%i) set to 0\n", aHour);
		time1.setHour(0);
	}
}

void DateAndTime::setMinute(int aMinute) {
	if (aMinute >= 0 && aMinute < 59) {
		time1.setMinute(aMinute);
	}
	else {
		printf("Invalid Minute (%i) set to 0\n", aMinute);
		time1.setMinute(0);
	}
}

void DateAndTime::setSecond(int aSecond) {
	if (aSecond >= 0 && aSecond < 59) {
		time1.setSecond(aSecond);
	}
	else {
		printf("Invalid Second (%i) set to 0\n", aSecond);
		time1.setSecond(0);
	}
}

unsigned DateAndTime::getHour() {
	return time1.getHour();
}

unsigned DateAndTime::getMinute() {
	return time1.getMinute();
}

unsigned DateAndTime::getSecond() {
	return time1.getSecond();
}

int DateAndTime::getYear() {
	return year;
}

int DateAndTime::getMonth() {
	return month;
}

int DateAndTime::getDay() {
	return day;
}

bool DateAndTime::getZero() {
	return isZero;
}

void DateAndTime::printUniversal() {
	printf("%02i:%02i:%02i", getHour(), getMinute(), getSecond());
}

void DateAndTime::printStandard() {
	printf("%02i:%02i:%02i %s", getHour(), getMinute(), getSecond(), (getHour() < 12 ? "AM" : "PM"));
}

void DateAndTime::setZero(bool aIn) {
	isZero = aIn;
}
DateAndTime::~DateAndTime() {
}
