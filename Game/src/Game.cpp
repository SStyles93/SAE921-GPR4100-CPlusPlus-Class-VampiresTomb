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

bool gameStarted = true;

int main()
{
	sf::Color backgroundColor(sf::Color::Blue);

	Chapter currentChapter;
	int currentChapterIndex = 1;

	//*****************************************************SET-UP*****************************************************
	
	// Basic Setup of the window
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Vamipre's Tomb");
	// Vertical sync, framerate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(30);
	//random seed
	srand(time(nullptr));

	//*****************************************************INIT*****************************************************
	Story story;
	Player player("Hero", story.DiceRoll() + story.DiceRoll(), "No sprite");

	//Title
	Chapter Title("data/sprites/Vampire/Title.png",
		"Vamipre's Tomb");
	//Title.SetFontSize(80);
	Title.SetFontSize(100);
	Title.SetFontPosition(0.3f, 0.1f);
	story.AddChapter(Title);
	currentChapter = story.GetChapter(currentChapterIndex);
	
	//"Door": first selection
	Chapter door("data/sprites/Background/1.jpg",
		"You arrive in front of a door");
	door.SetSelection(true);
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
			case sf::Event::KeyReleased:
				if (event.key.code == sf::Keyboard::Enter)
				{
					if (gameStarted) break;
//*****************************************************RENDER*****************************************************
					if (currentChapter.IsSelection())
					{
						//TODO: Launch a Selection input method to select Chapters& in the chapter vector
						
					}
					else if (currentChapter.IsCombat()) 
					{
						//TODO: Launch a Combat selection input method to select between actions
					}
					else 
					{
						//Normal case where there is only one nextChapter
						currentChapterIndex++;
						currentChapter = story.GetChapter(currentChapterIndex);
						currentChapter.Draw(window);
					}	
				}
				break;

			default:
				break;
			}

		}
		
		//First Draw of the game, displays Title
		if (gameStarted) {
			Title.Draw(window);
			gameStarted = false;
		}
	}
}
