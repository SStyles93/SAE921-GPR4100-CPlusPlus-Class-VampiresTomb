#pragma once
#include "Chapter.h"
#include "Enemy.h"
class Combat : public Chapter
{
protected:
	int m_successScore;
	Enemy& m_enemy;
public:
	//Constructor

	//Takes a spriteAdress, content, an Enemy, a successScore, and the nextChapterIndex
	Combat(const std::string, const std::string, Enemy&, int, int );
	
	//Methods
	void Battle(int diceRoll);
	void Win() const;
	void Lose() const;
	void Flee(int) const;

};

