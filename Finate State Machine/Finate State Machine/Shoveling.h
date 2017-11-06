#ifndef SHOVELING
#define SHOVELING

#include "Animation.h"

class Shoveling : public State
{
public:
	Shoveling() {};
	~Shoveling() {};
	void idle(Animation* a)
	{
		std::cout << "Going from Shoveling to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

#endif // !SHOVELING