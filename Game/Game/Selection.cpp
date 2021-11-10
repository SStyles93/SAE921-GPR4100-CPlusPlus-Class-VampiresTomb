#include <iostream>
#include "Selection.h"

void Selection::AddChapter(Chapter& chapter)
{
	m_chapters.emplace(static_cast<int>(m_chapters.size() + 1), chapter);
}

std::string Selection::Select()
{
	
	std::cout << "Select the desired action \n";
	std::cin >> m_nextChapterIndex;

	for (const auto& chapter : m_chapters)
	{
		while(m_nextChapterIndex != chapter.first)
		{
			std::cout << "There is no chapter with that Index \n";
			std::cin >> m_nextChapterIndex;
		}
		return  chapter.second.GetContent();
	}
	return "There is no chapter with that Index";
}