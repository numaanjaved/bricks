#pragma once
#include "Graphics.h"

class Title {
public:
	static void draw(Graphics& gfx);
	static void drawB(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawR(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawI(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawC(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawK(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawS(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawP(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawE(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawN(Graphics& gfx, Vec2& initialPos,float fontSize);
	static void drawT(Graphics& gfx, Vec2& initialPos,float fontSize);
};