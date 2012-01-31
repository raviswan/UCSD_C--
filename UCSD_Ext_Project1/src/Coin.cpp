/*
* Vending Machine Project
* CSE-40477
*
* Coin.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "Coin.h"

Project1::Coin::Coin(CoinType denomination)
    : denomination(denomination)
{
}

Project1::Coin::CoinType
Project1::Coin::getDenomination() const
{
    switch(denomination){
    case COINTYPE_PENNY:
    	return Coin::COINTYPE_PENNY;
    case COINTYPE_NICKEL:
    	return Coin::COINTYPE_NICKEL;
    case COINTYPE_DIME:
    	return Coin::COINTYPE_DIME;
    case COINTYPE_QUARTER:
    	return Coin::COINTYPE_QUARTER;
    case COINTYPE_HALF_DOLLAR:
    	return Coin::COINTYPE_HALF_DOLLAR;
    case COINTYPE_DOLLAR:
    	return Coin::COINTYPE_DOLLAR;
    default:
    	return Coin::COINTYPE_WOODEN_NICKEL;
    }

}

unsigned
Project1::Coin::getValueCents() const
{
	//Local variable to store the denomination value in cents
	unsigned valCents = 0;
	switch(denomination){
	case COINTYPE_PENNY:
		valCents = 1;
		break;
	case COINTYPE_NICKEL:
		valCents = 5;
		break;
	case COINTYPE_DIME:
		valCents = 10;
		break;
	case COINTYPE_QUARTER:
		valCents = 25;
		break;
	case COINTYPE_HALF_DOLLAR:
		valCents = 50;
		break;
	case COINTYPE_DOLLAR:
		valCents = 100;
		break;
	default:
		valCents = 0;
		break;
	    }
    return valCents;
}
