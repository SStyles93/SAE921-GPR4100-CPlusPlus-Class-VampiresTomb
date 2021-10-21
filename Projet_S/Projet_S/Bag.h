#pragma once
#include <vector>
#include "Item.h"
class Bag
{
protected:
	std::vector<Item> Items;
public:
	void AddItem(Item& item)
	{
		Items.push_back(item);
	}
	void RemoveItem(Item& item)
	{
		auto it = Items.begin();

		while(it != Items.end())
		{
			if(*it == item)
			{
				Items.erase(it);
			}
		}
	}
};

