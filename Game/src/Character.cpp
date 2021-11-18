#include "Character.h"

//Constructor
Character::Character(
	const std::string& name,
	int health_points) :
	m_name(name),
	m_health_points(health_points)
{
	m_attack = 0;
}

#pragma region Methods
//Methods
#pragma region Getters
int Character::GetHealthPoints() const
{
	return m_health_points;
}
int Character::GetAttack() const
{
	return m_attack;
}
const std::string& Character::GetName() const
{
	return m_name;
}
#pragma endregion
#pragma region Setters

void Character::SetHealthPoints(int health_points)
{
	m_health_points = health_points;
}

#pragma endregion

void Character::Attack(Character& opponent) const
{
	opponent.SetHealthPoints(GetHealthPoints()-GetAttack());
}
bool Character::IsDead() const
{
	if (GetHealthPoints() <= 0)
	{
		return true;
	}
	return false;
}

int Character::DiceRoll()
{
	int dice = (1 + rand() % 6);
	return dice;
}

#pragma endregion