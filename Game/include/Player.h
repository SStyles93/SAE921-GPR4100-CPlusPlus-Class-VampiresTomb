#pragma once
#include "Character.h"

class Player : public Character
{
protected:
	int m_psi_points;
	int m_agility_points_;
	int m_gold;

public:
	
#pragma region Constructor
	//Constructor
	Player(
		const std::string& name,
		int health);
#pragma endregion
#pragma region Methods

	//Methods
	void SetAttack(int attack_points);
	void SetAgility(int agility_points);
	void SetGold(int gold);
	void SetName();
	void SetPsi(int psi_points);
	int GetAgility()const;
	int GetGold()const;
	int GetPsi()const;
	void Flee();
	
#pragma endregion
};

