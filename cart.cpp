#include "cart.h"

cart::cart(productCatalog catalog, deliveryRules rules, offers specialOffers)
{
    this->catalog = catalog;
    this->rules = rules;
    this->specialOffers = specialOffers;
}

void cart::addItemToCart(std::string productCode)
{
    for(int i = 0; i < catalog.getSize(); i++)
    {
        if( productCode == catalog.getCode(i) )
        {
            subtotal = subtotal + catalog.getPrice(i);
            productsInCart.push_back(productCode);
        }
    }

}

double cart::getTotal()
{
    subtotal = specialOffers.applyOffers(subtotal, productsInCart);
    subtotal = rules.getPriceByRules(subtotal);

    return subtotal;
}
