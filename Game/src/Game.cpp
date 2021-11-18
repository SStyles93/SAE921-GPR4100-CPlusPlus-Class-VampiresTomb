#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "Armor.h"
#include "Bag.h"
#include "Chapter.h"
#include "Combat.h"
#include "Enemy.h"
#include "Item.h"
#include "Other.h"
#include "Player.h"
#include "Weapon.h"

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"

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

int DiceRoll()
{

	int dice1 = (1 + rand() % 6);
	return dice1;
}

int main()
{
	// Basic Setup of the window
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Vamipre's Tomb");
	// Vertical sync, framerate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(30);
	//random seed
	srand(time(nullptr));

	Chapter chapt1("C:/SAE/921/GPR/SAE921-GPR4100-CPlusPlus-Class-VampiresTomb/Game/data/sprites/wall.jpg", "This is the first chapter");
	Chapter chapt2("C:/SAE/921/GPR/SAE921-GPR4100-CPlusPlus-Class-VampiresTomb/Game/data/sprites/wall.jpg", "This is the second chapter");
	chapt1.AddChapter(chapt2);
	
	while (window.isOpen())
	{

		// on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
		sf::Event event;

		while (window.pollEvent(event))
		{

			switch(event.type)
			{

			// évènement "fermeture demandée" : on ferme la fenêtre
			case sf::Event::Closed:
				window.close();
				break;

			default:
				break;
			}

		}

		// Graphical Region
		/*window.clear(sf::Color::Black);*/
		//window.draw(something to draw);
		chapt1.Draw(window);
		chapt1.DrawNextChapter(window);
		// Window Display
		/*window.display();*/

	}
	/*Player player(
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
	Enemy enemy1(10, 10, "boss");
	Combat combat("This is a boss fight", enemy1, 10, 10);*/
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
