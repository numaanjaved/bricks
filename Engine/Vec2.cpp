#include "Vec2.h"
#include <cmath>

Vec2::Vec2(float xInput, float yInput) : x(xInput), y(yInput)
{}

Vec2 Vec2::operator+(const Vec2& rhs) const
{
	return Vec2(x + rhs.x, y + rhs.y);
}

Vec2& Vec2::operator+=(const Vec2& rhs)
{
	return *this = *this + rhs;
}

Vec2 Vec2::operator-(const Vec2& rhs) const
{
	return Vec2(x - rhs.x, y - rhs.y);
}

Vec2& Vec2::operator-=(const Vec2& rhs)
{
	return *this = *this - rhs;
}

Vec2 Vec2::operator*(const Vec2& rhs) const
{
	return Vec2(x * rhs.x, y * rhs.y);
}

Vec2& Vec2::operator*=(const Vec2& rhs)
{
	return *this = *this * rhs;
}

Vec2 Vec2::operator*(const float rhs) const
{
	return Vec2( x * rhs, y * rhs);
}

Vec2 Vec2::getNormalized() const
{
	float len = getLength();
	if (len != 0) {
		return *this * (1 / len);
	}
	return *this;
}

Vec2 Vec2::normalize()
{
	return *this = getNormalized();
}

float Vec2::getLengthSq() const
{
	return x * x + y * y;
}

float Vec2::getLength() const
{
	return std::sqrt(getLengthSq());
}
