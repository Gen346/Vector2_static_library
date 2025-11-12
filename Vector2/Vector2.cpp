#include "Vector2.h"

template <typename T>
void Vector2<T>::normalize()
{
	T length = sqrtf(mX * mX + mY * mY);

	if (length != 0.0f)
	{
		mX /= length;
		mY /= length;
	}
}

template <typename T>
T Vector2<T>::length() const
{
	return sqrtf(mX * mX + mY * mY);
}