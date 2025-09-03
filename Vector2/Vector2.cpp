
#include "Vector2.h"


Vector2 Vector2::NormalizeVector(const Vector2& rhs) const
{
	float lenght = sqrtf(rhs.x * rhs.x + rhs.y * rhs.y);

	Vector2 normalizedVector;

	if (lenght != 0)
	{
		normalizedVector.x = rhs.x / lenght;
		normalizedVector.y = rhs.y / lenght;
	}
	else
	{
		normalizedVector.x = 0;
		normalizedVector.y = 0;
	}

	return normalizedVector;
}
