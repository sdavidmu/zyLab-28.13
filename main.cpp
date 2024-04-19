#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

int main () {

  ItemToPurchase item;
  ItemToPurchase item2;

  string item1Name;
  int item1Price;
  int item1Quantity;
  string item2Name;
  int item2Price;
  int item2Quantity;

  cout << "Item 1" << endl;
  cout << "Enter the item name: " << endl;
  getline(cin, item1Name);
  item.SetName(item1Name);
  cout << "Enter the item price: " << endl;
  cin >> item1Price;
  item.SetPrice(item1Price);
  cout << "Enter the item quantity: " << endl;
  cin >> item1Quantity;
  item.SetQuantity(item1Quantity);

  cin.ignore();

  cout << "Item 2" << endl;
  cout << "Enter the item name: " << endl;
  getline(cin, item2Name);
  item2.SetName(item2Name);
  cout << "Enter the item price: " << endl;
  cin >> item2Price;
  item2.SetPrice(item2Price);
  cout << "Enter the item quantity: " << endl;
  cin >> item2Quantity;
  item2.SetQuantity(item2Quantity);
  
  cout << "TOTAL COST" << endl;
  cout << item.GetName() << " " << item.GetQuantity() << "@ $" << item.GetPrice() << " = $" << item.GetPrice() * item.GetQuantity() << endl; 
  cout << item2.GetName() << " " << item2.GetQuantity() << "@ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl; 
  cout << endl;
  cout << "Total: $" << (item.GetPrice() * item.GetQuantity() + item2.GetPrice() * item2.GetQuantity()) << endl;

  return 0;
}
