#ifndef ANIMATION
#define ANIMATION

#include "State.h"
#include "Idle.h"

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
	{ current = s; }
	void idle();
	void jumping();
	void hammering();
	void shoveling();
	void swordsmanship();
	void walking();
	void climbing();
};

#endif // !ANIMATION