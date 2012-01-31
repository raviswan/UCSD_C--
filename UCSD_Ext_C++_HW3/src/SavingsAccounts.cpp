/*
 * SavingsAccounts.cpp
 *
 *  Created on: Jan 26, 2012
 *      Author: vram
 */


#include "SavingsAccount.h"
#include <iostream>

using std::cerr;
using std::cout;

double RamViswanathan::SavingsAccount::annualInterestRate;//static member initialization

RamViswanathan::SavingsAccount::SavingsAccount(double initialBalance){
	if(initialBalance < 0){		//if initalBalance -ve, reset to zero
		cerr<<"Initial Balance of $ "<<initialBalance<<" is invalid\n";
		savingsBalance = 0;
	}
	else{
		savingsBalance = initialBalance;
	}

}


double RamViswanathan::SavingsAccount::getSavingsBalance() const{
	return savingsBalance;

}

void RamViswanathan::SavingsAccount::setAnnualInterestRate(double newInterestRate){
	if(newInterestRate < 0){		//if interest rate -ve, reset to zero
		cerr<<"Entered interest rate "<<newInterestRate<<"%  is invalid.\n";
		SavingsAccount::annualInterestRate = 0;
	}
	else{
		SavingsAccount::annualInterestRate = newInterestRate;//interest rate set here
	}
}

void RamViswanathan::SavingsAccount::applyMonthlyInterest(){
	const int TWELVE= 12;
	const int HUNDRED=100;
	//Compute monthly interest by diving annual interest by 12.Annual Interest in %, so divide by 100
	savingsBalance += savingsBalance * SavingsAccount::annualInterestRate/(HUNDRED*TWELVE);
}

void RamViswanathan::SavingsAccount::displayBalance() const{
	cout<<"Current account balance @ "<<SavingsAccount::annualInterestRate<<"% annual interest is :"
		<<getSavingsBalance()<<"\n";
}

