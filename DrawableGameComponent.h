#pragma once
#include "stdafx.h"
#include "GameComponent.h"
#include <iostream>
#include <time.h>
using namespace std;
enum Direction { Left, Right, Up, Down };
class DrawableGameComponent : public GameComponent
{
private:
	void ChangeDirection();
	void Draw();
	int x, y;
public:

	DrawableGameComponent() {};
	DrawableGameComponent(int x, int y) :x(x), y(y) { direction = Right; };
	~DrawableGameComponent() {};
	void Update(const tm* eventTime);
	Direction direction;
	const int SCREEN_HEIGHT = 600;
	const int SCREEN_WIDTH = 800;
};
