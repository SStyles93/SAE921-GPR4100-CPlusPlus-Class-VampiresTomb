#pragma once
#include <map>
#include "Chapter.h"

class Story
{
protected:
	std::map<int, Chapter> m_chapters;
public:
	//Methods
	std::string GetContent(int chapterIndex) const;
	void AddChapter(Chapter&);
};

