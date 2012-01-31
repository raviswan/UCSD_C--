/*
* Vending Machine Project
* CSE-40477
*
* ProductButton.h
* YOU MUST NOT CHANGE THIS FILE.
*/
#ifndef PROJECT1_PRODUCTBUTTON_H
#define PROJECT1_PRODUCTBUTTON_H

#include "Product.h"
#include "ProductRack.h"

namespace Project1
{
    //=========================================================================
    // SUMMARY
    //      A button labeled with the name of the product that will be
    //      delivered when the button is pressed.  Pressing the button causes
    //      the associated product rack to deliver one of its products.
    //
    // RESOURCES
    //      A product button does not own any resources.
    //=========================================================================
    class ProductButton
    {
    public:
        //---------------------------------------------------------------------
        // SUMMARY
        //      Constructor.  Create a product button with the given product
        //      label associated with the given product rack.  When the button
        //      is pressed the given product rack will deliver one of its
        //      products.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      name
        //          The name of the product that will be delivered when the
        //          button is pressed.  This name should match the name of
        //          the product stored in the product rack to which this
        //          button is connected.
        //      productRack
        //          The product rack that will deliver a product when the
        //          button is pressed.
        //
        // RETURNS
        //      Nothing
        //---------------------------------------------------------------------
        ProductButton(const char *name, ProductRack &productRack);

        //---------------------------------------------------------------------
        // SUMMARY
        //      Cause the associated product rack to deliver its next available
        //      product.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Whether the product rack was able to deliver a product.
        //---------------------------------------------------------------------
        bool press();

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return the product name of this button.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      The product name of this button.
        //---------------------------------------------------------------------
        const char *getName() const;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return the price of products in the associated product rack.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      The price of products in the associated product rack.
        //---------------------------------------------------------------------
        unsigned getProductPriceCents() const;

    private:
        char name[Product::MAX_NAME_LENGTH];
        ProductRack &productRack;
    };
}

#endif
