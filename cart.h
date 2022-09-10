#ifndef CART_H
#define CART_H

#include <string>
#include <vector>
#include <iostream>
#include "productCatalog.h"
#include "deliveryRules.h"
#include "offers.h"

/*
    The cart has the catalog, rules, and offers and uses those to properly
    total the cost of the flowers currently in the cart. the cart also has
    the ability to add flowers into the cart.
*/

class cart 
{
    public:

    cart(productCatalog catalog, deliveryRules rules, offers specialOffers);
    void addItemToCart(std::string productCode);
    double getTotal();

    void displayCart();

    private:
    
    std::vector<std::string> productsInCart;
    double subtotal = 0;

    productCatalog catalog;
    deliveryRules rules;
    offers specialOffers;
};

#endif