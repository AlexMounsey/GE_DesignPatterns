#pragma once
#include <iostream>
class Command
{
public:
	 ~Command() { }
	virtual void execute() = 0;
protected:
	Command() { }
};
class JumpCommand : public Command
{

public:
	 void execute()
	{ 
		 std::cout << "Jumping" << std::endl;
	}
};
class CrouchCommand : public Command
{

public:
	 void execute()
	{
		std::cout << "Crouch" << std::endl;
	}
};
class LeftCommand : public Command
{

public:
	 void execute()
	{
		std::cout << "Move Left" << std::endl;
	}
};
class RightCommand : public Command
{

public:
	 void execute()
	{
		std::cout << "Move Right" << std::endl;
	}
};

class UndoCommand : public Command
{

public:
	 void execute()
	{
		std::cout << "Undo";
	}
};

