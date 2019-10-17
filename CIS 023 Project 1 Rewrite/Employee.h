#pragma once
#include <string>
using std::string;
#include "Date.h"
#include "DateAndTime.h"
class Employee {
public:
	Employee(const string&, const string&, const Date&, const Date&, const DateAndTime&, const DateAndTime&, const int, const int, const int);
	void print();

	string getFirstName();
	string getLastName();
	void getHireDate();
	void getBirthDate();
	void getStartDateTime();
	void getEndDateTime();
	bool testZeroDateTIme(DateAndTime);
	void setEndDateTime(int, int, int);
	static int getCount();

	~Employee();
private:
	string firstName;
	string lastName;
	const Date birthDate;
	const Date hireDate;
	int trainingHoursNeeded;
	int trainingMinutesNeeded;
	int trainingSecondsNeeded;
	
	DateAndTime startDateTime;
	DateAndTime endDateTIme;
	static int count;
	
};

