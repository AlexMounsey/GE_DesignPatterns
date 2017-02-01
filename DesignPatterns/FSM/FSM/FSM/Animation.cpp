#include "stdafx.h"
#include "Animation.h"
#include "State.h"

Animation::Animation()
{
	current = new Idle();
}

void Animation::setCurrent(State * s)
{
	current = s;
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}


Animation::~Animation()
{
}