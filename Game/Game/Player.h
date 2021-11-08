#pragma once
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
};

