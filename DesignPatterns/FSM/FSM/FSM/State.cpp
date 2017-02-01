#include "stdafx.h"
#include "State.h"
#include "Animation.h"

using namespace std;

State::State()
{
}


State::~State()
{
}

void State::idle(Animation * a)
{
	cout << "State::Idling" << endl;
}

void State::jumping(Animation * a)
{
	cout << "State::Jumping" << endl;
}

void State::climbing(Animation * a)
{
	cout << "State::Climbing" << endl;
}
void Climbing::idle(Animation * a)
{
	cout << "Going from Climbing to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::jumping(Animation* a)
{
	cout << "Going from Idling to Jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Jumping::idle(Animation * a)
{
	cout << "Going from Jumping to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::climbing(Animation* a)
{
	cout << "Going from Idling to Climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}

