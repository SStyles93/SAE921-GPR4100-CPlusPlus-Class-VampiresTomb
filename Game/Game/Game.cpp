#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "Armor.h"
#include "Bag.h"
#include "Chapter.h"
#include "Enemy.h"
#include "Item.h"
#include "Other.h"
#include "Player.h"
#include "Selection.h"
#include "Weapon.h"

int DiceRoll()
{

	int dice1 = (1 + rand() % 6);
	return dice1;
}

void ClearConsole()
{
#if defined _WIN32
	system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
	system("clear");
#elif defined (__APPLE__)
	system("clear");
#endif
}

int main()
{
	srand(time(nullptr));
	
	Player player(
		DiceRoll() + DiceRoll() + 20,
		0, DiceRoll() + 3,
		DiceRoll() + 3,
		0, "Default");

	player.SetName();
	Chapter chapter1("Hello," + player.GetName() +" your journey starts here hero, are you ready ?");
	Selection firstSelection("You have the choise between\n 1) Crossing a bridge\n 2) Climbing a wall\n 3) Staying at the same place");
	Chapter chapter2("You have crossed the bridge");
	Chapter chapter3("You climb the wall in front of you ");
	Chapter chapter4("You decide to stay and get killed by a monster");
	firstSelection.AddChapter(chapter2);
	firstSelection.AddChapter(chapter3);
	firstSelection.AddChapter(chapter4);
	std::cout << chapter1.GetContent() << std::endl;
	std::cout << firstSelection.GetContent() << std::endl;
	std::cout << firstSelection.Select() << std::endl;

	////PLAYER TEST
	//std::cout << player.GetHealthPoints() << std::endl;
	//std::cout << player.GetAttack() << std::endl;
	//std::cout << player.GetPsi() << std::endl;
	//std::cout << player.GetAgility() << std::endl;
	//std::cout << player.GetGold() << std::endl;
	//std::cout << player.GetName() << std::endl;

	//Item test("I");
	//Bag bag;
	//bag.AddItem(test);
	//Weapon weapon("Am");
	//bag.AddItem(weapon);
	//Armor armor("not");
	//bag.AddItem(armor);
	//Other other("Working");
	//bag.AddItem(other);
	//bag.RemoveItem(armor);

	//bag.PrintAllItems();
	////Test 
	//Chapter chapter1("Test1");
	//Chapter chapter2("Test2");
}
