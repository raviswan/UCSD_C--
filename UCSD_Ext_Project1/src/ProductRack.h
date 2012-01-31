/*
* Vending Machine Project
* CSE-40477
*
* ProductRack.h
* YOU MUST NOT CHANGE THIS FILE.
*/
#ifndef PROJECT1_PRODUCTRACK_H
#define PROJECT1_PRODUCTRACK_H

#include "DeliveryChute.h"
#include "Product.h"

namespace Project1
{
    //=========================================================================
    // SUMMARY
    //      A rack to hold a pre-determined number of products all of the same
    //      type.  The rack has access to a delivery chute into which products
    //      may be dropped.
    // 
    // RESOURCES
    //      A product rack owns (i.e. is responsible for freeing the memory of)
    //      all products that are inserted into the rack.  The product rack
    //      relinquishes ownership of all products that are removed from the
    //      rack.
    //=========================================================================
    class ProductRack
    {
    public:
        static const int MAX_PRODUCTS = 5;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Constructor.  Create a product rack to hold products with the
        //      allowed product name.  The product rack will hold a maximum
        //      number of products given by the productCapacity parameter.  The
        //      product rack will deliver products into the given delivery
        //      chute.  The price of each product in the rack is given by the
        //      productPriceCents parameter.
        //
        // RESOURCES
        //      The product rack is initialized to not own any products.
        //
        // PARAMETERS
        //      allowedProductName
        //          Products added to this rack must have this name.
        //      productCapacity
        //          The maximum number of products that can be added to this
        //          rack.
        //      deliveryChute
        //          The delivery chute to which products will be delivered by
        //          this rack.
        //      productPriceCents
        //          The price of each product contained within this rack.
        //
        // RETURNS
        //      Nothing
        //---------------------------------------------------------------------
        ProductRack(
            const char *allowedProductName,
            DeliveryChute &deliveryChute,
            unsigned productPriceCents);

        //---------------------------------------------------------------------
        // SUMMARY
        //      Destructor.  Destroy the product rack.
        //
        // RESOURCES
        //      All owned products are freed.
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Nothing
        //---------------------------------------------------------------------
        ~ProductRack();

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return whether the given product name matches the name of
        //      products allowed to be stored in this rack.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Whether the given product name matches the name of products
        //      allowed to be stored in this rack.
        //---------------------------------------------------------------------
        bool isCompatibleProduct(const char *productName) const;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return whether this rack contains zero products.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Whether this rack contains zero products.
        //---------------------------------------------------------------------
        bool isEmpty() const;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return whether this rack contains a number of products equal to
        //      this rack's maximum product capacity.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Whether this rack contains a number of products equal to this
        //      rack's maximum product capacity.
        //---------------------------------------------------------------------
        bool isFull() const;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Add the given product to the rack if the rack is not full and
        //      the product name matches the allowed product name of this rack.
        //
        // RESOURCES
        //      The rack takes ownership of the product if and only the product
        //      was successfully added to the rack.
        //
        // PARAMETERS
        //      pProduct
        //          The product to be added to the rack.
        //
        // RETURNS
        //      Whether the product was added to the rack.
        //---------------------------------------------------------------------
        bool addProduct(Product* pProduct);

        //---------------------------------------------------------------------
        // SUMMARY
        //      Drop the next product from the rack into the delivery chute if
        //      the delivery chute is empty and the rack is not empty.
        //
        // RESOURCES
        //      The rack relinquishes ownserhip of the product if and only if
        //      the next product was successfully dropped into the delivery
        //      chute.
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      Whether the next product was successfully dropped into the
        //      delivery chute.
        //---------------------------------------------------------------------
        bool deliverProduct();

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return the number of products in the rack.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      The number of products in the rack.
        //---------------------------------------------------------------------
        unsigned getNumProductsInRack() const;

        //---------------------------------------------------------------------
        // SUMMARY
        //      Return the price (in cents) of the products contained by this
        //      rack.
        //
        // RESOURCES
        //      None
        //
        // PARAMETERS
        //      None
        //
        // RETURNS
        //      The price (in cents) of the products contained by this rack.
        //---------------------------------------------------------------------
        unsigned getProductPriceCents() const;

    private:
        char allowedProductName[Product::MAX_NAME_LENGTH];
        DeliveryChute &deliveryChute;
        Product *products[MAX_PRODUCTS];
        unsigned productCount;
        unsigned productPriceCents;
    };
}

#endif
