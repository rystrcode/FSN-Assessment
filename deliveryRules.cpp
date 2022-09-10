#include "deliveryRules.h"

/*
    deliveryRule Constructor

    sinks the parameter values into the associated atribute

    params:
        maxTotal - values under this are associated with the delivery cost 
        paired with this attribute
        cost - the cost of delivery
*/

deliveryRule::deliveryRule(double maxTotal, double cost)
{
    this->maxTotal = maxTotal;
    this->cost = cost;
}

/*
    addRule

    pushes the new rule into rules vector

    params:
        newRule - the max value and delivery cost rule to be added
*/

void deliveryRules::addRule(deliveryRule newRule)
{
    rules.push_back(newRule);
}

/*
    getPriceByRules

    uses the vector of rules to check the subtotal against the maximum values
    of each rule, and if it is less then it falls under that rule and recieves
    the associted cost. example: if max total is 50 and subtotal is 49.50, then
    delivery cost that is part of rule with max total is applied.

    params:
        subtotal - the raw price of the flowers totaled ( after offers applied)
*/

double deliveryRules::getPriceByRules(double subtotal)
{
    double deliveryCost = 0;

    for( int i = 0; i < rules.size(); i++)
    {
        if( subtotal < rules[i].maxTotal )
        {
            deliveryCost = rules[i].cost;
            i = rules.size(); // end for loop
        }
    }

    return subtotal + deliveryCost;
}