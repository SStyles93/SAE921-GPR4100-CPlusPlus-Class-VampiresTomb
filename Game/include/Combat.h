#pragma once
#include "Chapter.h"
#include "Enemy.h"

class Combat : public Chapter
{
protected:

	int m_successScore;
	Enemy& m_enemy;
	
public:

#pragma region Constructor

	Combat(const std::string spriteAdress,
		const std::string content,
		Enemy& enemy,
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

