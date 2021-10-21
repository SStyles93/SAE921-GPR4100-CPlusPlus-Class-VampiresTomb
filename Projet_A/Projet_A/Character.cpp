#include "Character.h"

Character::Character(
	int health_points,
	int attack,
	const std::string& name) :
	health_points_(health_points),
	attack_(attack),
	m_name(name) {}

void Character::Attack(Character& enemy) const
{
	
}

bool Character::IsDead() const
{
	if (GetHealthPoints() <= 0)
	{
		return true;
	}
	return false;
}

void Character::Psi(Character& character) const
{
	
}

void Character::Agility(Character& character) const
{
	
}


