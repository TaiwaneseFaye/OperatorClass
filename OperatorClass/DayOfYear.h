#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayOfYear {
private:
	int day;	//takes an int representing day
	string month;	//takes an string representing month

public:
	DayOfYear(string nameOfMonth, int dayOfMonth);
	DayOfYear();
	static int daysAtEndofMonth[];
	static string monthName[];
	void print();
	void printNum() { cout << day; }
	int numConvert();
	void setDay(int d) {		//setter for days
		this->day = d;
	}
	DayOfYear operator++(int);	//i++ postfix
	DayOfYear operator--(int);	//i-- postfix
	DayOfYear operator++();		//++i prefix
	DayOfYear operator--();		//--i prefix

};
#endif // !DAYOFYEAR_H


