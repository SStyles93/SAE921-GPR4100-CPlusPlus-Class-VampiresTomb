#include "Character.h"

#pragma region Constructor

Character::Character(
	const std::string& name,
	int health_points, std::string spriteAdress) :
	m_name(name),
	m_health_points(health_points),
	m_spriteAdress(spriteAdress)
{
	m_attack = 0;
}
#pragma endregion 
#pragma region Methods

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

bool Character::IsDead() const
{
	if (GetHealthPoints() <= 0)
	{
		return true;
	}
	return false;
}

void Character::Draw(sf::RenderWindow& window) 
{
	window.clear(sf::Color::Black);
	m_sprite.setPosition(window.getSize().x * 0.25f, window.getSize().y * 1.0f);
	window.draw(m_sprite);
}
#pragma endregion