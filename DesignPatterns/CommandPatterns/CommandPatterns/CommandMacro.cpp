#include "CommandMacro.h"
#include <algorithm> 

CommandMacro::CommandMacro()
{
}

CommandMacro::~CommandMacro()
{

}

void CommandMacro::add(Command *c)
{
	commands.push_back(c);
}

void CommandMacro::remove(Command *c)
{
	commands.erase(std::remove(commands.begin(), commands.end(), c), commands.end());
}

void CommandMacro::execute()
{
	for (std::vector<Command*>::iterator i = commands.begin(); i != commands.end(); i++)
	{
		Command *c = *i;
		c->execute();
	}
}