#include "Combat.h"

//Takes a content, a texture, a sprite, an Enemy, a successScore, and the nextChapterIndex (if successfully killed Enemy)
Combat::Combat(
	const std::string spriteAdress,
	std::string content,
	Enemy& enemy,
	int successScore,
	int nextChapterIndex) : m_enemy(enemy), Chapter(spriteAdress, content)
{
	m_successScore = successScore;
	m_nextChapterIndex = nextChapterIndex;
}
void Combat::Battle(int diceRoll)
{
	if (diceRoll >= m_successScore)
	{
		m_enemy.SetHealthPoints(m_enemy.GetHealthPoints() - diceRoll);
	}
}

void Combat::Win() const
{
	m_enemy.IsDead();
}
void Combat::Lose() const
{
	//Stop the game and announce to the player he is dead
}
void Combat::Flee(int diceRoll) const
{
	if (diceRoll >= m_successScore)
	{
		//successelly fled
	}
}