//Chris Sun
//C++
//Day of Year Operator overloading

#include "pch.h"
#include "DayOfYear.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//DayOfYear dayofyearobj;		//declare a day of the year object
	int day;					//to hold the day
	string month;

	//display the purpose of the program
	cout << "This program converts a month and day into a day of the year in the range of 1...365." << endl;

	//get the day from user
	cout << "Enter the month: " << endl;
	cin >> month;
	cout << "Enter the day: " << endl;
	cin >> day;
	cout << "\n" << endl;

	DayOfYear dayofyearobj(month, day);
	cout << "Day: ";
	dayofyearobj.printNum();

	cout << "\n" << endl;

	cout << "The next day will be: " << endl;	//demonstrating prefix increment
	++dayofyearobj;
	dayofyearobj.print();

	cout << "The day after this will be: " << endl;		//demonstrating postfix increment
	dayofyearobj++;
	dayofyearobj.print();

	cout << "The day before " << month << " " << day << " will be: " << endl;	//demonstrating prefix decrement
	(--dayofyearobj);
	(--dayofyearobj);
	(--dayofyearobj);
	dayofyearobj.print();

	cout << "the day before this will be: " << endl;	//demonstrating postfix decrement
	(dayofyearobj--);
	dayofyearobj.print();

	return 0;
}
