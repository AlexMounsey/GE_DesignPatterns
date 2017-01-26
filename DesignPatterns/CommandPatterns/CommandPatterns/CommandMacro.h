#pragma once
#include "Command.h"
#include <vector>

class CommandMacro : public Command
{
public:
	CommandMacro();
	virtual ~CommandMacro();
	virtual void add(Command*);
	virtual void remove(Command*);
	virtual void execute();
private:
	std::vector<Command*> commands;
};
