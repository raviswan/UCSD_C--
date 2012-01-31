/*
* Vending Machine Project
* CSE-40477
*
* VendingMachine.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "VendingMachine.h"

Project1::VendingMachine::VendingMachine(
    ostream &statusPanelStream,
    const char *productNames[NUM_PRODUCT_RACKS],
    unsigned productPrices[NUM_PRODUCT_RACKS])
    : statusPanel(statusPanelStream),
        numCoins(0),
        unspentMoneyCents(0)
{
    // TO DO:  Implement
}

Project1::VendingMachine::~VendingMachine()
{
    // TO DO:  Implement
}

bool
Project1::VendingMachine::insertCoin(Coin *pCoin)
{
    // TO DO:  Implement
    return false;
}

void
Project1::VendingMachine::pressSelectButton(const char *buttonLabel)
{
    // TO DO:  Implement
}

Project1::Product *
Project1::VendingMachine::retrieveProduct()
{
    // TO DO:  Implement
    return 0;
}

bool
Project1::VendingMachine::addProduct(Product *pProduct)
{
    // TO DO:  Implement
    return false;
}

unsigned
Project1::VendingMachine::getProductCount(const char *productName) const
{
    // TO DO:  Implement
    return 0;
}

unsigned
Project1::VendingMachine::countTill() const
{
    // TO DO:  Implement
    return 0;
}

unsigned
Project1::VendingMachine::getNumCoinsInCoinBox() const
{
    // TO DO:  Implement
    return 0;
}

Project1::Coin **
Project1::VendingMachine::emptyCoinBox()
{
    // TO DO:  Implement
    return 0;
}
