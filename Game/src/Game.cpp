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
	story.Init(window);

	//*****************************************************INPUTS*****************************************************
	
	while (window.isOpen())
	{
		// on inspecte tous les �v�nements de la fen�tre qui ont �t� �mis depuis la pr�c�dente it�ration
		sf::Event event;

		while (window.pollEvent(event))
		{

			switch(event.type)
			{

			// �v�nement "fermeture demand�e" : on ferme la fen�tre
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
