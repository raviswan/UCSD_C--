/*
 * SavingsAccount.h
 *
 *  Created on: Jan 26, 2012
 *      Author: vram
 */

#ifndef RAMV_SAVINGSACCOUNT_H_
#define RAMV_SAVINGSACCOUNT_H_

namespace RamViswanathan {

class SavingsAccount{
public:
	SavingsAccount(double initialBalance); 	//Constructor with initial balance
	double getSavingsBalance() const;		//returns acct balance
	void applyMonthlyInterest();
	static void setAnnualInterestRate(double newInterestRate); //one interest rate for all accounts
	void displayBalance() const;			//added by me to display acct balance
private:
	double savingsBalance;
	static double annualInterestRate;
};

}



#endif /* RAMV_SAVINGSACCOUNT_H_ */
