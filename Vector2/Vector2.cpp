#include "Vector2.h"

void Vector2::normalize()
{
	float length = sqrtf(x * x + y * y);

	if (length != 0.0f)
	{
		x /= length;
		y /= length;
	}
}

float Vector2::length() const
{
	return sqrtf(x * x + y * y);
}