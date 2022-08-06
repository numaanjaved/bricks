#include "Paddle.h"

Paddle::Paddle(Vec2 posInput, float halfWidthInput, float halfHeightInput)
	:pos(posInput), halfWidth(halfWidthInput), halfHeight(halfHeightInput)
{}

void Paddle::draw(Graphics & gfx) const
{
	RectF rect = getRect();
	gfx.DrawRect(rect, wingColor);
	rect.left += wingWidth;
	rect.right -= wingWidth;
	gfx.DrawRect(rect, color);
}

bool Paddle::isCollidingWithBall(Ball& ball)
{
	if (coolDown == false) {
		RectF rect = getRect();
		if (ball.getVelocity().y > 0.0f && rect.isCollidingWith(ball.getRect())) {
			Vec2 ballPos = ball.getPos();
			if (signbit(ball.getVelocity().x) == signbit((ballPos - pos).x)) {
				ball.reboundY();
			}
			else if (ballPos.x >= rect.left && ballPos.x <= rect.right) {
				ball.reboundY();
			}
			else {
				ball.reboundX();
			}
			coolDown = true;
			return true;
		}
		return false;
	}
}

bool Paddle::isCollidingWithWalls(const RectF& walls)
{
	bool isCollided = false;
	if (getRect().left < walls.left) {
		pos.x = walls.left + halfWidth;
		isCollided = true;
	}
	else if (getRect().right > walls.right) {
		pos.x = walls.right - halfWidth;
		isCollided = true;
	}
	return isCollided;
}

void Paddle::update(const Keyboard& kbd, float dt)
{
	if (kbd.KeyIsPressed(VK_LEFT)) {
		pos.x -= speed * dt;
	}
	if (kbd.KeyIsPressed(VK_RIGHT)) {
		pos.x += speed * dt;
	}
}

RectF Paddle::getRect() const
{
	return RectF::fromCenter(pos,halfWidth,halfHeight);
}

bool Paddle::isCoolDown()
{
	return coolDown = false;
}
