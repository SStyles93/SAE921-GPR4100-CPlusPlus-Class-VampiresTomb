#pragma once
#include <string>
#include "Character.h"
class Player : public Character
{
protected:
	int m_psi_points;
	int m_agility_points_;
	int m_gold;

public:
	//Constructor
	Player(
		int health_points,
		int attack_points,
		int psi_points,
		int agility_points,
		int gold,
		const std::string& name);
	
	//Methods
	void SetAttack(int attack_points);
	void SetAgility(int agility_points);
	void SetGold(int gold);
	void SetPsi(int psi_points);
	int GetAgility()const;
	int GetGold()const;
	int GetPsi()const;
	void Flee();

	//
	//No constructor needed for psi, agility or gold
	/*void Psi(Character& character) const;
	void Agility(Character& character) const;
	int Gold(Character& inventory) const;*/
	//^^^^^^^^^^^TO BE REMOVED^^^^^^^^^^^^^^
};

