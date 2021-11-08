#include <iostream>
#include "Selection.h"

void Selection::AddChapter(Chapter& chapter)
{
	m_chapters.emplace(static_cast<int>(m_chapters.size() + 1), chapter);
}

std::string Selection::Select()
{
	std::cout << "select your chapter" << std::endl;
	std::cin >> m_nextChapterIndex;

	for (const auto& chapter : m_chapters)
	{
		if (m_nextChapterIndex == chapter.first)
		{
			return  chapter.second.GetContent();
		}
	}
	return "There is no chapter with that Index";
}