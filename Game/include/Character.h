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
	Character();
	Character(
		int health_points,
		int attack,
		const std::string& name);

	//Methods
	void Attack(Character& enemy) const;
	bool IsDead() const;
	void SetHealthPoints(int health_points);
	int GetHealthPoints() const;
	int GetAttack() const;
	const std::string& GetName() const;
};

