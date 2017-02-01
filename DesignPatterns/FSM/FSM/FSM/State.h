#pragma once
#include <iostream>

using namespace std;

class Animation;

class State
{
public:
	State();
	~State();

	virtual void idle(Animation* a);
	virtual void jumping(Animation* a);
	virtual void climbing(Animation* a);
};


class Idle : public State
{
public:
	Idle() {  };
	~Idle() {  };
	void jumping(Animation* a);
	void climbing(Animation* a);
};

class Jumping : public State
{
public:
	Jumping() {  };
	~Jumping() {  };
	void idle(Animation* a);
};

class Climbing : public State
{
public:
	Climbing() {  };
	~Climbing() {  };
	void idle(Animation* a);
};