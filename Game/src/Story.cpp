#include "Story.h"

//Adds a chapter to the ChapterList
void Story::AddChapter(Chapter& chapter)
{
	chapter.m_chapterIndex = static_cast<int>(m_chapterMap.size() + 1);
	m_chapterMap.emplace(chapter.m_chapterIndex, chapter);
	m_chapterCount++;
}
//Gets the next chapter
Chapter Story::GetChapter() 
{
	return m_chapterMap.at(m_wantedChapterIndex);
}
//Gets the chapter after the given one
Chapter Story::GetNextChapter(Chapter& chapter)
{
	return m_chapterMap.at(chapter.m_chapterIndex + 1);
}
//Play the story
void Story::Play() 
{

}
//Select the next chapter