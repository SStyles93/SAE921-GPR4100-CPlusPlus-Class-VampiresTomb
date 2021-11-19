#include "Bag.h"

#pragma region Methods

//Adds an Item to the Items with push_back()
void Bag::AddItem(Item& item)
{
	Items.push_back(item);
}
//Removes an Item from the Items
void Bag::RemoveItem(Item& item)
{
	auto it = Items.begin();
	//Loops through the bag
	while (it != Items.end())
	{
		//compares with item value
		if (*it == item)
		{
			Items.erase(it);
			break;
		}
		++it;
	}

}
//Loops through Items to GetName()
void Bag::PrintAllItems()
{
	for (int index = 0; index < Items.size(); index++)
	{
		std::cout << Items[index].GetName() << std::endl;
	}
}
//Returns the Items vector
std::vector<Item> Bag::GetItems() const
{
	return Items;
}

#pragma endregion 