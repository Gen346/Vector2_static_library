#pragma once 
#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>
#include <iostream>

struct Vector2
{
	Vector2() : x(0), y(0) {};
	Vector2(float x, float y) : x(x), y(y) {};

	float x;
	float y;

	inline Vector2 operator+(const Vector2& rhs) const
	{
		return { x + rhs.x, y + rhs.y };
	}

	inline Vector2 operator-(const Vector2& rhs) const
	{
		return { x - rhs.x, y - rhs.y };
	}

	inline Vector2 operator*(float scalar) const
	{
		return { x * scalar, y * scalar };
	}

	friend inline Vector2 operator*(float scalar, const Vector2& rhs)
	{
		return { scalar * rhs.x, scalar * rhs.y };
	}

	inline bool operator==(const Vector2& rhs) const
	{
		const float EPS = 1e-6f;

		return std::fabs(x - rhs.x) < EPS && std::fabs(y - rhs.y) < EPS;
	}

	friend inline std::ostream& operator<<(std::ostream& os, const Vector2& rhs)
	{
		os << "(" << rhs.x << ", " << rhs.y << ")";
		return os;
	}

	void normalize()
	{
		float length = sqrtf(x * x + y * y);

		if (length != 0)
		{
			x / length;
			y / length;
		}
	}
	float length() const
	{
		return sqrtf(x * x + y * y);
	}
};

#endif // !VECTOR2_H
