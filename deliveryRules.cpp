#include "deliveryRules.h"

double deliveryRules::getPriceByRules(double subtotal)
{
    double deliveryCost = 0;

    if(subtotal < 50)
    {
        deliveryCost = 4.95;
    }
    else if(subtotal < 90)
    {
        deliveryCost = 2.95;
    }

    return subtotal + deliveryCost;
}