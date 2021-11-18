#include "Player.h"
#include <iostream>

//Constructor
Player::Player(
	const std::string& name,
	int health) :
	Character(name, health)
{
	m_health_points = DiceRoll() + DiceRoll() + 20;
	m_psi_points = DiceRoll()+3;
	m_agility_points_ = DiceRoll()+3;
	m_gold = 0;
}

#pragma region Methods

#pragma region Getters
int Player::GetAgility()const
{
	return  m_agility_points_;
}
int Player::GetGold()const
{
	return m_gold;
}
int Player::GetPsi()const
{
	return m_psi_points;
}
#pragma endregion
#pragma region Setters
void Player::SetAttack(int attack_points)
{
	m_attack = attack_points;
}
void Player::SetAgility(int agility_points)
{
	m_agility_points_ = agility_points;
}
void Player::SetGold(int gold)
{
	m_gold = gold;
}
void Player::SetName()
{
	std::cout << "Enter your name\n";
	std::cin >> m_name;
}
void Player::SetPsi(int psi_points)
{
	m_psi_points = psi_points;
}
#pragma endregion

void Player::Flee()
{
	//Flee
}
#pragma endregion
