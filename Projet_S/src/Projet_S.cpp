#include <algorithm>
#include <iostream>
#include "Armor.h"
#include "Bag.h"
#include "Chapter.h"
#include "Other.h"
#include "Item.h"
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
	//Test 
	Chapter chapter1("Test1");
	Chapter chapter2("Test2");
}
