#include "Player.h"
#include <iostream>

#pragma region Constructor

//Takes a name, an ammount of health and a SpriteAdress
Player::Player(
	const std::string& name,
	int diceRoll, std::string spriteAdress) :
	Character(name, diceRoll, spriteAdress)
{
	m_health_points = diceRoll + 20;
	m_psi_points = diceRoll + 3;
	m_agility_points_ = diceRoll +3;
	m_gold = 0;
}

#pragma endregion
#pragma region Methods

#pragma region Getters

//Returns the "Agility"
int Player::GetAgility()const
{
	return  m_agility_points_;
}
//Returns the "Gold"
int Player::GetGold()const
{
	return m_gold;
}
//Return the "Psi"
int Player::GetPsi()const
{
	return m_psi_points;
}

#pragma endregion
#pragma region Setters

//void Player::SetAttack(int attack_points)
//{
//	m_attack = attack_points;
//}

//Sets the "Agility"
void Player::SetAgility(int agility_points)
{
	m_agility_points_ = agility_points;
}
//Sets the "Gold"
void Player::SetGold(int gold)
{
	m_gold = gold;
}
//Sets the "Name"
void Player::SetName()
{
	std::cout << "Enter your name\n";
	std::cin >> m_name;
}
//Sets the "Psi"
void Player::SetPsi(int psi_points)
{
	m_psi_points = psi_points;
}

#pragma endregion

//Tries to flee the combat
void Player::Flee()
{
	//Flee
}

#pragma endregion
