#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Chapter
{
protected:
	std::string m_spriteAdress;
	std::string m_content;

	std::vector<Chapter> m_nextChapters;
	int m_nextChapterIndex;

#pragma region Graphical

	sf::Text m_text;
	sf::Font m_font;
	sf::Texture m_texture; 
	sf::Sprite m_sprite;

#pragma endregion 

public:

	int m_chapterIndex = 0;

#pragma region Constructor
	Chapter();
	Chapter(std::string spriteAdress, std::string content);

#pragma endregion
#pragma region Methods

	//void Select(sf::RenderWindow& window);
	void Draw(sf::RenderWindow& window);
	//void AddNextChapter(Chapter& chapter);
	//Chapter& GetNextChapter(int index);
#pragma endregion

	//bool operator==(Chapter& chapter) const;
};



