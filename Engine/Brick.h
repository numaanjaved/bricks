#pragma once
#include "RectF.h"
#include "Colors.h"
#include "Graphics.h"
#include "Ball.h"

class Brick {
public:
	Brick() = default;
	Brick(const RectF& rectInput, Color colorInput);
	void draw(Graphics& gfx) const;
	bool isCollidingWithBall(Ball& ball);
	void executeCollisionWithBall(Ball& ball);
	Vec2 getCenter() const;
private:
	static constexpr float padding = -1.5f;
	RectF rect;
	Color color;
	bool destroyed = false;
};