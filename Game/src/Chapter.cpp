#include <iostream>
#include "Chapter.h"

#pragma region Constructor

//Constructor

//Chapter(spriteAdress, content)
Chapter::Chapter(std::string spriteAdress, std::string content)
	: m_spriteAdress(spriteAdress), m_content(content)
{
	m_chapterIndex = 0;
	m_texture.loadFromFile(m_spriteAdress);
	m_sprite.setTexture(m_texture);
	m_sprite.setOrigin(sf::Vector2f(m_texture.getSize().y * 0.5f, m_texture.getSize().x * 0.5f));
	m_sprite.setPosition(0, 0);
	m_font.loadFromFile("data/fonts/OctoberCrow.ttf");
	m_text.setFont(m_font);
	m_text.setString(m_content);
	m_text.setCharacterSize(48);
	m_text.setFillColor(sf::Color::Red);
}

#pragma endregion
#pragma region Methods

//Methods

//Draws the chapter
void Chapter::Draw(sf::RenderWindow& window) 
{
	window.clear(sf::Color::Black);
	m_sprite.setPosition(window.getSize().x * 0.25f, window.getSize().y * 1.0f);
	window.draw(m_sprite);
	m_text.setPosition(window.getSize().x * 0.25f, window.getSize().y * 0.9f);
	window.draw(m_text);
	window.display();
}

#pragma endregion