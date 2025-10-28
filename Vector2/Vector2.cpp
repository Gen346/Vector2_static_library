#include "Vector2.h"

void Vector2::normalize()
{
	float length = sqrtf(mX * mX + mY * mY);

	if (length != 0.0f)
	{
		mX /= length;
		mY /= length;
	}
}

float Vector2::length() const
{
	return sqrtf(mX * mX + mY * mY);
}