#include "stdafx.h"
#include "GameComponent.h"


GameComponent::GameComponent()
{
	
	this->id = instances;
	instances++;
}

GameComponent::~GameComponent()
{
}

void GameComponent::Update(const tm* time)
{
	cout << "ID: "<< this->id <<" Updating at: " << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;
}
int GameComponent::instances = 1;