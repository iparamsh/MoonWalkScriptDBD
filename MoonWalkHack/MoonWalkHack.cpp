// MoonWalkHack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
	int delay = 130;
	std::cout << "if you want more hack join our discord: https://discord.gg/C8sMqTRkDM | MADE BY Olivi" << std::endl;

	while (true) 
	{
		if (GetAsyncKeyState(0x05))
		{
			keybd_event(0x41, 0, 0x0001, 0);
			Sleep(delay);
			keybd_event(0x41, 0, 0x0002, 0);
			Sleep(1);
			keybd_event(0x44, 0, 0x0001, 0);
			Sleep(delay);
			keybd_event(0x44, 0, 0x0002, 0);
		}

		if (GetAsyncKeyState(VK_END) & 1) 
		{
			delay += 5;
			std::cout << "current delay is: " << delay << std::endl;
		}

		if (GetAsyncKeyState(VK_INSERT) & 1) 
		{
			delay = delay - 5;
			std::cout << "current delay is: " << delay << std::endl;
		}
		if (GetAsyncKeyState(0x04) & 1)
		{
			delay = 130;
			std::cout << "delay set to deafult" << std::endl;
		}
	}
	return 0;
}


