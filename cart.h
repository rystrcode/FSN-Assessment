#ifndef CART_H
#define CART_H

#include <string>
#include <vector>
#include "productCatalog.h"
#include "deliveryRules.h"
#include "offers.h"

class cart 
{
    public:

    cart(productCatalog catalog, deliveryRules rules, offers specialOffers);
    void addItemToCart(std::string productCode);
    double getTotal();

    private:
    
    std::vector<std::string> productsInCart;
    double subtotal = 0;

    productCatalog catalog;
    deliveryRules rules;
    offers specialOffers;
};

#endif