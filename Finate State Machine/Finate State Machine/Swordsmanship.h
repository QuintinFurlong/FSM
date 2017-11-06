#ifndef SWORDSMANSHIP
#define SWORDSMANSHIP

#include "Animation.h"

class Swordsmanship : public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};
	void idle(Animation* a)
	{
		std::cout << "Going from Swordsmanship to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

#endif // !SWORDSMANSHIP