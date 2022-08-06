#include "Title.h"

void Title::draw(Graphics& gfx)
{
	for (int i = 0; i < 20; ++i) {
		gfx.PutPixel(i, 300, Colors::Red);
	}
}
