#ifndef OFFERS_H
#define OFFERS_H

#include <vector>
#include <string>

// offers contains the methods needed to apply various offers
class offers
{
    public:
    
    // applies the various offers that are available based on products in cart
    double applyOffers(double subtotal, std::vector<std::string> productsInCart);
};

#endif