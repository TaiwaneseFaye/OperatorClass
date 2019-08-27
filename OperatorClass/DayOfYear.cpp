#include "pch.h"
#include "DayOfYear.h"
#include <string>
#include <iostream>
using namespace std;


int DayOfYear::daysAtEndofMonth[] = { 31,59,90,120,151,181,212,243,273,304,334,365 };

string DayOfYear::monthName[] = { "January", "February", "March", "April", "May", "June",
								"July", "August", "September", "October", "November", "December" };

DayOfYear::DayOfYear(string monName, int monDay) {
	bool error = false;
	for (int m = 0; m < 12; m++) {
		if (monName == monthName[m]) {
			if (m == 0) {
				day = monDay;
				error = monDay < 0 || monDay >31;
				if (error)break;
			}
			else {
				day = monDay + daysAtEndofMonth[m - 1];
				error = monDay<0 || monDay>daysAtEndofMonth[m] - daysAtEndofMonth[m - 1];
				if (error)break;
			}
			return;
		}
	}
	cout << "Invalid month or day." << endl;
	exit(1);
}

void DayOfYear::print() {
	int month = 0;
	while (daysAtEndofMonth[month] < day) {
		month = (month + 1) % 12;
	}
	if (month == 0) {
		cout << "\nJanuary " << day << endl << endl;
	}
	else {
		cout << endl << monthName[month] << " " << day - daysAtEndofMonth[month - 1] << endl << endl;
	}
}


//postfix increment
DayOfYear DayOfYear::operator++(int) {
	DayOfYear temp = *this;
	day++;
	if (day == 366) {
		day = 1;
	}
	return temp;
}

//postfix decrement
DayOfYear DayOfYear::operator--(int) {
	DayOfYear temp2 = *this;
	day--;
	if (day == 0) {
		day = 365;
	}
	return temp2;
}

//prefix increment
DayOfYear DayOfYear::operator++() {
	++day;
	if (day == 366) {
		day = 1;
	}
	return *this;
}

//prefix decrement
DayOfYear DayOfYear::operator--() {
	--day;
	if (day == 0) {
		day = 365;
	}
	return *this;
}