#pragma once
#ifndef TIME_H_
#define TIME_H_

class Time {

private:
	int hours_;
	int minutes_;

public:
	Time();
	Time(int hours, int minutes);
	void AddMin(int add_minutes);
	void AddHours(int add_hours);
	void Reset(int hours=0, int minutes=0);
	Time operator+(const Time& t)const;
	Time operator-(const Time& t)const;
	Time operator*(double mult)const;
	void show() const;
};


#endif
