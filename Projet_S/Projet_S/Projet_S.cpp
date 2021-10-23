#include <algorithm>
#include <iostream>
#include "Armor.h"
#include "Bag.h"
#include "Chapter.h"
#include "Other.h"
#include "Item.h"
#include "Story.h"
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
	//TEST
	//Chapter chapter1("Introduction");
	//Chapter chapter2("Dice roll");
	//Story story;
	//story.AddChapter(chapter1);
	//story.AddChapter(chapter2);
	//std::cout << story.GetContent(1);

}
