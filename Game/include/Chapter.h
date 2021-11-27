#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Chapter
{
protected:
	std::string m_spriteAdress;
	std::string m_content;

	bool m_isSelection = false;
	bool m_isCombat = false;

#pragma region Graphical

	sf::Text m_text;
	sf::Font m_font;
	sf::Texture m_texture; 
	sf::Sprite m_sprite;

	//text position in % of the screen Width x Height
	sf::Vector2f m_textPosition = sf::Vector2f(0.25f, 0.9f);

#pragma endregion 

public:

	std::vector<Chapter> m_nextChapters;
	int m_chapterIndex = 0;
	int m_nextChapterIndex = 0;

#pragma region Constructor

	Chapter();
	Chapter(std::string spriteAdress, std::string content);

#pragma endregion
#pragma region Getter/Setter

	std::vector<Chapter> GetNextChapters();
	int GetNextChapterIndex();

	void SetContent(std::string content);
	void AddContent(std::string content);
	void SetFontSize(int size);
	void SetFontColor(sf::Color color);
	void SetFontPosition(float xPos, float yPos);
	void SetSelection(bool b);
	void SetCombat(bool b);

#pragma region Methods

	void Select(sf::RenderWindow& window);
	void Draw(sf::RenderWindow& window);
	void AddNextChapter(Chapter& chapter);
	//Chapter& GetNextChapter(int index);
	bool IsSelection();
	bool IsCombat();
	
#pragma endregion
	
	//bool operator==(Chapter& chapter) const;

};



