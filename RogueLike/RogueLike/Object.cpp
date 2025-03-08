#include "Object.h"

Object::Object(std::string sprite, Vector2D postion)
	:sprite(sprite), position(position)
{
	name = Type::block;
}

Vector2D Object::getPosition()
{
	return position;
}
