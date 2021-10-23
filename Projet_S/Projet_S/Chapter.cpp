#include "Chapter.h"

//Constructor
Chapter::Chapter(const int& chapterIndex, std::string content)
: m_content(std::move(content)), m_chapterIndex(chapterIndex)
{
	m_chapter.emplace(m_chapterIndex, m_content);
}

//Methods
std::string Chapter::GetContent(int chapterIndex) const
{
	for (auto& chapter : m_chapter)
	{
		if (chapterIndex == chapter.first)
		{
			return  chapter.second;
		}
	}
	return "There is no chapter with that Index";
}

