//============================================================================
// Name        : UCSD_Ext_C++_HW1.cpp
// Author      : RamV
// Version     :
// Copyright   : Your copyright notice
// Description : Date Class, Ansi-style
//============================================================================

#include <iostream>
using std::cerr;
using std::cout;

class Date{
private:
	int month;
	int day;
	int year;
public:
	Date(int month, int day, int year){ 		//Constructor called here
		if(month>=1 && month <=12){
			this->month=month;
		}
		else{
			cerr<<"Attempted to input wrong month value "<<month<<"\n";
			this->month=1;
		}
		this->day = day;
		this->year = year;
	}

	void setMonth(int month){
		if(month>=1 && month <=12){ //Month setter range 1-12
			this->month=month;
		}
		else{
			cerr<<"Attempted to input wrong month value "<< month<<"\n";
			this->month=1;		//Correct erroneous month value to 1
		}

	}

	int getMonth(){
		return month;
	}

	void setDay(int day){
		this->day=day;
	}

	int getDay(){
		return day;
	}

	void setYear(int year){
		this->year=year;
	}

	int getYear(){
		return year;
	}

	void display(){
		cout<<"The date entered is : "<<month<<"/"<<day<<"/"<<year<<"\n";
	}

};


int main() {
	Date correctDate(1,15,2012); //Constructor initialized with correct values
	Date anotherDate(12,7,2098);
	Date wrongDate(33,45,1090);  //Wrong values for month

	correctDate.display();
	anotherDate.display();
	wrongDate.display();

	anotherDate.setMonth(14); 	//Another wrong value for month
	anotherDate.setDay(55);
	anotherDate.setYear(9949);

	cout<< "Month is: "<< anotherDate.getMonth()<< "\n";
	cout<< "Day is: "<< anotherDate.getDay()<< "\n";
	cout<< "Year is: "<< anotherDate.getYear()<< "\n";
	anotherDate.display();

	return 0;
}
