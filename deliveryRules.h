#ifndef DELIVERY_RULES_H
#define DELIVERY_RULES_H

#include <vector>
#include <string>


class deliveryRule
{
    public:
    deliveryRule(double maxTotal, double cost);

    double maxTotal; // totals under this fall under this rule
    double cost; // this the cost according to the rule
};

class deliveryRules
{
    public:
        void addRule(deliveryRule);
        double getPriceByRules(double subtotal);

    std::vector<deliveryRule> rules; // vector that contains all the rules
};

#endif