#pragma once
#include <map>
#include <iostream>
#include "Chapter.h"
class Selection : public Chapter
{
	using Chapter::Chapter;
protected:
	std::map<int, Chapter> m_chapters;
public:
	//Constructor
	
	//Methods
	void AddChapter(Chapter&);
	std::string GetIndex();
};

