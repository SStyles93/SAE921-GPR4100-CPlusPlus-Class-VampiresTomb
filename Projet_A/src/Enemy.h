#pragma once
#include "Character.h"
class Enemy : public Character
{
	//Inherited ctor from Character
	using Character::Character;
public:
	////Constructor not used since using Character::Character ctor
	//Enemy(
	//	int health_points, 
	//	int attack, 
	//	const std::string& name);
};

