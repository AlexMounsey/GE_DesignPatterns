#pragma once

class State;

class Animation
{
private:
	State* current;
public:
	Animation();
	~Animation();
	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
};
