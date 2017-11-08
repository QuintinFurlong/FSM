#ifndef STATE
#define STATE

#include <iostream>
#include <SFML/Graphics.hpp>
class Animation;

class State
{
public:
	virtual void idle(Animation* a)
	{ std::cout << "State::Idling" << std::endl; }

	virtual void jumping(Animation* a)
	{ std::cout << "State::Jumping" << std::endl; }

	virtual void hammering(Animation* a)
	{ std::cout << "State::Hammering" << std::endl; }

	virtual void shoveling(Animation* a)
	{ std::cout << "State::Shoveling" << std::endl; }

	virtual void swordsmanship(Animation* a)
	{ std::cout << "State::Swordsmanship" << std::endl; }

	virtual void walking(Animation* a)
	{ std::cout << "State::Walking" << std::endl; }

	virtual void climbing(Animation* a)
	{ std::cout << "State::Climbing" << std::endl; }

};

#include "Animation.h"

#endif // !STATE

