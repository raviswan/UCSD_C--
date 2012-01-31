/*
* Vending Machine Project
* CSE-40477
*
* ProductRack.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcmp;

#include "ProductRack.h"

Project1::ProductRack::ProductRack(
    const char *allowedProductName,
    DeliveryChute &deliveryChute,
    unsigned productPriceCents)
    : deliveryChute(deliveryChute),
        productCount(0),
        productPriceCents(productPriceCents)
{
	//Copy the name of the product to be stored in this rack
	if(strlen(allowedProductName) <= (signed)Product::MAX_NAME_LENGTH){
		strcpy(this->allowedProductName, allowedProductName);
	}

	//One product added, so increment count
	productCount++;
}

Project1::ProductRack::~ProductRack()
{
	//when destructor is called, destroy the products in the rack
    for(int i=0;i<=productCount;i++){
    	delete products[productCount];
    }
}

bool
Project1::ProductRack::isCompatibleProduct(const char *productName) const
{
	//If productName matches the name of the product stored in this product rack, return true
    if(!strcmp(allowedProductName,productName)){
    	return true;
    }
    else{
    	 return false;
    }

}

bool
Project1::ProductRack::isFull() const
{
	//the product count equals max allowed
	 if(productCount == ProductRack::MAX_PRODUCTS){
		 return true;
	 }
	 else{
		 return false;
	 }
}

bool
Project1::ProductRack::isEmpty() const
{
	//if there are no products and the product count equals zero
    if(products == 0 && productCount == 0){
    	return true;
    }
    else{
    	return false;
    }

}

bool
Project1::ProductRack::addProduct(Product* pProduct)
{
	//If the rack is not full AND the product name being passed matches
	//the product name on the rack, add the product
	if( !isFull() && isCompatibleProduct(pProduct->getName()) ){
		//Own the product being passed
		products[productCount] = pProduct;
		//Increment product Count by 1
		productCount++;
		return true;
	}
	else{
		return false;
	}

}

bool
Project1::ProductRack::deliverProduct()
{
	//if product Rack is not empty
    if(!isEmpty())
    {
    	//if delivery Chute is empty,
    	if(!deliveryChute.containsProduct()){
    		//try insering product in chute
    		if(deliveryChute.insertProduct(products[productCount])){
    			//product Delivered to chute,so rack doesn't have product anymore,null it
    			products[productCount] = 0;
    			// decrement product count in the rack by 1
				productCount--;
				return true;
			}
    		//inserting product in delivery chute failed
    		else{
    			return false;
    		}
    	}
    	//delivery chute contains a product
    	else{
    		return false;
    	}
    }
    //product rack is empty
    else{
    	return false;
    }

}

unsigned
Project1::ProductRack::getNumProductsInRack() const
{
    return productCount;
    return 0;
}

unsigned
Project1::ProductRack::getProductPriceCents() const
{
    return productPriceCents;
}
