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
#include "Story.h"
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

int main()
{
	// Basic Setup of the window
	sf::RenderWindow window(sf::VideoMode(3096, 1920), "Vamipre's Tomb");
	// Vertical sync, framerate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(30);
	//random seed
	srand(time(nullptr));

	Story story;
	Chapter chapt1("data/sprites/Vampire.jpg",
		"This is the first chapter");
	Chapter chapt2("data/sprites/wall.jpg",
		"This is the second chapter");
	Enemy enemy1("The boss", 10);
	Combat combat1("data/sprites/Vampire.jpg",
		"This is the first combat",
		enemy1, 5, 2);
	story.AddChapter(chapt1);
	story.AddChapter(combat1);
	story.AddChapter(chapt2);

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

		//GetInput
		//Update
		
		//Render:
		// Graphical Region
		/*window.clear(sf::Color::Black);*/
		//window.draw(something to draw);
		chapt1.Draw(window);
		// Window Display
		/*window.display();*/

	}
}
