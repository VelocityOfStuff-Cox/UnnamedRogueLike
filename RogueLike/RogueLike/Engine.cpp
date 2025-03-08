#include "Engine.h"

void Vector2D::operator+=(Vector2D other)
{
	x += other.x;
	y += other.y;
}
