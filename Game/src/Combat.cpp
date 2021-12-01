#include "Combat.h"

#pragma region Constructor

//Takes a "SpriteAdress", "Content", an "Enemy", a "Player", a "successScore", and the "nextChapterIndex"
Combat::Combat(
	const std::string spriteAdress,
	std::string content,
	Enemy& enemy,
	Player& player,
	int successScore,
	int nextChapterIndex) : m_enemy(enemy), m_player(player), Chapter(spriteAdress, content)
{
	m_successScore = successScore;
	m_isCombat = true;
}

#pragma endregion 
#pragma region Getter/Setter

Player Combat::GetPlayer() 
{
	return m_player;
}
Enemy Combat::GetEnemy() 
{
	return m_enemy;
}

#pragma region Methods

void Combat::Battle(int diceRoll)
{
	if (diceRoll >= m_successScore)
	{
		m_enemy.SetHealthPoints(m_enemy.GetHealthPoints() - diceRoll);
	}
	if (diceRoll < m_successScore) {
		m_player.SetHealthPoints(m_player.GetHealthPoints() - diceRoll);
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
	m_player.IsDead();
}
//try and exit the combat
void Combat::Flee(int diceRoll) const
{
	if (diceRoll >= m_successScore)
	{
		
	}
	else
	{
		m_player.SetHealthPoints(m_player.GetHealthPoints() - diceRoll);
	}
}

#pragma endregion 