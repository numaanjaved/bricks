#pragma once
#include "Vec2.h"

class RectF {
public:
	RectF() = default;
	RectF(float leftInput, float topInput, float rightInput, float bottomInput);
	Vec2 getLeftTop() const;
	Vec2 getRightBottom() const;
	RectF(const Vec2& leftTopInput, const Vec2& rightBottomInput);
	RectF(const Vec2& leftTopInput, float width , float height);
	bool isCollidingWith(const RectF& rect);
public:
	float left;
	float right;
	float top;
	float bottom;
};