#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
#include <iostream>
using namespace std;

class ItemToPurchase {
    public:
        ItemToPurchase(string itemName="none", int itemPrice=0, int itemQuantity=0);

        string GetName();
        void SetName(string name);

        int GetPrice();
        void SetPrice(int price);

        int GetQuantity();
        void SetQuantity(int quantity);

    private:
        string itemName;
        int itemPrice; 
        int itemQuantity;

};

#endif