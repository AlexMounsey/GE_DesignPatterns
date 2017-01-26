#pragma once

#include "Command.h"
#include "SDL.h"
#include <iostream>

class InputHandler
{
public:
	void handleInput(SDL_Event & event);
	void Bind();
private:
	Command* jump_;
	Command* moveLeft_;
	Command* Crouch_;
	Command* moveRight_;

	Command* undo_;

};
void  InputHandler::Bind()
{
	jump_ = new JumpCommand;
	moveLeft_ = new LeftCommand;
	Crouch_ = new CrouchCommand;
	moveRight_ = new RightCommand;;
	undo_ = new UndoCommand;
}
void InputHandler::handleInput(SDL_Event & evt)
{
	if (evt.key.keysym.sym == SDLK_w || evt.key.keysym.sym == SDLK_UP || evt.key.keysym.sym == SDLK_SPACE)
	{
		jump_->execute();
	}

	if (evt.key.keysym.sym == SDLK_a || evt.key.keysym.sym == SDLK_LEFT)
	{
		moveLeft_->execute();
	}

	if (evt.key.keysym.sym == SDLK_d || evt.key.keysym.sym == SDLK_RIGHT)
	{
		moveRight_->execute();
	}

	if (evt.key.keysym.sym == SDLK_s || evt.key.keysym.sym == SDLK_DOWN)
	{
		Crouch_->execute();
	}

	if (evt.key.keysym.sym == SDLK_BACKSPACE)
	{
		undo_->execute();
	}
}