#include "productCatalog.h"
#include "deliveryRules.h"
#include "offers.h"
#include "cart.h"
#include <iostream>
#include <cmath>

/*
    Main displays the main functions of the cart and its components (catalog,devlivery rules and offers)
*/

int main()
{
    // intialize the example entries 
    catalogEntry entry1 = catalogEntry("Red Flower", "RF1", 32.95);
    catalogEntry entry2 = catalogEntry("Green Flower", "GF1", 24.95);
    catalogEntry entry3 = catalogEntry("Blue Flower", "BF1", 7.95);

    // adding the entries to the catalog
    productCatalog catalog;
    catalog.addEntry(entry1);
    catalog.addEntry(entry2);
    catalog.addEntry(entry3);

    // verify catalog works
    catalog.showCatalog();

    deliveryRules rules; // intialize rules

    // adding rules in ascending order by max total
    deliveryRule under50 = deliveryRule(50,4.95);
    deliveryRule under90 = deliveryRule(90,2.95);

    rules.addRule(under50);
    rules.addRule(under90);

    // test each case to verify rules are working properly
    std::cout << "\nWhen order is 3.00 then total is : " << rules.getPriceByRules(3) << "\n";
    std::cout << "When order is 50.00 then total is : " << rules.getPriceByRules(50) << "\n";
    std::cout << "When order is 90.00 then total is : " << rules.getPriceByRules(90) << "\n";

    offers specialOffer; // intialize offers

    // intialize four different carts for each of the examples shown in document
    cart cart1 = cart(catalog,rules,specialOffer);
    cart cart2 = cart(catalog,rules,specialOffer);
    cart cart3 = cart(catalog,rules,specialOffer);
    cart cart4 = cart(catalog,rules,specialOffer);

    // fill the carts
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

    // output total of each cart

    std::cout << "\nCart 1(";
    cart1.displayCart();
    std::cout << ")Total: " << cart1.getTotal() << "\n";

    std::cout << "\nCart 2(";
    cart2.displayCart();
    std::cout << ")Total: " << cart2.getTotal() << "\n";

    std::cout << "\nCart 3(";
    cart3.displayCart();
    std::cout << ")Total: " << cart3.getTotal() << "\n";

    std::cout << "\nCart 4(";
    cart4.displayCart(); 
    std::cout << ")Total: " << cart4.getTotal() << "\n";
}