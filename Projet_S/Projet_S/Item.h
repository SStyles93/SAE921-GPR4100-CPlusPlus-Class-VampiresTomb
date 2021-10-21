#pragma once
#include <string>
class Item
{
protected:
	std::string m_name = "None";
public:
	Item(const std::string& name);

	bool operator==(const Item& item) const
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

};

