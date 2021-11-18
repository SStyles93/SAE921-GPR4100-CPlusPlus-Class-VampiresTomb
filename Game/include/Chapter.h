#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Chapter
{
protected:
	int m_chapterIndex = 0;
	int m_nextChapterIndex = 0;
	std::map<const int, Chapter> m_chapterMap;
	std::string m_spriteAdress;
	std::string m_content;
	
	sf::Text m_text;
	sf::Font m_font;
	sf::Texture m_texture; 
	sf::Sprite m_sprite;
public:
#pragma region Constructor

	//Chapter(spriteAdress, content)
	Chapter(const std::string, const std::string);

#pragma endregion
#pragma region Methods

	//Draws the chapter
	void Draw(sf::RenderWindow&);
	//Draws the next chapter
	void DrawNextChapter(sf::RenderWindow&);
	//Adds a chapter to the chapterlist
	void AddChapter(Chapter&);
	//Asks for the user to enter a chapter index
	Chapter Select();

#pragma endregion

};



