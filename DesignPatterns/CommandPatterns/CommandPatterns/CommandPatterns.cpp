// CommandPatterns.cpp : Defines the entry point for the console application.

#include "SDL.h"
#include <iostream>
#include "InputHandler.h"
#include "CommandMacro.h"

using namespace std;

int main(int argc, char* argv[])
{
	bool running = true;      

	SDL_Window *window;               
	window = SDL_CreateWindow("Command Pattern", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 800, SDL_WINDOW_SHOWN);

	
	if (window == NULL)
	{
		printf("Could not create window: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Renderer* renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	InputHandler inputHandler;
	CommandMacro macro;
	inputHandler.Bind();
	while (running)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_KEYDOWN:
				inputHandler.handleInput(event);
				break;
			default:
				break;
			}
		}
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}