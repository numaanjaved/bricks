#pragma once
#include "Colors.h"
#include "Graphics.h"
#include "Keyboard.h"

#include "RectF.h"
#include "Vec2.h"
#include "Ball.h"

class Paddle {
public:
	Paddle() = default;
	Paddle(Vec2 posInput, float halfWidthInput, float halfHeightInput);
	void draw(Graphics& gfx) const;
	bool isCollidingWithBall(Ball& ball);
	bool isCollidingWithWalls(const RectF& walls);
	void update(const Keyboard& kbd, float dt);
	RectF getRect() const;
	bool isCoolDown();
private:
	Color wingColor = Colors::Blue;
	Color color = Colors::White;
	float speed = 300.0f;
	static constexpr float wingWidth = 10.0f;
	float halfWidth;
	float halfHeight;
	Vec2 pos;
	bool coolDown = false;
};