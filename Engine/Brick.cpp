#include "Brick.h"
#include "Graphics.h"
#include <math.h>

Brick::Brick(const RectF& rectInput, Color colorInput)
	:rect(rectInput), color(colorInput)
{}

void Brick::draw(Graphics & gfx) const
{
	if (destroyed == false) {
		gfx.DrawRect(rect.getExpanded(padding), color);
	}	
}

bool Brick::isCollidingWithBall(Ball& ball)
{
	return destroyed == false && rect.isCollidingWith(ball.getRect());
}

void Brick::executeCollisionWithBall(Ball& ball)
{
	Vec2 ballPos = ball.getPos();
	if (signbit(ball.getVelocity().x) == signbit((ballPos - getCenter()).x)) {
		ball.reboundY();
	}
	else if (ballPos.x >= rect.left && ballPos.x <= rect.right) {
		ball.reboundY();
	}
	else {
		ball.reboundX();
	}
	destroyed = true;
}

Vec2 Brick::getCenter() const
{
	return rect.getCenter();
}
