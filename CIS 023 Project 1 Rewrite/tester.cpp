#include <iostream>
#include "Employee.h"
#include "Time.h"
#include "Date.h"
#include "DateAndTime.h"
using std::cout;
using std::endl;

int main() {


	/* Scope Limiter */ {
		Employee* employeeArray[10];
		printf("Number of employees before instantiation of any objects is %i\n", Employee::getCount());

		//Dates
		Date hireDate1(2, 1, 2013), hireDate2(4, 1, 2014), hireDate3(9, 1, 2012);
		Date birthDate1(2, 1, 1985), birthDate2(11, 30, 1988), birthDate3(6, 14, 19830);

		//Times
		Time startTime1(23, 10, 30), startTime2(11, 11, 59), startTime3(12, 70, 70);
		Time endTime1, endTime2, endTime3;
		//Starting/Ending Dates and Times
		DateAndTime startDateAndTime1(10, 9, 2016, startTime1), startDateAndTime2(12, 25, 2017, startTime2), startDateAndTime3(2, 28, 2016, startTime3);
		DateAndTime endDateAndTime1(endTime1), endDateAndTime2(endTime2), endDateAndTime3(endTime3);

		// object count
		
		//Employee objects
		Employee employee1("Susan", "Baker", hireDate1, birthDate1, startDateAndTime1, endDateAndTime1);
		Employee employee2("Robert", "Jones", hireDate2, birthDate2, startDateAndTime2, endDateAndTime2);
		Employee employee3("John", "Lin", hireDate3, birthDate3, startDateAndTime3, endDateAndTime3);

		// object count
		printf("Number of employees after objects are instantiated is %i\n\n", Employee::getCount());

		// put employee objects into array
		employeeArray[0] = &employee1;
		employeeArray[1] = &employee2;
		employeeArray[2] = &employee3;

		// print all objects
		for (int i = 0; i < 3; i++)
			employeeArray[i]->print();

		// calculate the ending times
		employee1.calculateTrainingEndDateTime(155, 34, 20);
		employee2.calculateTrainingEndDateTime(333, 22, 59);
		employee3.calculateTrainingEndDateTime(564, 0, 0);

		// print all objects
		for (int i = 0; i < 3; i++)
			employeeArray[i]->print();
		

	}

	cout << endl << endl;
	system("pause");
}