#include <iostream>
#include "Character.h"
#include "Enemy.h"
#include "Player.h"

int main()
{
	Character character(20, 20, "I");
	Enemy enemy(10, 10, "AM");
	Player player(10,0,1,3,2000,"The");

	std::cout << character.GetHealthPoints() << " ";
	std::cout << character.GetAttack() << " ";
	std::cout << character.GetName() <<std::endl;

	std::cout << enemy.GetHealthPoints() << " ";
	std::cout << enemy.GetAttack() << " ";
	std::cout << enemy.GetName()<<std::endl;


	std::cout << player.GetHealthPoints()<< " ";
	std::cout << player.GetAttack() << " ";
	std::cout << player.GetName() << std::endl;
	std::cout << player.GetPsi() << " ";
	std::cout << player.GetAgility() << " ";
	std::cout << player.GetGold() << " ";

	player.SetAgility(100);
	player.SetPsi(666);

	std::cout << player.GetPsi() <<std::endl;
}
