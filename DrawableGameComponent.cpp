#include <iostream>
#include "stdafx.h"
#include "DrawableGameComponent.h"

using namespace std;


void  DrawableGameComponent::Update(const tm* eventTime)
{
	
	GameComponent::Update(eventTime);
	
	switch (this->direction)
	{
	case Right: this->x+=1;
		break;
	case Left: this->x-=1;
		break;
	case Up: this->y+=1;
		break;
	case Down: this->y-=1;
		break;
	defult: cout << "No Direction" << endl;
		break;
	}
	Draw();
	ChangeDirection();
}
void DrawableGameComponent::Draw()
{
	switch (direction)
	{
	case Right: cout<< "Right ";
		break;
	case Left: cout << "Left ";
		break;
	case Up: cout << "Up ";
		break;
	case Down: cout << "Down ";
		break;
	defult: cout << "No Direction" << endl;
		break;
	}
	cout << " : " << "X: " << this->x << " Y: " << this->y << endl;
}
void DrawableGameComponent::ChangeDirection()
{

	Direction prev = this->direction;
	//direction = Direction(rand() % 3+1);
	Direction random = Direction(rand() % 4);
	direction = random;
	if (direction == prev)
	{
		Direction random = Direction(rand() % 4);
		direction = random;
	}
}