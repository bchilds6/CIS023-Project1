#pragma once
class Date {
public:
	// constant information
	static const unsigned int monthsPerYear = 12;
	// default constructor
	explicit Date(int = 1, int = 1, int = 2011);

	// printer
	void print() const;

	// setters
	void setMonth(int aMonth);
	void setYear(int aYear);
	void setDay(int aDay);
	
	~Date();
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int aDay) const;
	unsigned int checkYear(int aYear) const;
	unsigned int checkMonth(int aMonth) const;


};

