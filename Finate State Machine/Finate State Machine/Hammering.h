#ifndef HAMMERING
#define HAMMERING

#include "Animation.h"

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation* a)
	{
		std::cout << "Going from Hammering to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

#endif // !HAMMERING
