#pragma once
#include <vector>

#include "Chapter.h"
class Selection : public Chapter
{
protected:
	std::vector<Chapter> chapters_;
	
public:
	Selection(const std::string& name);
	void Select();
	
	
};

