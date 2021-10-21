#pragma once
#include <string>
class Character
{
public:
	Character(
		int health_points,
		int attack,
		int psi,
		int agility,
		int gold,
		const std::string& name);
	void Attack(Character& enemy) const;
	void Flee(Character& character) const;
	int gold(Character& inventory) const;
	bool IsDead() const;

public:
	void SetHealthPoints(int health_points) { health_points_ = health_points; }
	int GetHealthPoints() const { return health_points_; }
	int GetAttack() const { return attack_; }
	int GetGold() { return gold_; }
	const std::string& GetName() const { return m_name; }
	
protected:
	int health_points_;
	int attack_;
	int flee_;
	int psi_;
	int agility_;
	int gold_;
	std::string m_name;
	
};

