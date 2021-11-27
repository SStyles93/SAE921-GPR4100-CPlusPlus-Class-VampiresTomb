#include "Combat.h"

#pragma region Constructor

//Takes a "SpriteAdress", "Content", an "Enemy", a "successScore", and the "nextChapterIndex"
Combat::Combat(
	const std::string spriteAdress,
	std::string content,
	Enemy& enemy,
	int successScore,
	int nextChapterIndex) : m_enemy(enemy), Chapter(spriteAdress, content)
{
	m_successScore = successScore;
	m_isCombat = true;
}

#pragma endregion 
#pragma region Methods

//
void Combat::Battle(int diceRoll)
{
	if (diceRoll >= m_successScore)
	{
		m_enemy.SetHealthPoints(m_enemy.GetHealthPoints() - diceRoll);
	}
}
//Declares the win "state"
void Combat::Win() const
{
	m_enemy.IsDead();
}
//Declares the lose "state"
void Combat::Lose() const
{
	
}
//try and exit the combat
void Combat::Flee(int diceRoll) const
{
	if (diceRoll >= m_successScore)
	{
		
	}
}

#pragma endregion 