#include "Story.h"

//Methods
std::string Story::GetContent(int chapterIndex) const
{
	for (auto& chapter : m_chapters)
	{
		if (chapterIndex == chapter.first)
		{
			return  chapter.second.GetContent();
		}
	}
	return "There is no chapter with that Index";
}
void Story::AddChapter(Chapter& chapter)
{
	m_chapters.emplace(static_cast<int>(m_chapters.size()+1), chapter);
}

