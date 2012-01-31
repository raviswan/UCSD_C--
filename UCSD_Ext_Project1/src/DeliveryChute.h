/*
* Vending Machine Project
* CSE-40477
*
* DeliveryChute.h
* YOU MUST NOT CHANGE THIS FILE.
*/
#ifndef PROJECT1_DELIVERYCHUTE_H
#define PROJECT1_DELIVERYCHUTE_H

#include "Product.h"

namespace Project1
{
    //=========================================================================
    // SUMMARY
    //      The chute from which the customer can retrieve a purchased product.
    //      The chute takes ownership of any product dropped into the chute.
    //      The chute releases ownership of a product when the product iS
    //      retrieved from the chute.
    // 
    // RESOURCES
    //      A delivery chute owns (i.e. is responsible for freeing the memory
    //      of) the product that is contained within the chute.  The delivery
    //      chute relinquishes ownership of the product when the product is
    //      retrieved from the chute.
    //=========================================================================
    class DeliveryChute
    {
    public:
        //---------------------------------------------------------------------
        // SUMMARY
        //      Constructor.  Create an empty delivery chute.
        //
        // RESOURCES
        //      The chute is initialized to not own a product.
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Nothing
        //---------------------------------------------------------------------
        DeliveryChute();

        //---------------------------------------------------------------------
        // SUMMARY
        //      Destructor.  Destroy the delivery chute.
        //
        // RESOURCES
        //      The owned product is freed.
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Nothing
        //---------------------------------------------------------------------
        ~DeliveryChute();

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return whether the chute currently contains a product waiting
        //      to be retrieved.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Whether the chute currently contains a product waiting to be
        //      retrieved.
        //---------------------------------------------------------------------
        bool containsProduct() const;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Place the given product in the chute if the chute is currently
        //      empty.  Return whether the product was added to the chute.
        //
        // RESOURCES
        //      The chute takes ownership of the product if and only if the
        //      product was successfully added to the chute.
        //
        // PARAMETERS
        //      pProduct
        //          The product to be inserted into the chute.
        //
        // RETURNS
        //      Whether the product was successfully placed in the chute.
        //---------------------------------------------------------------------
        bool insertProduct(Product *pProduct);

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return the product currently in the chute.
        //
        // RESOURCES
        //      Ownership of the product is relinquished.
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      The product from the chute or 0 if no product is in the chute.
        //---------------------------------------------------------------------
        Product *retrieveProduct();

    private:
        Product *pProduct;
    };
}

#endif
