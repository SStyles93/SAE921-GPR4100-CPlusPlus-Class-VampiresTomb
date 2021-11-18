#include <iostream>
#include "Chapter.h"

#pragma region Constructor

//Constructor
//Takes the sprite adress, a texture, and a sprite
Chapter::Chapter(const std::string spriteAdress, const std::string content)
	: m_spriteAdress(spriteAdress), m_content(content)
{

	m_texture.loadFromFile(m_spriteAdress);
	m_sprite.setTexture(m_texture);
	m_sprite.setOrigin(sf::Vector2f(m_texture.getSize().y/2, m_texture.getSize().x/2));
	m_font.loadFromFile("C:/SAE/921/GPR/SAE921-GPR4100-CPlusPlus-Class-VampiresTomb/Game/data/fonts/OctoberCrow.ttf");
	m_text.setFont(m_font);
	m_text.setString(m_content);
	m_text.setCharacterSize(16);
	m_text.setFillColor(sf::Color::Red);
}

#pragma endregion
#pragma region Methods

//Methods

//Adds a chapter to the list of chapters
void Chapter::AddChapter(Chapter& chapter)
{
	m_chapterMap.emplace(static_cast<int>(m_chapterMap.size() + 1), chapter);
}
void Chapter::Draw(sf::RenderWindow& window) 
{
	window.clear(sf::Color::Black);
	m_sprite.setPosition(window.getSize().x / 2, window.getSize().y / 2);
	window.draw(m_sprite);
	m_text.setPosition(window.getSize().x * 0.25f, window.getSize().y * 0.8f);
	window.draw(m_text);
	window.display();
}
void Chapter::DrawNextChapter(sf::RenderWindow& window) 
{
	if (Select().m_chapterIndex == 0) 
	{
		std::cout << "There is not next chapter\n";
		return;
	}
	Select().Draw(window);
}

Chapter Chapter::Select()
{

	std::cout << "Select the desired action \n";
	std::cin >> m_nextChapterIndex;

	for (const auto& chapter : m_chapterMap)
	{
		while (m_nextChapterIndex != chapter.first)
		{
			std::cout << "There is no chapter with that Index \n";
			std::cin >> m_nextChapterIndex;
		}
		return chapter.second;
	}
	return m_chapterMap[0];
}

#pragma endregion