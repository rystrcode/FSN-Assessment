#ifndef PRODUCT_CATALOG_H
#define PRODUCT_CATALOG_H

#include <string>
#include <vector>

// class containing the product name, code, and price.
class catalogEntry
{
    public: 
        catalogEntry(std::string product, std::string code, double price);
        void displayEntry();

        std::string product; // product name
        std::string code; // product code
        double price;
};

// class that functions as container for a table of catalog entries with abilty to grow
class productCatalog
{
    public:
        void addEntry(catalogEntry newEntry);
        void showCatalog();

        std::string getCode(int i );
        double getPrice(int i);
        int getSize();


        std::vector<catalogEntry> entries;
};

#endif