#pragma once
#include <string>

class Chapter
{
protected:
	std::string m_content;
	int m_chapterIndex;
public:
	//Constructor
	Chapter(const int& chapterIndex, std::string content);
	//Methods
	std::string GetContent() const;
};

