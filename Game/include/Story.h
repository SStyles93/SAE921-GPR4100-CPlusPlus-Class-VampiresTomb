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
protected:

	std::map<int, Chapter> m_chapterMap;
	int m_chapterCount = 0;

public:

	int m_wantedChapterIndex = 0;
	int m_currentChapterIndex = 1;
	Chapter m_currentChapter;

#pragma region Constructor

	Story();

#pragma endregion
#pragma region Methods
	
	void AddChapter(Chapter& chapter);
	void Draw(sf::RenderWindow& window);
	Chapter GetChapter(int index);
	//Chapter GetNextChapter(Chapter& chapter);
	int DiceRoll();

#pragma endregion
};