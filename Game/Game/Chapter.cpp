#include "Chapter.h"

//Constructor
Chapter::Chapter(std::string content)
	: m_content(content) {}
//Methods
std::string Chapter::GetContent() const
{
	return m_content;
}
