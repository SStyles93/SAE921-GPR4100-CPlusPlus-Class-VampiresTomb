#pragma once
#include <string>
class Character
{
public:
	Character(
		int health_points,
		int attack,
		const std::string& name);
	void Attack(Character& enemy) const;
	bool IsDead() const;

public:
	void SetHealthPoints(int health_points) { health_points_ = health_points; }
	int GetHealthPoints() const { return health_points_; }
	int GetAttack() const { return attack_; }
	const std::string& GetName() const { return m_name; }
	
protected:
	int health_points_;
	int attack_;
	std::string m_name;
	
};

