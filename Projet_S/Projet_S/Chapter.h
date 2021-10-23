#pragma once
#include <map>
#include <string>

class Chapter
{
protected:
	std::string m_content;
	int m_chapterIndex;
	std::map<int, std::string> m_chapter;

public:
	//Constructor
	Chapter(const int& chapterIndex, std::string content);
	//Methods
	std::string GetContent(int chapterIndex) const;
};

