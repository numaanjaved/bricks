#include "Brick.h"
#include "Graphics.h"

Brick::Brick(const RectF& rectInput, Color colorInput)
	:rect(rectInput), color(colorInput)
{}

void Brick::draw(Graphics & gfx) const
{
	gfx.DrawRect(rect, color);
}
