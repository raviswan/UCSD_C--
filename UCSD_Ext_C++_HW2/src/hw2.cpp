//============================================================================
// Name        : UCSD_Ext_C++_HW2.cpp
// Author      : Ram Viswanathan
// Version     :
// Copyright   : 
// Description : Date Class with interface in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Date.h"
using RamViswanathan::Date;
using std::cout;

int main(){
	Date currDate;
	Date anotherDate(1,20,9999);
	const Date leapYear(12,29,2012); 	//Leap year Feb check
	Date nonLeapYear(2,28,2011); 		//Non-Leap year Feb check
	Date mnthCheck(5,30,1999);			//Apr 30 check
	Date mnthCheckAgain(8,31,2016);		//Aug 31st check
	const Date yearCheck(6,30,3);		//random correct date check

	Date wrongLeapYear(2,30,2000);		//Wrong date for leap year
	Date wrongnonLeapYear(2,29,2013);	//Wrong date for non-leap year
	const Date wrongDate2(33,10,1090);  //Wrong values for month
	Date wrongDate3(4,31,1795);  		//Wrong values for day
	Date wrongDate4(11,30,-1000);  		//Wrong values for year
	const Date wrongDate5(2,30,2010);  	//Wrong values for day
	Date wrongDate6(9,31,0);  			//Wrong values for day and year

	const Date testPublicFuncRight(2,29,20);	//Correct date for getters
	cout<<"\n Month:"<<testPublicFuncRight.getMonth()
		<<",Day:"<<testPublicFuncRight.getDay()
		<<",Year:"<<testPublicFuncRight.getYear()<<"\n";

	const Date testPublicFuncWrong1(4,31,19);	//Wrong date for getters. Output all zero
	cout<<"\n Month:"<<testPublicFuncWrong1.getMonth()
		<<",Day:"<<testPublicFuncWrong1.getDay()
		<<",Year: "<<testPublicFuncWrong1.getYear()<<"\n";


	Date testPublicFuncWrong2(13,30,2200);	//Wrong date for getters. Output all zero
		cout<<"\n Month:"<<testPublicFuncWrong2.getMonth()
			<<",Day:"<<testPublicFuncWrong2.getDay()
			<<",Year: "<<testPublicFuncWrong2.getYear()<<"\n";

	const Date testPublicFuncWrong3(3,31,-4);	//Wrong date for getters. Output all zero
		cout<<"\n Month:"<<testPublicFuncWrong3.getMonth()
			<<",Day:"<<testPublicFuncWrong3.getDay()
			<<",Year: "<<testPublicFuncWrong3.getYear()<<"\n";



	//All Correct dates
	currDate.display();
	anotherDate.display();
	leapYear.display();
	nonLeapYear.display();
	mnthCheck.display();
	mnthCheckAgain.display();
	yearCheck.display();

	//All wrong dates output yield nothing
	wrongLeapYear.display();
	wrongnonLeapYear.display();
	wrongDate2.display();
	wrongDate3.display();
	wrongDate4.display();
	wrongDate5.display();
	wrongDate6.display();

}


