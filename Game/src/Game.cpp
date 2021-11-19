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
	story.Init();

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
		/*window.clear(sf::Color::Black);*/
		//window.draw(something to draw);
		// Window Display
		/*window.display();*/

	}
}
