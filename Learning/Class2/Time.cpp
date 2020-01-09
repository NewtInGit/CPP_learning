#include "Time.h"
#include<iostream>

Time::Time() {
	hours_ = minutes_ = 0;
}

Time::Time(int hours, int minutes) {
	hours_ = hours;
	minutes_ = minutes;
}

void Time::AddMin(int add_minutes){
	minutes_ += add_minutes;
	hours_ += add_minutes / 60;
	minutes_ %= 60;
}

void Time::AddHours(int add_hours) {
	hours_ += add_hours;
}

void Time::Reset(int hours,int minutes) {
	hours_ = hours;
	minutes_ = minutes;
}

Time Time::operator+(const Time& t)const {//+µÄÖØÔØ
	Time sum;
	sum.minutes_ = minutes_ + t.minutes_;
	sum.hours_ = hours_ + t.hours_ + sum.minutes_ / 60;
	sum.minutes_ %= 60;
	return sum;
}

Time Time::operator-(const Time& t)const {
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes_ + t.hours_ * 60;
	tot2 = minutes_ + hours_ * 60;
	diff.minutes_ = (tot2 - tot1) % 60;
	diff.hours_ = (tot2 - tot1) / 60;
	return diff;
}

Time Time::operator*(double mult)const {
	Time result;
	long tot = hours_ * mult * 60 + minutes_ * 60;
	result.hours_ = tot / 60;
	result.minutes_ = tot % 60;
	return result;
}

void Time::show()const {
	std::cout << hours_ << " Hours, " << minutes_ << " Minutes." << std::endl;
}