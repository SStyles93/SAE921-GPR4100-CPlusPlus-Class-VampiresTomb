#include "Story.h"

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
	//*****************************************************SET-UP*****************************************************
	
	// Basic Setup of the window
	sf::RenderWindow window(sf::VideoMode(3096, 1920), "Vamipre's Tomb");
	// Vertical sync, framerate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(30);
	//random seed
	srand(time(nullptr));

	//*****************************************************INIT*****************************************************
	Story story;
	Player player("Name", story.DiceRoll() + story.DiceRoll(), "No sprite");

	//Title
	Chapter Title("data/sprites/Vampire/Title",
		"This is the first chapter");
	story.AddChapter(Title);

	//"Door": first selection
	Chapter door("data/sprites/Background/1.jpg",
		"You arrive in front of a door");
	story.AddChapter(door);

	//"The hidden entrance": shortcut with "garlic"
	Chapter trap("data/sprites/Background/Black.bmp",
		"You find a little trap");
	story.AddChapter(trap);

	//"House": is an "End" chapter
	Chapter house
	("data/sprites/Background/2.png",
		"You arrive near a little house...");
	story.AddChapter(house);

	//"Dungeon" is a combat
	Chapter dungeon("data/sprites/Background/3.png",
		"You arrive in a dungeon...");
	story.AddChapter(dungeon);

	door.AddNextChapter(trap);
	door.AddNextChapter(house);
	door.AddNextChapter(dungeon);
	door.Select(window);

	//The Boss
	Enemy boss("Vampire", 10, "data/sprites/Vampire/2.png");
	//Boss fight
	Combat BossFight("data/sprites/Background/4.png",
		"You arrive in a boss fight", boss, 10, 10);

	//*****************************************************INPUTS*****************************************************
	
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
		
		//*****************************************************UPDATE*****************************************************
		


		//*****************************************************RENDER*****************************************************
		
		// Graphical Region
		window.clear(sf::Color::Black);
		//window.draw(something to draw);
		story.GetChapter().Draw(window);
		// Window Display
		window.display();

	}
}
