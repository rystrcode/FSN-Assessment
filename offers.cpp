#include "offers.h"
#include <cmath>

/*
    applyOffers

    applies the intial offer "Buy one red flower, get second half off", which
    is done by subtracting half the price of the flower purchased from the
    subtotal for every two purchases of red flowers. Note: would have to
    use non-static price if there were more than one red flower type.

    params:
        subtotal - the raw price of the flowers totaled
        productsInCart - the vector of flowers that are being purchased
*/

double offers::applyOffers(double subtotal, std::vector<std::string> productsInCart)
{
    int purchasesOfRed = 0;

    for(int i = 0; i < productsInCart.size(); i++)
    {
        // if product code start with R, then it is red flower
        if( productsInCart[i].at(0) == 'R' ) 
        {
            purchasesOfRed++;
        }
    }

    subtotal = subtotal - ( (purchasesOfRed / 2) * (32.95 / 2));

    // bring up first two decimals then truncate rest, then decimals back into place
    subtotal =  floor(subtotal / .01 ) / 100; 

    return subtotal;
}