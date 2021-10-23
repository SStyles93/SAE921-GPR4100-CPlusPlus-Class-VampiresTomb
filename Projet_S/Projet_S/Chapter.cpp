#include "Chapter.h"

//Constructor
Chapter::Chapter(const int& chapterIndex, std::string content)
 : m_content(std::move(content)), m_chapterIndex(chapterIndex){}
//Methods
std::string Chapter::GetContent() const
{
	return m_content;
}
