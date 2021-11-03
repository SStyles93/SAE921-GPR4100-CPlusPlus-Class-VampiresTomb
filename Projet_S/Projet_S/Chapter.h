#pragma once
#include <string>

class Chapter
{
protected:
	std::string m_content;
	int m_nextChapterIndex;
public:
	//Constructor
	Chapter(std::string content);
	//Methods
	std::string GetContent() const;
};

