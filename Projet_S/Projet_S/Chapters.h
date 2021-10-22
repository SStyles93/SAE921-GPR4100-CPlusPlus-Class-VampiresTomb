#pragma once
#include <map>
#include <string>

class Chapters
{
protected:
	std::map<int, std::string> chapters;
public:
	//Methods
	std::map<int, std::string> GetChapters();
};

