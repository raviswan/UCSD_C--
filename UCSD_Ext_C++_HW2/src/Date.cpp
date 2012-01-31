/*
 * Date.cpp
 *
 *  Created on: Jan 22, 2012
 *      Author: vram
 */

#include "Date.h"
#include <iostream>
#include <time.h>
using std::cerr;
using std::cout;



RamViswanathan::Date::Date() {
	const int TM_STRUCT_YEAR_OFFSET = 1900;
	const int TM_STRUCT_DAY_OFFSET = 1;
	time_t curr_time_in_sec;
	struct tm * curr_time_in_tm_struct;
	time(&curr_time_in_sec);
	curr_time_in_tm_struct = localtime(&curr_time_in_sec);
	this->month = curr_time_in_tm_struct->tm_mon + TM_STRUCT_DAY_OFFSET;	//Add 1 to returned value for the month
	this->day = curr_time_in_tm_struct->tm_mday;
	this->year = curr_time_in_tm_struct->tm_year + TM_STRUCT_YEAR_OFFSET;	//Add 1900 to returned value for year
	valid_date=true;

}

RamViswanathan::Date::Date(int month, int day, int year){
	const int LEAP_YEAR_TEST = 4;
	const int DAY_START = 1;
	const int DAY_NON_LEAP_YEAR = 28;
	const int DAY_LEAP_YEAR = 29;
	const int DAY_END= 31;
	enum {
		JAN=1,
		FEB,
		MAR,
		APR,
		MAY,
		JUN,
		JUL,
		AUG,
		SEP,
		OCT,
		NOV,
		DEC
	};
	valid_date = true;								//Set flag to true for every object
	if(month >= JAN && month <= DEC){				//Check if the month is bet. 1 and 12
		if(day >= DAY_START && day <= DAY_END) {	//Check if day  bet. 1-31
			if(year > 0) {							//Check if year > 0
				switch (month) {
				case APR:
				case JUN:
				case SEP:
				case NOV:
					if (day == DAY_END) { 			//31st not allowed for Apr,Jun,Sep,Nov
						cerr<<"\n31st is invalid date for the month."
						<<" ** Your date was: "<<month<<"/"<<day<<"/"<<year<<" **\n";
						valid_date=false;
					}
					break;
				case FEB:	//Feb month check
					if( (year % LEAP_YEAR_TEST) && (day > DAY_NON_LEAP_YEAR) ) {	//day>28 in non leap year Feb illegal
						cerr<<"\nFebruary has only till 28th in a non-leap year."
						<<" ** Your date was: "<<month<<"/"<<day<<"/"<<year<<" **\n";
						valid_date=false;
					}
					else if( !(year % LEAP_YEAR_TEST) && (day > DAY_LEAP_YEAR) ) {	// day>29 in leap year Feb illegal
						cerr<<"\nFebruary has only till 29th in a leap year."
						<<" ** Your date was: "<<month<<"/"<<day<<"/"<<year<<" **\n";
						valid_date=false;
					}
					break;
				default:
					break;
				}
				if(valid_date){		//If date is valid, populated the class members
					this->month = month;
					this->day = day;
					this->year = year;
				}
			}
			else {
				valid_date=false;
				cerr<<"\nYear has to be greater than 0."
				<<" ** Your date was: "<<month<<"/"<<day<<"/"<<year<<" **\n";
			}
		}
		else {	//If day outside the range of 1-31, print error
			valid_date=false;
			cerr<<"\nDay is not in the range 1-31."
			<<" ** Your date was: "<<month<<"/"<<day<<"/"<<year<<" **\n";
		}
	}
	else {
		valid_date=false;
		cerr<<"\nMonth is not in the range 1-12."
		<<" ** Your date was: "<<month<<"/"<<day<<"/"<<year<<" **\n";
	}

}

void RamViswanathan::Date::display() const {
	if(valid_date) {
		cout<<"\n The date entered is : "<<month<<"/"<<day<<"/"<<year<<"\n";
	}

}


