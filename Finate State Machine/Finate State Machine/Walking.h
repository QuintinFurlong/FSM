#ifndef WALKING
#define WALKING

#include "Animation.h"

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(Animation* a)
	{
		std::cout << "Going from Walking to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

#endif // !WALKING

