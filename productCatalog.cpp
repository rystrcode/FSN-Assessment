#include "productCatalog.h"
#include <iostream>

/*
    catalogEntry construtor

    takes a product's name, product code, and price and 
    sinks into entry atttributes

    params:
        product - stirg containing name of product
        code    - product code
        price   - the orignal price of the product
*/

catalogEntry::catalogEntry(std::string product, std::string code, double price)
{
    this->product = product;
    this->code = code;
    this->price = price;
}

/*
    displayEntry

    displays product's name ,code, and price
*/

void catalogEntry::displayEntry()
{
    std::cout << product << "|" << code << "|" << price << "\n";
}

/*
    addEntry

    takes a catalog entry and pushes it into the catalog

    params:
        newEntry - the catalog to be added
*/

void productCatalog::addEntry(catalogEntry newEntry)
{
    entries.push_back(newEntry);
}

/*
    showCatalog

    displays table of products,codes, and prices
*/

void productCatalog::showCatalog()
{
    std::cout << "Product" << "|" << "Code" << "|" << "Price\n ";
    for( int i = 0; i < entries.size(); i++)
    {
        entries[i].displayEntry();
    }
}

/*
    getCode

    returns the Product code at given index of entrie vector

    params:
        i - the index of entry to be accessed
*/

std::string productCatalog::getCode(int i)
{
    return entries[i].code;
}

/*
    getCode

    returns the Product code at given index of entrie vector

    params:
        i - the index of entry to be accessed
*/

double productCatalog::getPrice(int i)
{
    return entries[i].price;
}

/*
    getSize

    returns the number of entries in catalog
*/

int productCatalog::getSize()
{
    return entries.size();
}