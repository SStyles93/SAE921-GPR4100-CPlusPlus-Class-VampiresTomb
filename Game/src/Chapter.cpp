#include <iostream>
#include "Chapter.h"

#pragma region Constructor
Chapter::Chapter() {}
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
	m_text.setOrigin(0, 0);
}

#pragma endregion
#pragma region Getter/Setter

//TEXT
void Chapter::SetContent(std::string content) 
{
	m_text.setString(m_content);
	
}
void Chapter::AddContent(std::string content) 
{
	m_text.getString() + content;
}
void Chapter::SetFontSize(int size) 
{
	m_text.setCharacterSize(size);
}
void Chapter::SetFontColor(sf::Color color)
{
	m_text.setFillColor(color);
}
void Chapter::SetFontPosition(float xPos, float yPos) 
{
	m_textPosition.x = xPos;
	m_textPosition.y = yPos;
}

//CHAPTER
std::vector<Chapter> Chapter::GetNextChapters() 
{
	return m_nextChapters;
}
int Chapter::GetNextChapterIndex() 
{
	return m_nextChapterIndex;
}
void Chapter::SetSelection(bool b)
{
	m_isSelection = b;
}
void Chapter::SetCombat(bool b)
{
	m_isCombat = b;
}

#pragma endregion
#pragma region Methods

//Draws the chapter, takes a "RenderWindow"
void Chapter::Draw(sf::RenderWindow& window) 
{
	window.clear(sf::Color::Black);
	m_sprite.setPosition(window.getSize().x * 0.28f, window.getSize().y * 0.9f);
	window.draw(m_sprite);
	m_text.setPosition(window.getSize().x * m_textPosition.x, window.getSize().y * m_textPosition.y);
	window.draw(m_text);
	window.display();
}
void Chapter::AddNextChapter(Chapter& chapter)
{
	m_nextChapters.push_back(chapter);
}
Chapter Chapter::Select(sf::RenderWindow& window)
{
	std::cin >> m_nextChapterIndex;

	for (int i = 0; i < m_nextChapters.size(); i++) 
	{
		if (i == m_nextChapterIndex) 
		{
			m_nextChapters[i].Draw(window);
			return m_nextChapters[i];
		}
		m_text.setString("There is no chapter with that index");
	}
}
////returns the next chapter if there is one
//Chapter& Chapter::GetNextChapter(int index)
//{
//	return m_nextChapters[index];
//}
//#pragma endregion
//
//bool Chapter::operator==(Chapter& chapter) const
//{
//	if (this->m_chapterIndex == chapter.m_chapterIndex)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

#pragma endregion
#pragma region Checkers

bool Chapter::IsSelection()
{
	return m_isSelection;
}
bool Chapter::IsCombat()
{
	return m_isCombat;
}
bool Chapter::IsEnd() 
{
	return m_isEnd;
}

#pragma endregion