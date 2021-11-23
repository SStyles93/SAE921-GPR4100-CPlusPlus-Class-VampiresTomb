#pragma once
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include "Armor.h"
#include "Bag.h"
#include "Chapter.h"
#include "Combat.h"
#include "Enemy.h"
#include "Item.h"
#include "Other.h"
#include "Player.h"
#include "Weapon.h"

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"

class Story 
{
private:
	std::map<const int, Chapter> m_chapterMap;
	Chapter m_currentChapter;
	int m_chapterCount = 0;
	int m_wantedChapterIndex = 0;

public:

#pragma region Constructor

	Story();

#pragma endregion 
#pragma region Methods
	
	void AddChapter(Chapter& chapter);
	void Init(sf::RenderWindow& window);
	void Draw(sf::RenderWindow& window);
	Chapter GetChapter();
	Chapter GetNextChapter(Chapter& chapter);
	int DiceRoll();

#pragma endregion
};