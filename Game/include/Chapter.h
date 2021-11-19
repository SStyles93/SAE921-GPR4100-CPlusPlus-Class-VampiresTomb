#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Chapter
{
protected:
	std::string m_spriteAdress;
	std::string m_content;
	
	sf::Text m_text;
	sf::Font m_font;
	sf::Texture m_texture; 
	sf::Sprite m_sprite;

public:
	int m_chapterIndex;
#pragma region Constructor

	Chapter(std::string, std::string);

#pragma endregion
#pragma region Methods

	void Draw(sf::RenderWindow&);

#pragma endregion

};



