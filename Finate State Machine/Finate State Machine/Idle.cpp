#include "Idle.h"

void Idle::hammering(Animation * a)
{
	std::cout << "Hammering" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::jumping(Animation * a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::shoveling(Animation * a)
{
	std::cout << "Shoveling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::swordsmanship(Animation * a)
{
	std::cout << "Swordsmanship" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation * a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}