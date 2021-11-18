#include "Story.h"

//Adds a chapter to the list of chapters
void Story::AddChapter(Chapter& chapter)
{
	chapter.m_chapterIndex = static_cast<int>(m_chapterMap.size() + 1);
	m_chapterMap.emplace(chapter.m_chapterIndex, chapter);
	m_chapterCount++;
}
Chapter Story::GetChapter() 
{
	return m_chapterMap.at(m_wantedChapterIndex);
}
Chapter Story::GetNextChapter(Chapter& chapter)
{
	return m_chapterMap.at(chapter.m_chapterIndex + 1);
}
void Story::Play() 
{

}