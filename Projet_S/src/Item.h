#pragma once
#include <string>
class Item
{
protected:
	std::string m_name = "None";
public:
	//Constructor
	Item(const std::string& name);

	//Methods
	std::string GetName();

	//Overloads
	bool operator==(const Item& item) const;
	
};

