#include <iostream>
#include "Employee.h"
#include "Time.h"
#include "Date.h"
#include "DateAndTime.h"
using std::cout;
using std::endl;

int main() {
	Employee *employeeArray [10];
	Date hireDate1(2, 5, 2002);
	Date birthDate1(3, 6, 19803);
	Time startTime1(12,30,30);
	Time endTime1;
	DateAndTime startDateAndTime1(1, 1, 1900, startTime1);
	DateAndTime endDateAndTime1(2, 5, 1992, endTime1);
	cout << employeeArray[0]->getCount();
	Employee employee1("Susan", "Baker", hireDate1, birthDate1, startDateAndTime1, endDateAndTime1, 200, 60, 50);
	cout << endl << employee1.getCount();
	/* Scope Limiter */{
		//Dates

		//Times

		//Starting Times/Dates

		//Employee objects
		
	}

	cout << endl << endl;
	system("pause");
}