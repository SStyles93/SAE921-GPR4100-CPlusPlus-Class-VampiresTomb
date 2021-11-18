#include "Combat.h"

//Takes a content, an Enemy, a successScore, and the nextChapterIndex (if successfully killed Enemy)
Combat::Combat(const std::string& content,/*ENEMY*/ int successScore, int nextChapterIndex) : Chapter(content)
{
	m_successScore = successScore;
	m_nextChapterIndex = nextChapterIndex;
	/*Enemy*/
}
void Combat::Battle(int diceRoll) const
{
	if(diceRoll >= m_successScore)
	{
		//enemy.loselife
	}
}
void Combat::Win() const
{
	
}
void Combat::Lose() const
{
	
}
void Combat::Flee(int diceRoll) const
{
	if(diceRoll >= m_successScore)
	{
		//successelly fled
	}
}

