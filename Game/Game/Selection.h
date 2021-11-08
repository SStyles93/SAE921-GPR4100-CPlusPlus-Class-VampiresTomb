#pragma once
#include <map>
#include "Chapter.h"

class Selection : public Chapter
{
	using Chapter::Chapter;
protected:
	std::map<const int, Chapter> m_chapters;
public:
	//Constructor

	//Methods
	void AddChapter(Chapter&);
	std::string Select();
};

