#pragma once
#include "Object.h"

class Player : Object
{
public:
	Player() = delete;
	Player(std::string sprite, Vector2D postion);
	void move();
};

