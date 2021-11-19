#pragma once
#include <iostream>
#include <vector>
#include "Item.h"

class Bag
{
protected:
	std::vector<Item> Items;
public:

#pragma region Methods
	
	void AddItem(Item& item);
	void RemoveItem(Item& item);
	void PrintAllItems();
	std::vector<Item> GetItems() const;

#pragma endregion

};


