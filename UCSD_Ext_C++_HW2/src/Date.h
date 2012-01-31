/*
 * Date.h
 *
 *  Created on: Jan 22, 2012
 *      Author: vram
 */

#ifndef RAMV_DATE_H_
#define RAMV_DATE_H_

namespace RamViswanathan {

class Date{
public:
	Date();								//default constructor with current date
	Date(int month, int day, int year);	//to check correctness of date before setting them
	inline int getMonth() const;
	inline int getDay() const;
	inline int getYear() const;
	void display() const;
private:
	int month;
	int day;
	int year;
	bool valid_date; 	//To avoid getters from printing garbage for erroneous dates
};

}		//namespace

int RamViswanathan::Date::getMonth() const {
	if(this->valid_date){
		return this->month;
	}
}

int RamViswanathan::Date::getDay() const {
	if(this->valid_date){
		return this->day;
	}
}

int RamViswanathan::Date::getYear() const{
	if(this->valid_date){
		return this->year;
	}
}

#endif /* RAMV_DATE_H_ */
