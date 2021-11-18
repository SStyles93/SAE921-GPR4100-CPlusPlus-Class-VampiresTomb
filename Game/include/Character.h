#pragma once
#include <string>
class Character
{
protected:
	int m_health_points;
	int m_attack;
	std::string m_name;

public:
	//Constructors
	Character(
		const std::string& name,
		int health_points);

	//Methods
	void SetHealthPoints(int health_points);
	int GetAttack() const;
	int GetHealthPoints() const;
	const std::string& GetName() const;
	void Attack(Character& opponent) const;
	bool IsDead() const;
	int DiceRoll();
};

