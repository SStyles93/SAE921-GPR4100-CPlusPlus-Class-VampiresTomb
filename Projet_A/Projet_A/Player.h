#pragma once
#include <string>
#include "Character.h"
class Player : public Character
{
public:
	Player(
		int psi_points,
		int agility_points,
		int gold,
		const std::string& name);
	void Psi(Character& character) const;
	void Agility(Character& character) const;
	void Flee(Character& character) const;
	int Gold(Character& inventory) const;
public:
	int getPsi(int psi_points) { psi_points_ = psi_points; }
	int getAgility(int agility_points) { agility_points_ = agility_points; }
	int GetGold() { return gold_; }
protected:
	int psi_points_;
	int agility_points_;
	int gold_;
};

