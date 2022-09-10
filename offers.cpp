#include "offers.h"

double offers::applyOffers(double subtotal, std::vector<std::string> productsInCart)
{
    int purchasesOfRed = 0;

    for(int i = 0; i < productsInCart.size(); i++)
    {
        if( productsInCart[i].at(0) == 'R' ) // if product code start with R, then it is red flower
        {
            purchasesOfRed++;
        }
    }

    if( purchasesOfRed != 0 ) // if more than one purchase then offer available
    {
        subtotal = subtotal - ( (purchasesOfRed / 2) * (32.95 / 2) ); // reduce subtotal by half of Reds value
    }

    return subtotal;
}