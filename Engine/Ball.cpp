#include "Ball.h"

Ball::Ball(const Vec2& posInput, const Vec2& dirInput, const Color colorInput):
	pos(posInput), color(colorInput)
{
	setDirection(dirInput);
}

void Ball::draw(Graphics & gfx) const
{
	gfx.DrawCircle(int (pos.x), int (pos.y), radius, color);
}

void Ball::update(float dt)
{
	pos += vel * dt;
}

int Ball::isCollidingWIthWall(const RectF& walls)
{
	bool isCollided = false;
	int result = 4;
	const RectF rect = getRect();
	if (rect.left <= walls.left) {
		pos.x = walls.left + radius;
		reboundX();
		isCollided = true;
		result = 0;
	}
	if (rect.right >= walls.right) {
		pos.x = walls.right - radius;
		reboundX();
		isCollided = true;
		result = 2;
	}
	if (rect.top <= walls.top) {
		pos.y = walls.top + radius;
		reboundY();
		isCollided = true;
		result = 1;
	}
	if (rect.bottom >= walls.bottom) {
		pos.y = walls.bottom - radius;
		reboundY();
		isCollided = true;
		result = 3;
	}
	return result;
}

RectF Ball::getRect() const
{
	return RectF::fromCenter(pos, radius, radius);
}

Vec2 Ball::getVelocity() const
{
	return vel;
}

Vec2 Ball::getPos() const
{
	return pos;
}

void Ball::reboundX()
{
	vel.x = -vel.x;
}

void Ball::reboundY()
{
	vel.y = -vel.y;
}

void Ball::setDirection(const Vec2& dir)
{
	vel = dir.getNormalized() * speed;
}
