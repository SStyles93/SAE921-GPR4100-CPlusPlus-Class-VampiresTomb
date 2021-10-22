#include <algorithm>
#include <iostream>
#include "Bag.h"
#include "Item.h"
#include "Armor.h"
#include "Other.h"
#include "Weapon.h"

int main()
{
	Item test("name");
	Bag bag;
	bag.AddItem(test);
	Weapon weapon("theWeapon");
	bag.AddItem(weapon);
	Armor armor("Armor");
	bag.AddItem(armor);
	Other other("other");
	bag.AddItem(other);
	bag.RemoveItem(test);

	bag.PrintAllItems();
	

}
