#include "Story.h"

//Initializes the Story
void Story::Init() 
{
	Story story;

	Chapter chapt1("data/sprites/Vampire.jpg",
		"This is the first chapter");
	story.AddChapter(chapt1);

	Chapter chapt2("data/sprites/wall.jpg",
		"This is the second chapter");
	story.AddChapter(chapt2);
	
	Enemy enemy1("The boss", 10, "//ToBeCREATEDandENTERED");
	
	Combat combat1("data/sprites/Vampire.jpg",
		"This is the first combat",
		enemy1, 5, 2);
	story.AddChapter(combat1);

	Player player("Name", story.DiceRoll(), "spriteAdress");

	//Selection

}
//Play the story
void Story::Draw() 
{

}
//Adds a chapter to the ChapterList
void Story::AddChapter(Chapter& chapter)
{
	chapter.m_chapterIndex = static_cast<int>(m_chapterMap.size() + 1);
	m_chapterMap.emplace(chapter.m_chapterIndex, chapter);
	m_chapterCount++;
}
//Select the next chapter
void Story::Select() 
{

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
//Returns one "Dice" int between 1 and 6
int Story::DiceRoll()
{
	int dice = (1 + rand() % 6);
	return dice;
}
