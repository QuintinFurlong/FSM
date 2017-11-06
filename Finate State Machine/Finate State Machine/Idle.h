#ifndef IDLE
#define IDLE

#include "State.h"
class Animation;

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void hammering(Animation* a);
	void jumping(Animation* a);
	void shoveling(Animation* a);
	void swordsmanship(Animation* a);
	void walking(Animation* a);
};

#include "Animation.h"

#endif // !IDLE

