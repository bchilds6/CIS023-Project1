#include "Employee.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int Employee::count = 0;
Employee::Employee(const string& aFirstName, const string& aLastName, const Date& aHireDate, const Date& aBirthDate, const DateAndTime& aStartDateTime, const DateAndTime& aEndDateTime):
firstName(aFirstName),
lastName(aLastName),
birthDate(aBirthDate),
hireDate(aHireDate),
startDateTime(aStartDateTime),
endDateTime(aEndDateTime)
{
	count++;
}

void Employee::print() {
	string fullName;
	fullName.append(firstName);
	fullName.append(" ");
	fullName.append(lastName);
	//cout << endl << fullName << endl;
	printf("Employee: %s  %15s", fullName.c_str(), "Birth Date: ");
	
	birthDate.print();
	
	printf("%15s", "Hire Date: ");
	hireDate.print();
	printf("%23s", "Training starts at ");
	startDateTime.print();
	if (testZeroDateTime(&endDateTime)) {
		printf("\nNo specified end training date and time.\n\n");
	} else {
		printf("\nTraining ends at ");
		endDateTime.print();
		cout << endl << endl;
	}

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
	endDateTime.print();
}


bool Employee::testZeroDateTime(DateAndTime *aInput) {
	
	return aInput->getZero();
}

void Employee::setEndDateTime(DateAndTime dtInput) {
	endDateTime = dtInput;
}

int Employee::getCount() {
	return Employee::count;
}

void Employee::calculateTrainingEndDateTime(int aHours, int aMinutes, int aSeconds ){
	printf("  ***%s %s needs %i hours %i minutes and %i seconds to finish a training. ***  \n",firstName.c_str(), lastName.c_str(), aHours, aMinutes, aSeconds);
	int dayTotal = startDateTime.getDay();
	int monthTotal = startDateTime.getMonth();
	int yearTotal = startDateTime.getYear();
	
	int overflowMinutes = aSeconds / 60;
	aMinutes += overflowMinutes;
	int overflowHours = aMinutes / 60;
	aHours += overflowHours;
	int overflowDays = aHours / 24;
	dayTotal += overflowDays;
	while (dayTotal >= 28) {
		switch (monthTotal) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (dayTotal >= 31) {
				monthTotal++;
				dayTotal -= 31;
				printf("day(32+) set to 1\n");
				
			}
			break;
		case 4: case 6: case 9: case 11:
			if (dayTotal >= 30) {
				monthTotal++;
				dayTotal -= 30;
				printf("day(31+) set to 1\n");
			}
			break;
		case 2:
			if (dayTotal >= 28) {
				monthTotal++;
				dayTotal -= 28;
				printf("day(29+) set to 1\n");
			}
		default:
			break; 
		}
	}
	int overflowYears = monthTotal / 12;
	yearTotal += overflowYears;
	
	monthTotal -= (12 * overflowYears);
	aHours -= (24 * overflowDays);
	aMinutes -= (60 * overflowHours);
	aSeconds -= (60 * overflowMinutes);
	/*printf("%i years\n", yearTotal);
	printf("%i months\n", monthTotal);
	printf("%i days\n", dayTotal);
	printf("%i hours\n", aHours);
	printf("%i minutes\n", aMinutes);
	printf("%i seconds\n", aSeconds);
	*/
	endDateTime.setSecond(aSeconds);
	endDateTime.setMinute(aMinutes);
	endDateTime.setHour(aHours);
	endDateTime.setDay(dayTotal);
	endDateTime.setMonth(monthTotal);
	endDateTime.setYear(yearTotal);
	endDateTime.setZero(false);
	cout << endl << endl;
}

Employee::~Employee() {
}


