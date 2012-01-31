//============================================================================
// Name        : hw3.cpp
// Author      : Ram Viswanathan
// Version     :
// Copyright   : 
// Description : Savings Account in C++, Ansi-style
//============================================================================

#include "SavingsAccount.h"
#include <iostream>
using std::cout;
using RamViswanathan::SavingsAccount;

int main() {

	SavingsAccount::setAnnualInterestRate(-3.5); //Invalid interest balance for sa1,

	SavingsAccount sa1(200.5);					//valid account balance
	cout<<"\nCurrent balance in Account#1 is: "<<sa1.getSavingsBalance()<<"\n";
	sa1.applyMonthlyInterest();					//No interest earned because interest is 0%
	sa1.displayBalance();

	SavingsAccount::setAnnualInterestRate(6.0);	//Valid Interest rate for sa2, sa3

	SavingsAccount sa2(-200.8);						//Invalid Balance
	cout<<"\nCurrent balance in Account#2 is: "<<sa2.getSavingsBalance()<<"\n";
	sa2.applyMonthlyInterest();					//No interest earned because balance is 0
	sa2.displayBalance();

	SavingsAccount sa3(1000.0);					//Valid Balance
	cout<<"\nCurrent balance in Account#3 is: "<<sa3.getSavingsBalance()<<"\n";
	for (int i=0;i<5;i++){
		sa3.applyMonthlyInterest();				//Interest earned at rate of 6/12=0.5% monthly
		sa3.displayBalance();
	}
	return 0;
}
