#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Character
{
protected:

#pragma region Stats

	int m_health_points;
	int m_attack;
	std::string m_name;
	
#pragma endregion
#pragma region Graphical

	std::string m_spriteAdress;
	sf::Texture m_texture;
	sf::Sprite m_sprite;

#pragma endregion

public:

#pragma region Constructor

	Character(
		const std::string& name,
		int healthPoints, std::string spriteAdress);

#pragma endregion 
#pragma region Methods

	void SetHealthPoints(int healthPoints);
	int GetAttack() const;
	int GetHealthPoints() const;
	const std::string& GetName() const;
	bool IsDead() const;
	void Draw(sf::RenderWindow&);
	
#pragma endregion

};

