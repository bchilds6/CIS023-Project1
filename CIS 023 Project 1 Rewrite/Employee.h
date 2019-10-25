#pragma once
#include <string>
using std::string;
#include "Date.h"
#include "DateAndTime.h"
class Employee {
public:
	Employee(const string&, const string&, const Date&, const Date&, const DateAndTime&, const DateAndTime&);
	void print();

	string getFirstName();
	string getLastName();
	void getHireDate();
	void getBirthDate();
	void getStartDateTime();
	void getEndDateTime();
	bool testZeroDateTime(DateAndTime *in);
	void setEndDateTime(DateAndTime);
	static int getCount();
	void calculateTrainingEndDateTime(int, int, int);
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
	DateAndTime endDateTime;
	static int count;
	
};

