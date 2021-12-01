#pragma once
#include "Chapter.h"
#include "Enemy.h"
#include "Player.h"

class Combat : public Chapter
{
protected:

	int m_successScore;
	Enemy& m_enemy;
	Player& m_player;
	
public:

#pragma region Constructor

	Combat(const std::string spriteAdress,
		const std::string content,
		Enemy& enemy,
		Player& player,
		int successScore,
		int nextChapterIndex);
	
#pragma endregion 
#pragma region Methods
	
	void Battle(int diceRoll);
	void Win() const;
	void Lose() const;
	void Flee(int) const;
	
#pragma endregion

};

