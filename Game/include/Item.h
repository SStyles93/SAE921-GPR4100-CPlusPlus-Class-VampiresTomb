#pragma once
#include <string>
#include "SFML/Graphics.hpp"

class Item
{
protected:

	std::string m_name = "Default";

#pragma region Graphical Variables
	//Graphical
	std::string m_spriteAdress;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
#pragma endregion 

public:

#pragma region Constructor
	
	//Constructor

	Item(const std::string& name, std::string spriteAdress);

#pragma endregion
#pragma region Methods
	
	//Methods
	std::string GetName();
	void Draw(sf::RenderWindow& window);

#pragma endregion
#pragma region Overloads
	
	//Overloads
	bool operator==(const Item& item) const;

#pragma endregion
	
};

