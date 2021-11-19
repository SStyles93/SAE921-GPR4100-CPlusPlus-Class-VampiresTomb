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
	
	void AddChapter(Chapter&);
	void Play();
	void Select();
	Chapter GetChapter();
	Chapter GetNextChapter(Chapter& chapter);

#pragma endregion
};