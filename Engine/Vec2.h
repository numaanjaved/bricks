#pragma once

class Vec2 {
public:
	Vec2() = default;
	Vec2( float xInput, float yInput);
	Vec2 operator+(const Vec2& rhs) const;
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator-(const Vec2& rhs) const;
	Vec2& operator-=(const Vec2& rhs);
	Vec2 operator*(const Vec2& rhs) const;
	Vec2& operator*=(const Vec2& rhs);
	Vec2 operator*(const float rhs) const;
	Vec2 getNormalized() const;
	Vec2 normalize();
	float getLengthSq() const;
	float getLength() const;
	
public:
	float x;
	float y;
};
