#include "RectF.h"

RectF::RectF(float leftInput, float topInput, float rightInput, float bottomInput)
	: left(leftInput), top(topInput), right(rightInput), bottom(bottomInput)
{}

Vec2 RectF::getLeftTop() const
{
	return Vec2(left, top);
}

Vec2 RectF::getRightBottom() const
{
	return Vec2(right, bottom);
}

RectF::RectF(const Vec2& leftTopInput, const Vec2& rightBottomInput)
	:RectF(leftTopInput.x, leftTopInput.y, rightBottomInput.x, rightBottomInput.y)
{}

RectF::RectF(const Vec2 & leftTopInput, float width, float height)
	:RectF(leftTopInput, leftTopInput + Vec2(width, height))
{}

bool RectF::isCollidingWith(const RectF & rect)
{
	bool first = right > rect.left;
	bool second = left < rect.right;
	bool third = top < rect.bottom;
	bool fourth = bottom > rect.top;
	return first && second && third && fourth;
}
