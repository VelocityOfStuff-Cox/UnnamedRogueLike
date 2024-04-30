#pragma once
#include <stdlib.h>

struct Console
{
	void pause() { system("PAUSE"); };
	void clear() { system("CLR"); };
};

struct Vector2D
{
	int x{ 0 };
	int y{ 0 };
};