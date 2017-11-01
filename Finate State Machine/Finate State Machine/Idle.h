#ifndef IDLE
#define IDLE

#include "State.h"
#include "Animation.h"

class Idle : public State
{
	Idle() {};
	~Idle() {};
	void jumping(Animation* a);
	void climbing(Animation* a);
};

#endif // !IDLE

