/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	ball(Vec2(400.0f, 300.0f), Vec2(-200.0f, -200.0f), Colors::Red),
	walls(10.0f, 10.0f, float(Graphics::ScreenWidth) - 10.0f, float(Graphics::ScreenHeight) - 10.0f),
	pedal(Vec2(500.0f, 500.0f), 50.0f, 10.0f)
{
	Color colorsOfBrick[noOfRows] = { Colors::Yellow, Colors::Green, Colors::Magenta, Colors::Cyan };
	Vec2 start(brickWidth, brickWidth);
	for (int i = 0; i < noOfCols; ++i) {
		for (int j = 0; j < noOfRows; ++j) {
			const float rowStartPoint = brickWidth * i;
			const float colStartPoint = brickHeight * j;
			Vec2 gridStart(rowStartPoint, colStartPoint);
			brk[j][i] = Brick(RectF(start + gridStart, brickWidth, brickHeight), colorsOfBrick[j]);
		}
		
	}
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	float dt = ft.mark();
	if (ball.isCollidingWIthWall(walls) == 3) {
		gameOver = true;
	}
	else {
		pedal.isCoolDown();
	}
	ball.update(dt);
	int indexRowBrk;
	int indexColBrk;
	float distCenterBrick;
	bool collisionDetected = false;
	for (int i = 0; i < noOfCols; ++i) {
		for (int j = 0; j < noOfRows; ++j) {
			if (brk[j][i].isCollidingWithBall(ball)) {
				
				const float newDistCenterBrick = (ball.getPos() - brk[j][i].getCenter()).getLengthSq();
				if (collisionDetected == true) {
					if (newDistCenterBrick < distCenterBrick) {
						distCenterBrick = newDistCenterBrick;
						indexRowBrk = j;
						indexColBrk = i;
					}
				}
				else {
					distCenterBrick = newDistCenterBrick;
					indexRowBrk = j;
					indexColBrk = i;
					collisionDetected = true;
				}
			}
		}
	}
	if (collisionDetected == true) {
		pedal.isCoolDown();
		brk[indexRowBrk][indexColBrk].executeCollisionWithBall(ball);
	}
	
	pedal.isCollidingWithWalls(walls);
	pedal.isCollidingWithBall(ball);
	pedal.update(wnd.kbd, dt);
}

void Game::ComposeFrame()
{
	if (isStarted == false) {
		Title::draw(gfx);
	}
	if (isStarted == true && gameOver == false) {
		ball.draw(gfx);
		for (int i = 0; i < noOfCols; ++i) {
			for (int j = 0; j < noOfRows; ++j) {
				brk[j][i].draw(gfx);
			}
		}
		pedal.draw(gfx);
	}
	
	
}
