# FSN ASSIGNMENT

## Assumptions
1. Assumed that delivery costs are applied after special offers
2. Since using static data error checking is limited.

## The objects involved

The productCatalog consists of a series of entries that contain a product's name, product code, and price. This is used by the cart to add products into the cart and use the prices to calculate the cost.

The deliveryRules consist of a series of value pairs, and the series is intended to be in ascending order. The values consist of a value that marks a change in delivery cost, and then the delivery cost for any order under that price. The object has the method getPriceByRules to take the cart's current subtotal and apply the correct delivery cost to it.

The offers conist of methods that determine if an offer is available and apply it ot the subtotal if possible.

The cart consists of the productCatalog, deliveryRules, and offers and applies its own methods to add products to the cart, while keeping the subtotal updated. It then calculates the total by first calling the method to apply the offers, and then applying the method to calculate delivery costs

## How main functions

catalog entries are created and added to a catalog, and then to test the catalog it is displayed to standard output. 

next the delivery rules are tested by creating the rules and then adding them to the deliveryRules object. The rules are then tested by making sure that the proper delivery cost is applied according to the before declared rules

Finally the cart is created and the offers are tested. The cart attempts to recreate the carts provided in the original assessment's example basket results, by adding the proper products to four different carts. Then the cart is finally totaled by first assesing the special offers. This is done by checking the carts product list for the special offer conditions. The example one being "buy one red flower, get the second half price" is determiend by examining the product code of the flowers for "R" which indicates red. Then half of every even red flowers price is then subtracted from the subtotal. The delivery cost then takes the new subtotal and compares it to the values in its ruleset. When the subtotal is less than the maxValue, the cost is equal to the cost value paired with that maxValue. when the subtotal is greater than all values in ruleset,then the delivery is free.The final subtotal is then returned so it and the current cart can be displayed.