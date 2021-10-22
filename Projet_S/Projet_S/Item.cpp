#include "Item.h"

//Constructor
Item::Item(const std::string& name) : m_name(name){};
//Methods
//Returns the name of the Item
std::string Item::GetName()
{
	return m_name;
}
//Overloads
//Compares two strings
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



