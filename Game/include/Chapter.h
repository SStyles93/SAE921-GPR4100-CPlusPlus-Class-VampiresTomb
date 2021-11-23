#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Chapter
{
protected:
	std::string m_spriteAdress;
	std::string m_content;

	std::vector<Chapter> m_nextChapters;
	int m_nextChapterIndex = 0;

#pragma region Graphical

	sf::Text m_text;
	sf::Font m_font;
	sf::Texture m_texture; 
	sf::Sprite m_sprite;

#pragma endregion 

public:

	int m_chapterIndex;

#pragma region Constructor

	Chapter(std::string spriteAdress, std::string content);

#pragma endregion
#pragma region Methods

	void Select(sf::RenderWindow& window);
	void Draw(sf::RenderWindow& window);
	void AddNextChapter(Chapter& chapter);

#pragma endregion

};



