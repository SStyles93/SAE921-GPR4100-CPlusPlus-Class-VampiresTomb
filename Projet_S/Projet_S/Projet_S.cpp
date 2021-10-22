#include <algorithm>
#include <iostream>
#include "Bag.h"
#include "Item.h"
#include "Armor.h"
#include "Other.h"
#include "Weapon.h"

int main()
{
	Item test("I");
	Bag bag;
	bag.AddItem(test);
	Weapon weapon("Am");
	bag.AddItem(weapon);
	Armor armor("not");
	bag.AddItem(armor);
	Other other("Working");
	bag.AddItem(other);
	bag.RemoveItem(armor);

	bag.PrintAllItems();
	

}
