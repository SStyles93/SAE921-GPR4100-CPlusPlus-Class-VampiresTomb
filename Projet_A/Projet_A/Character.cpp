#include "Character.h"

Character::Character(
	int health_points,
	int attack,
	int psi,
	int agility,
	int gold,
	const std::string& name) :
	health_points_(health_points),
	attack_(attack),
	psi_(psi),
	agility_(agility),
	gold_(gold),
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



