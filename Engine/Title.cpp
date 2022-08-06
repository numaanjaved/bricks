#include "Title.h"

void Title::draw(Graphics& gfx)
{
	drawB(gfx, Vec2(200, 200), 5.0);
	drawR(gfx, Vec2(280, 200), 5.0);
	drawI(gfx, Vec2(360, 200), 5.0);
	drawC(gfx, Vec2(380, 200), 5.0);
	drawK(gfx, Vec2(450, 200), 5.0);
	drawS(gfx, Vec2(530, 200), 5.0);

	Vec2 instructionPos(280, 360);
	drawP(gfx, instructionPos + Vec2(00, 00), 1.0);
	drawR(gfx, instructionPos + Vec2(20, 00), 1.0);
	drawE(gfx, instructionPos + Vec2(40, 00), 1.0);
	drawS(gfx, instructionPos + Vec2(60, 00), 1.0);
	drawS(gfx, instructionPos + Vec2(80, 00), 1.0);
	drawE(gfx, instructionPos + Vec2(120, 00), 1.0);
	drawN(gfx, instructionPos + Vec2(140, 00), 1.0);
	drawT(gfx, instructionPos + Vec2(160, 00), 1.0);
	drawE(gfx, instructionPos + Vec2(180, 00), 1.0);
	drawR(gfx, instructionPos + Vec2(200, 00), 1.0);
}

void Title::drawB(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 00.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 9.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 18.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 00.0f * fontSize), 2.0f * fontSize, 9.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 11.0f * fontSize), 2.0f * fontSize, 9.0f * fontSize), Colors::Red);
}

void Title::drawR(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 00.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 9.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 00.0f * fontSize), 2.0f * fontSize, 9.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(10.0f * fontSize, 10.0f * fontSize), 2.0f * fontSize, 5.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 15.0f * fontSize), 2.0f * fontSize, 5.0f * fontSize), Colors::Red);
}

void Title::drawI(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);
}

void Title::drawC(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 00.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 18.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
}

void Title::drawK(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(02.0f * fontSize, 09.0f * fontSize), 10.0f * fontSize, 02.0f * fontSize), Colors::Red);
	
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 00.0f * fontSize), 02.0f * fontSize, 05.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(10.0f * fontSize, 05.0f * fontSize), 02.0f * fontSize, 05.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(10.0f * fontSize, 10.0f * fontSize), 02.0f * fontSize, 05.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 15.0f * fontSize), 02.0f * fontSize, 05.0f * fontSize), Colors::Red);
}

void Title::drawS(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 02.0f * fontSize, 11.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(02.0f * fontSize, 00.0f * fontSize), 12.0f * fontSize, 02.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(02.0f * fontSize, 09.0f * fontSize), 10.0f * fontSize, 02.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(00.0f * fontSize, 18.0f * fontSize), 12.0f * fontSize, 02.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 09.0f * fontSize), 02.0f * fontSize, 11.0f * fontSize), Colors::Red);
}

void Title::drawP(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 00.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 9.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 00.0f * fontSize), 2.0f * fontSize, 9.0f * fontSize), Colors::Red);
}

void Title::drawE(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);

	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 00.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 9.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(2.0f * fontSize, 18.0f * fontSize), 10.0f * fontSize, 2.0f * fontSize), Colors::Red);
}

void Title::drawN(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 2.0f * fontSize, 20.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(02.0f * fontSize, 00.0f * fontSize), 02.0f * fontSize, 04.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(04.0f * fontSize, 04.0f * fontSize), 02.0f * fontSize, 04.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(06.0f * fontSize, 08.0f * fontSize), 02.0f * fontSize, 04.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(08.0f * fontSize, 12.0f * fontSize), 02.0f * fontSize, 04.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(10.0f * fontSize, 16.0f * fontSize), 02.0f * fontSize, 04.0f * fontSize), Colors::Red);
	
	gfx.DrawRect(RectF(initialPos + Vec2(12.0f * fontSize, 00.0f * fontSize), 02.0f * fontSize, 20.0f * fontSize), Colors::Red);
}

void Title::drawT(Graphics& gfx, Vec2& initialPos, float fontSize)
{
	gfx.DrawRect(RectF(initialPos, 12.0f * fontSize, 2.0f * fontSize), Colors::Red);
	gfx.DrawRect(RectF(initialPos + Vec2(05.0f * fontSize, 02.0f * fontSize), 2.0f * fontSize, 18.0f * fontSize), Colors::Red);
}


