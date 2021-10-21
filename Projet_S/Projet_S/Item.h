#pragma once
#include <string>
class Item
{
protected:
	std::string m_name = "None";
public:
	Item(std::string& name);
};

