#pragma once
#include "Time.h"
class DateAndTime {
public:
	// constant information
	static const unsigned int monthsPerYear = 12;
	// default constructor
	explicit DateAndTime(int = 1, int = 1, int = 1900, Time = Time(0,0,0));
	DateAndTime(Time);

	// printer
	void print();

	// setters
	void setMonth(int aMonth);
	void setYear(int aYear);
	void setDay(int aDay);
	//setters
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	//getters
	unsigned int getHour();
	unsigned int getMinute();
	unsigned int getSecond();
	bool getZero();
	
	void printUniversal();
	void printStandard();

	~DateAndTime();
private:
	bool isZero;
	unsigned int month;
	unsigned int day;
	unsigned int year;

	Time time;
	void setZero(bool);

	
	unsigned int checkDay(int aDay) ;
	unsigned int checkYear(int aYear) ;
	unsigned int checkMonth(int aMonth) ;

};

