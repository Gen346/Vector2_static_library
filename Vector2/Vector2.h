#pragma once 
#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>
#include <iostream>

struct Vector2
{
	Vector2() : mX(0), mY(0) {};
	Vector2(float mX, float mY) : mX(mX), mY(mY) {};

	float mX;
	float mY;

	inline Vector2 operator+(const Vector2& rhs) const // Addition
	{
		return { mX + rhs.mX, mY + rhs.mY };
	}

	inline Vector2 operator-(const Vector2& rhs) const // Subtraction
	{
		return { mX - rhs.mX, mY - rhs.mY };
	}

	inline Vector2 operator*(float scalar) const // Scalar multiplication Vector2 * scalar
	{
		return { mX * scalar, mY * scalar };
	}

	friend inline Vector2 operator*(float scalar, const Vector2& rhs) // Scalar multiplication scalar * Vector2
	{
		return { scalar * rhs.mX, scalar * rhs.mY };
	}
	inline float operator*(const Vector2& rhs) // Dot product
	{
		float dotP = mX * rhs.mX + mY * rhs.mY;

		return dotP;
	}

	inline bool operator==(const Vector2& rhs) const // Eqality
	{
		const float EPS = 1e-6f;

		return std::fabs(mX - rhs.mX) < EPS && std::fabs(mY - rhs.mY) < EPS;
	}

	friend inline std::ostream& operator<<(std::ostream& os, const Vector2& rhs) //Print Vector2
	{
		os << "(" << rhs.mX << ", " << rhs.mY << ")";
		return os;
	}

	void normalize();

	float length() const;

};

#endif // !VECTOR2_H
