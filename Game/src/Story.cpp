#include "Story.h"

//Initializes the Story
void Story::Init(sf::RenderWindow& window) 
{
	Story story;
	Player player("Name", story.DiceRoll(), "No sprite");

	//Title
	Chapter Title("data/sprites/Vampire/Title",
		"This is the first chapter");
	story.AddChapter(Title);

	//"Door": first selection
	Chapter door("data/sprites/Background/1.jpg",
		"You arrive in front of a door");
	story.AddChapter(door);

	//"The hidden entrance": shortcut with "garlic"
	Chapter trap("data/sprites/Background/Black.bmp",
		"You find a little trap");
	story.AddChapter(trap);

	//"House": is an "End" chapter
	Chapter house
	("data/sprites/Background/2.png",
		"You arrive near a little house...");
	story.AddChapter(house);
	
	//"Dungeon" is a combat
	Chapter dungeon("data/sprites/Background/3.png",
		"You arrive in a dungeon...");
	story.AddChapter(dungeon);

	door.AddNextChapter(trap);
	door.AddNextChapter(house);
	door.AddNextChapter(dungeon);
	door.Select(window);

	//The Boss
	Enemy boss("Vampire", 10, "data/sprites/Vampire/2.png");
	//Boss fight
	Combat BossFight("data/sprites/Background/4.png",
		"You arrive in a boss fight", boss, 10, 10);
}
//Play the story
void Story::Draw(sf::RenderWindow& window) 
{
}
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
//Returns one "Dice" int between 1 and 6
int Story::DiceRoll()
{
	int dice = (1 + rand() % 6);
	return dice;
}
