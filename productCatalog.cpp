#include "productCatalog.h"
#include <iostream>

catalogEntry::catalogEntry(std::string product, std::string code, double price)
{
    this->product = product;
    this->code = code;
    this->price = price;
}

void catalogEntry::displayEntry()
{
    std::cout << "Product" << "|" << "Code" << "|" << "Price\n ";
    std::cout << product << "|" << code << "|" << price << "\n";
}

void productCatalog::addEntry(catalogEntry newEntry)
{
    entries.push_back(newEntry);
}

void productCatalog::showCatalog()
{
    for( int i = 0; i < entries.size(); i++)
    {
        entries[i].displayEntry();
    }
}

std::string productCatalog::getCode(int i)
{
    return entries[i].code;
}

double productCatalog::getPrice(int i)
{
    return entries[i].price;
}

int productCatalog::getSize()
{
    return entries.size();
}