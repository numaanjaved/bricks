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
	static RectF fromCenter(const Vec2 center, float halfWidth, float halfHeight );
	bool isCollidingWith(const RectF& rect);
	RectF getExpanded(const float padding) const;
	Vec2 getCenter() const;
public:
	float left;
	float right;
	float top;
	float bottom;
};