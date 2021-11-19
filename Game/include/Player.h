#pragma once
#include "Character.h"

class Player : public Character
{
protected:

#pragma region Stats

	int m_psi_points;
	int m_agility_points_;
	int m_gold;

#pragma region 

public:
	
#pragma region Constructor

	Player(
		const std::string& name,
		int diceRoll, std::string spriteAdress);

#pragma endregion
#pragma region Methods

	//Methods
	void SetAttack(int attackPoint);
	void SetAgility(int agilityPoints);
	void SetGold(int goldAmmount);
	void SetName();
	void SetPsi(int psiPoints);
	int GetAgility()const;
	int GetGold()const;
	int GetPsi()const;
	void Flee();
	
#pragma endregion
};

