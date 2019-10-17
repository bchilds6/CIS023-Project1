#pragma once
class Time {
	public:
	Time(int = 23, int = 59, int = 59);

	//setters
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	//getters
	unsigned int getHour() ;
	unsigned int getMinute() ;
	unsigned int getSecond() ;
	
	void printUniversal() ;
	void printStandard() ;
	~Time();
	
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};

