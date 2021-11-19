#include "Item.h"

#pragma region Constructor

//Takes a "Name" and a "SpriteAdress"
Item::Item(const std::string& name, std::string spriteAdress) : m_name(name), m_spriteAdress(spriteAdress)
{
	m_texture.loadFromFile(m_spriteAdress);
	m_sprite.setTexture(m_texture);
	m_sprite.setOrigin(sf::Vector2f(m_texture.getSize().y * 0.5f, m_texture.getSize().x * 0.5f));
	m_sprite.setPosition(0, 0);
};

#pragma endregion 
#pragma region Methods

//Returns the name of the Item
std::string Item::GetName()
{
	return m_name;
}

//Displays Item, takes a "RenderWindow"
void Item::Draw(sf::RenderWindow& window) 
{
	window.clear(sf::Color::Black);
	m_sprite.setPosition(window.getSize().x * 0.25f, window.getSize().y * 1.0f);
	window.draw(m_sprite);
}

#pragma endregion
#pragma region Overloads

//Compares two strings, takes an "Item"
bool Item::operator==(const Item& item) const
{
	if (this->m_name == item.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

#pragma endregion 