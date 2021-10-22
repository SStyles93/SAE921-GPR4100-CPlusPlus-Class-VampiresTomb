#include "Character.h"

//Constructor
Character::Character(
	int health_points,
	int attack,
	const std::string& name) :
	m_health_points(health_points),
	m_attack(attack),
	m_name(name){}

//Methods
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
void Character::SetHealthPoints(int health_points)
{
	m_health_points = health_points;
}
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

