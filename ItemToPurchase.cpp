#include <iostream>
using namespace std;
#include "ItemToPurchase.h"

// ItemToPurchase constructor
ItemToPurchase::ItemToPurchase(string itemName="none", int itemPrice=0, int itemQuantity=0) {   
    this->itemName = itemName;
    this->itemPrice = itemPrice;
    this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetName(string name) {
    this->itemName = name;
}

string ItemToPurchase::GetName() {
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    this->itemPrice = price;
}

int ItemToPurchase::GetPrice() {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
    this->itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}

