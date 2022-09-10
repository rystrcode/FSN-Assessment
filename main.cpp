#include "productCatalog.h"
#include "deliveryRules.h"
#include "offers.h"
#include "cart.h"
#include <iostream>

int main()
{
    catalogEntry entry1 = catalogEntry("Red Flower", "RF1", 32.95);
    catalogEntry entry2 = catalogEntry("Green Flower", "GF1", 24.95);
    catalogEntry entry3 = catalogEntry("Blue Flower", "BF1", 7.95);

    productCatalog catalog;
    catalog.addEntry(entry1);
    catalog.addEntry(entry2);
    catalog.addEntry(entry3);

    catalog.showCatalog();

    deliveryRules rules;

    std::cout << rules.getPriceByRules(3) << "\n";
    std::cout << rules.getPriceByRules(50) << "\n";
    std::cout << rules.getPriceByRules(90) << "\n";

    offers specialOffer;

    cart cart1 = cart(catalog,rules,specialOffer);
    cart cart2 = cart(catalog,rules,specialOffer);
    cart cart3 = cart(catalog,rules,specialOffer);
    cart cart4 = cart(catalog,rules,specialOffer);

    cart1.addItemToCart("BF1");
    cart1.addItemToCart("GF1");

    cart2.addItemToCart("RF1");
    cart2.addItemToCart("RF1");

    cart3.addItemToCart("RF1");
    cart3.addItemToCart("GF1");

    cart4.addItemToCart("BF1");
    cart4.addItemToCart("BF1");
    cart4.addItemToCart("RF1");
    cart4.addItemToCart("RF1");
    cart4.addItemToCart("RF1");

    std::cout << "\n Total: " << cart1.getTotal() << "\n\n";
    std::cout << "\n Total: " << cart2.getTotal() << "\n\n";
    std::cout << "\n Total: " << cart3.getTotal() << "\n\n";
    std::cout << "\n Total: " << cart4.getTotal() << "\n\n";

}