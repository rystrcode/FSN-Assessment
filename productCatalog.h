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

/*
    class that functions as container for a table of catalog 
    entries with abilty to grow
*/

class productCatalog
{
    public:
        void addEntry(catalogEntry newEntry); // stores entry into vector
        void showCatalog();

        // accessors for price and product code
        std::string getCode(int i ); 
        double getPrice(int i);
        
        int getSize(); // get number of entries in catalog


        std::vector<catalogEntry> entries; // container for series of entries
};

#endif