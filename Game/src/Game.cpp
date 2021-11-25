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
	sf::Color backgroundColor(sf::Color::Blue);

	Chapter currentChapter;
	int currentChapterIndex = 1;

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
	Chapter Title("data/sprites/Vampire/Title.png",
		"This is the first chapter");
	story.AddChapter(Title);
	currentChapter = story.GetChapter(currentChapterIndex);
	
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

	//The Boss
	Enemy boss("Vampire", 10, "data/sprites/Vampire/2.png");
	//Boss fight
	Combat BossFight("data/sprites/Background/4.png",
		"You arrive in a boss fight", boss, 10, 10);
	story.AddChapter(BossFight);

	//*****************************************************INPUTS*****************************************************
	
	while (window.isOpen())
	{
		// on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
		sf::Event event;

		while (window.pollEvent(event))
		{
			sf::FloatRect visibleArea(0.0f, 0.0f, event.size.width, event.size.height);

			switch(event.type)
			{
		//***********************************************SCREEN EVENTS**************************************************
			// évènement "fermeture demandée" : on ferme la fenêtre
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::LostFocus:
				backgroundColor = sf::Color(50, 50, 150);
				break;

			case sf::Event::GainedFocus:
				backgroundColor = sf::Color(sf::Color::Blue);
				break;

			case sf::Event::Resized:
				window.setView(sf::View(visibleArea));
				break;
		
		//*****************************************************UPDATE*****************************************************
		//*****************************************************RENDER*****************************************************
			case sf::Event::KeyReleased:
				if (event.key.code == sf::Keyboard::Enter)
				{
					//window.draw(something to draw);
					currentChapter.Draw(window);
				}
				break;

			default:
				break;
			}

		}
		
		/*std::cin.get();
		currentChapter = story.GetChapter(currentChapterIndex);
		currentChapterIndex++;*/
		
		

	}
}
