#pragma once
#include "Graphics.h"

class GameOver {
public:
	GameOver();
	void draw(Graphics& gfx);
private:
	int x; 
	int y;
};