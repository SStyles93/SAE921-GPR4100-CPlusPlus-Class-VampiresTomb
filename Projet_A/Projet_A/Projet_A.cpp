#include <iostream>
#include "Character.h"
#include "Enemy.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>

int DiceRoll(time_t seed)
{
	int dice;
	srand(time(0));
	dice = (1 + rand() % 6);
	return dice;
}

int main()
{
	Character character(20, 20, "I");
	Enemy enemy(10, 10, "AM");
	Player player(10, 0, 1, 3, 2000, "The");
	////Test diceroll and improve
	//Player player2(0, 0, 0, 0, 0, "The test dummy");
	//player2.SetAttack(DiceRoll(0) + DiceRoll(0)+1);
	//std::cout << player2.GetAttack() << std::endl;


	////TEST
	//std::cout << character.GetHealthPoints() << " ";
	//std::cout << character.GetAttack() << " ";
	//std::cout << character.GetName() <<std::endl;

	//std::cout << enemy.GetHealthPoints() << " ";
	//std::cout << enemy.GetAttack() << " ";
	//std::cout << enemy.GetName()<<std::endl;


	//std::cout << player.GetHealthPoints()<< " ";
	//std::cout << player.GetAttack() << " ";
	//std::cout << player.GetName() << " ";
	//std::cout << player.GetPsi() << " ";
	//std::cout << player.GetAgility() << " ";
	//std::cout << player.GetGold() << std::endl;

	//player.SetAttack(10);
	//player.SetAgility(100);
	//player.SetGold(50);
	//player.SetPsi(666);

	//std::cout << player.GetAttack() << std::endl;
	//std::cout << player.GetAgility() << std::endl;
	//std::cout << player.GetGold() << std::endl;
	//std::cout << player.GetHealthPoints() << std::endl;
	//std::cout << player.GetName() << std::endl;
	//std::cout << player.GetPsi() <<std::endl;
}



