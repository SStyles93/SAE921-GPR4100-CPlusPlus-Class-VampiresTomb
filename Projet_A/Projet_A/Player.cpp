#include "Player.h"

//Constructor
Player::Player(
	int health_points,
	int attack_points,
	int psi_points,
	int agility_points,
	int gold,
	const std::string& name) :
Character(health_points, attack_points, name)
{
	m_psi_points = psi_points;
	m_agility_points_ = agility_points;
	m_gold = gold;
}

//Methods
void Player::SetPsi(int psi_points)
{
	m_psi_points = psi_points;
}
void Player::SetAgility(int agility_points)
{
	m_agility_points_ = agility_points;
}
int Player::GetGold()const
{
	return m_gold;
}
int Player::GetPsi()const
{
	return m_psi_points;
}
int Player::GetAgility()const
{
	return  m_agility_points_;
}
void Player::Flee()
{
	//Flee
}
