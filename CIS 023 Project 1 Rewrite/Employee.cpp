#include "Employee.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int Employee::count = 0;
Employee::Employee(const string& aFirstName, const string& aLastName, const Date& aHireDate, const Date& aBirthDate, const DateAndTime& aStartDateTime, const DateAndTime& aEndDateTime, const int aTrainingHoursNeeded, const int aTrainingMinutesNeeded, const int aTrainingSecondsNeeded):
firstName(aFirstName),
lastName(aLastName),
birthDate(aBirthDate),
hireDate(aHireDate),
startDateTime(aStartDateTime),
endDateTIme(aEndDateTime),
trainingHoursNeeded(aTrainingHoursNeeded),
trainingMinutesNeeded(aTrainingMinutesNeeded),
trainingSecondsNeeded(aTrainingSecondsNeeded)

{
	print();
	cout << endl << testZeroDateTIme(endDateTIme);
	count++;
	
}

void Employee::print() {
	string fullName;
	fullName.append(firstName);
	fullName.append(" ");
	fullName.append(lastName);
	cout << endl << fullName << endl;
	printf("Employee: %s  %15s", fullName.c_str(), "Birth Date: ");
	
	birthDate.print();
	
	printf("%15s", "Hire Date: ");
	hireDate.print();
	printf("%23s", "Training starts at ");
	startDateTime.print();

}

string Employee::getFirstName() {
	return firstName;
}

string Employee::getLastName() {
	return lastName;
}

void Employee::getHireDate() {
	hireDate.print();
}

void Employee::getBirthDate() {
	birthDate.print();
}

void Employee::getStartDateTime() {
	startDateTime.print();
}

void Employee::getEndDateTime() {
	endDateTIme.print();
}

bool Employee::testZeroDateTIme(DateAndTime aInput) {
	
	return aInput.getZero();
}

void Employee::setEndDateTime(int aHours, int aMinutes, int aSeconds) {
	
}

int Employee::getCount() {
	return Employee::count;
}

Employee::~Employee() {
}

