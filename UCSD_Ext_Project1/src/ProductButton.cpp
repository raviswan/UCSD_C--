/*
* Vending Machine Project
* CSE-40477
*
* ProductButton.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcpy;

#include "ProductButton.h"

Project1::ProductButton::ProductButton(const char *name,
    ProductRack &productRack)
    : productRack(productRack)
{
	if(productRack.isCompatibleProduct(name)){
		strcpy(this->name,name);
	}

}

bool
Project1::ProductButton::press()
{
    return (productRack.deliverProduct());
}

const char *
Project1::ProductButton::getName() const
{
    return  name;
}

unsigned
Project1::ProductButton::getProductPriceCents() const
{
    // TO DO:  Implement
    return productRack.getProductPriceCents();
}
