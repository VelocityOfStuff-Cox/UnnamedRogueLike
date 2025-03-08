#include "Player.h"
#include <iostream>
Vector2D up{ 0,-1 };
Vector2D down{ 0,1 };
Vector2D left{ -1,0 };
Vector2D right{ 1,0 };

Player::Player(std::string sprite, Vector2D postion)
	: Object(sprite, postion)
{
	name = Type::player;
}

void Player::move()
{
	char movement{};
	std::cin >> movement;


	switch (movement)
	{
	case 'w':
		position += up;
		break;
	case 'a':
		position += left;
		break;
	case 's':
		position += down;
		break;
	case 'd':
		position += right;
		break;
	}
}
