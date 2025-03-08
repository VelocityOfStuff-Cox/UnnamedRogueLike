#pragma once
#pragma once
#include <vector>
#include <string>
#include <map>
#include "Engine.h"
#include <string>

class Object
{
public:
	enum class Type { block, trap, enemy, player, numTypes};
	Object() = delete;
	Object(std::string sprite, Vector2D postion);
	Vector2D getPosition();

protected:
	
	Type name;
	std::string sprite;
	Vector2D position{};
};

