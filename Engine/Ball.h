#pragma once
#include "Graphics.h"
#include "Vec2.h"

class Ball {
public:
	Ball(const Vec2& posInput, const Vec2& velInput, const Color colorInput);
	void draw(Graphics& gfx) const;
	void update(float dt);
	int isCollidingWIthWall(const RectF& rect);
	RectF getRect() const;
	Vec2 getVelocity() const;
	Vec2 getPos() const;
	void reboundX();
	void reboundY();
	void setDirection(const Vec2& dir);
private:
	static constexpr float radius = 7.0f;
	float speed = 200.0f;
	Vec2 pos;
	Vec2 vel;
	Color color;
};