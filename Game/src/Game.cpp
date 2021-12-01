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

bool gameStarted = false;

int main()
{
	sf::Color backgroundColor(sf::Color::Blue);




	//*****************************************************SET-UP*****************************************************

	// Basic Setup of the window
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Vamipre's Tomb");
	// Vertical sync, framerate
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(30);
	//random seed
	srand(time(nullptr));

	//*****************************************************INIT*******************************************************
	Story story;
	Bag bag;
	Player player("Hero", story.DiceRoll() + story.DiceRoll(), "No sprite");

	//Title
	Chapter Title("data/sprites/Vampire/Title.png",
		"Vamipre's Tomb");
	//Title.SetFontSize(80);
	Title.SetFontSize(100);
	Title.SetFontPosition(0.35f, 0.1f);
	story.AddChapter(Title);

	//TODO: Replace currentChapter by the story chapter (pass by ref);
	story.m_currentChapter = story.GetChapter(story.m_currentChapterIndex);
	
	//"Door": first selection
	Chapter door("data/sprites/Background/1.jpg",
		"You arrive in front of a door");
	door.SetSelection(true);

	//"The hidden entrance": shortcut with "garlic"
	Chapter trap("data/sprites/Background/Black.bmp",
		"You find a little trap");
	
	//"House": is an "End" chapter
	Chapter house
	("data/sprites/Background/2.png",
		"You arrive near a little house...");
	house.SetEnd(true);

	//"Dungeon" is a combat
	Chapter dungeon("data/sprites/Background/3.png",
		"You arrive in a dungeon...");

	door.AddNextChapter(trap);
	door.AddNextChapter(house);
	door.AddNextChapter(dungeon);
	story.AddChapter(door);

	//The Boss
	Enemy boss("Vampire", 10, "data/sprites/Vampire/2.png");
	//Boss fight
	Combat BossFight("data/sprites/Background/4.png",
		"You arrive in a boss fight", boss, player, 10, 10);
	story.AddChapter(BossFight);

//*****************************************************INPUTS**************************************************
	
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
//*****************************************************RENDER*****************************************************
					if (gameStarted)
					{

						if (story.m_currentChapter.IsSelection())
						{
							//EVENT TRY
							/*if (event.key.code == sf::Keyboard::Num1) story.m_currentChapter.m_nextChapterIndex = 1;
							if (event.key.code == sf::Keyboard::Num2) story.m_currentChapter.m_nextChapterIndex = 2;
							if (event.key.code == sf::Keyboard::Num3) story.m_currentChapter.m_nextChapterIndex = 3;*/
							story.m_currentChapter = story.m_currentChapter.Select(window);
						}
						else if (story.m_currentChapter.IsCombat())
						{
							//TODO: Launch a Combat selection input method to select between actions
						}
						else if (story.m_currentChapter.IsEnd()) 
						{
							std::cout << "You where killed\n";
							//TODO : Method to kill player and explain why
						}
						else
						{
							//Normal case where there is only one nextChapter
							story.m_currentChapterIndex++;
							story.m_currentChapter = story.GetChapter(story.m_currentChapterIndex);
							story.m_currentChapter.Draw(window);
						}
					}
				}
					break;

			default:
				break;
			}


		}
		
		//First Draw of the game, displays Title
		if (!gameStarted) {
			Title.Draw(window);
			gameStarted = true;
		}
	}
}
