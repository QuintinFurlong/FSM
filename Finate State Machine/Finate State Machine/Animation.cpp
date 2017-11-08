#include "Animation.h"

Animation::Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

void Animation::shoveling()
{
	current->shoveling(this);
}

void Animation::swordsmanship()
{
	current->swordsmanship(this);
}

void Animation::walking()
{
	current->walking(this);
}

void Animation::climbing()
{
	current->climbing(this);
}
