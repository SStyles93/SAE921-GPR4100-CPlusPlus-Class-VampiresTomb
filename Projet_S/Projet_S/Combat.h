#pragma once
#include "Chapter.h"


class Combat : public Chapter
{
protected:
	int m_successScore;
public:
	//Constructor
	Combat(const std::string&/*,Enemy&*/, int, int);
	void Trial(int diceRoll) const;
	void Win() const;
	void Lose() const;

};

