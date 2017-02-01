#include "stdafx.h"
#include "State.h"
#include "Animation.h"
#include <thread>
#include <chrono>


int main() {
	Animation fsm;
	int i = 0;
	int j = 0;

	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 2;
		}
		else if (i == 1)
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 2;
		}
		else
		{
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			if (j == 0)
			{
				i = 1;
				j++;
			}
			else
			{
				i = 0;
				j = 0;
			}

		}
	}
}
