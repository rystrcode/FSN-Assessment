#include "cart.h"

/*
    cart Constructor

    sinks the parameter values into the associated atribute

    params:
        catalog - the catalog of products name,cost, and price
        rules - the rules for determing the cost of delivery
        specialOffers - the offers that will be applied in special circumstances
*/

cart::cart(productCatalog catalog, deliveryRules rules, offers specialOffers)
{
    this->catalog = catalog;
    this->rules = rules;
    this->specialOffers = specialOffers;
}

/*
    addItemToCart

    adds the productCode information into cart if the product code provided
    matches, when product added to cart subtotal is updated.

    params:
        productCode - code of product to be added to cart
*/

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

/*
    geTotal

    applies the offers using the offers methods, and then applies the delivery
    cost according to the rules by invoking the deliveryRules method.
    Then returns the total.
*/

double cart::getTotal()
{
    subtotal = specialOffers.applyOffers(subtotal, productsInCart);
    subtotal = rules.getPriceByRules(subtotal);

    return subtotal;
}

/*
    displayCart

    outputs the product codes currently in the cart
*/

void cart::displayCart()
{
    for(int i = 0; i < productsInCart.size(); i++)
    {
        std::cout << productsInCart[i] << " ";
    }
}