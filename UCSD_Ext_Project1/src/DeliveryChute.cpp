/*
* Vending Machine Project
* CSE-40477
*
* DeliveryChute.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "DeliveryChute.h"

Project1::DeliveryChute::DeliveryChute()
    : pProduct(0)
{
}

Project1::DeliveryChute::~DeliveryChute()
{
    delete pProduct;
}

bool
Project1::DeliveryChute::containsProduct() const
{
	//chute has a product
    if(pProduct){
    	return true;
    }
    //chute has no product
    else if(pProduct == 0){
    	return false;
    }

}

bool
Project1::DeliveryChute::insertProduct(Product *pProduct)
{
	//If chute contains no product, add the product
    if(!containsProduct()){
    	this->pProduct = pProduct;
    	return true;
    }
    else{
    	return false;
    }

}

Project1::Product *
Project1::DeliveryChute::retrieveProduct()
{
	Product *tempProduct;

    if(pProduct){
    	tempProduct=pProduct;
    	pProduct=0;
    	return tempProduct;
    }
    else{
    	 return 0;
    }

}
