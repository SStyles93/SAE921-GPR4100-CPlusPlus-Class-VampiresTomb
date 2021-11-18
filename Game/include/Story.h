#pragma once
#include <iostream>
#include <map>
#include "Chapter.h"

class Story 
{
private:
	std::map<const int, Chapter> m_chapterMap;
	int m_chapterCount = 0;
	int m_wantedChapterIndex = 1;
public:

#pragma region Methods
	
	//Adds a chapter to the chapterlist
	void AddChapter(Chapter&);
	void Select();
	void Play();
	Chapter GetNextChapter(Chapter& chapter);
	Chapter GetChapter();

#pragma endregion
};