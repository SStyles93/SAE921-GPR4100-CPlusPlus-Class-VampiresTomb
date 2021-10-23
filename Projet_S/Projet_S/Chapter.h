#pragma once
#include <string>

class Chapter
{
protected:
	std::string m_content;
public:
	//Constructor
	Chapter(std::string content);
	//Methods
	std::string GetContent() const;
};

