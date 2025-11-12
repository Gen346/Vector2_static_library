#pragma once 
#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>
#include <iostream>

template <typename T>
struct Vector2
{
	Vector2() : mX(0), mY(0) {};
	Vector2(T mX, T mY) : mX(mX), mY(mY) {};

	T mX;
	T mY;

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

	inline T operator*(const Vector2& rhs) // Dot product
	{
		T dotP = mX * rhs.mX + mY * rhs.mY;

		return dotP;
	}

	inline bool operator==(const Vector2& rhs) const // Equality
	{
		const float EPS = 1e-6f;

		return std::fabs(mX - rhs.mX) < EPS && std::fabs(mY - rhs.mY) < EPS;
	}
	inline bool operator!=(const Vector2& rhs) const // Not equal
	{
		const float EPS = 1e-6f;

		return std::fabs(mX - rhs.mX) > EPS && std::fabs(mY - rhs.mY) > EPS;
	}
	operator double() // Upcast to double
	{
		(double)mX;
		(double)mY;
		return mX, mY;
	}

	friend inline std::ostream& operator<<(std::ostream& os, const Vector2& rhs) //Print Vector2
	{
		os << "(" << rhs.mX << ", " << rhs.mY << ")";
		return os;
	}

	friend inline std::istream& operator>>(std::istream& is, Vector2& rhs) //Cin Vector2
	{
		is >> rhs.mX >> rhs.mY;
		return is;
	}

	void normalize();

	T length() const;

};

#endif // !VECTOR2_H
