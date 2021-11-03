#include "Selection.h"



void Selection::Select()
{
	std::cout << "select your chapter" << std::endl;
	std::cin >> m_nextChapterIndex;
	//TODO: for loop to search in m_chapters map
}

void Selection::AddChapter(int index, Chapter& chapter)
{
	m_chapters.(index, chapter);
}
