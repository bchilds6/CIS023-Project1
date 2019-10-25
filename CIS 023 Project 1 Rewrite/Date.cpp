#include "Date.h"
#include <array>
#include <iostream>
#include <stdexcept>

Date::Date(int aMonth, int aDay, int aYear) {
	month = checkMonth(aMonth);
	year = checkYear(aYear);
	day = checkDay(aDay);
}

void Date::print() const{
	printf("%i/%i/%i", month, day, year);
}

void Date::setMonth(int aMonth) {
	month = checkMonth(aMonth);
}

void Date::setYear(int aYear) {
	year = checkYear(aYear);
}

void Date::setDay(int aDay) {
	day = checkDay(aDay);
}

Date::~Date() {
}

unsigned Date::checkDay(int aDay) const {
	switch(month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (aDay > 0 && aDay <= 31) {
			return aDay;
		} else {
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


unsigned int Date::checkYear(int aYear) const {
	if(aYear >= 1900 && aYear < 10000) {
		return aYear;
	} else {
		printf("Invalid year (%i) set to 2011\n", aYear);
		return 2011;
	}
		
}

unsigned Date::checkMonth(int aMonth) const {
	if (aMonth > 0 && aMonth <= monthsPerYear) {
		return aMonth;
	} else {
		printf("Invalid month (%i) set to 1\n", aMonth);
		return 1;
	}
}


