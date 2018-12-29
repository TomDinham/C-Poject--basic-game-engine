#include "stdafx.h"
#include "Game.h"
#include <time.h>
#include <iostream>
#include <windows.h>

Game::Game(int maxComponents)
{
	componentCount = 0;
	count = 5;
	this->components = new GameComponent*[maxComponents]();
}
void Game::SetInitialise(FP in)
{

	this->initalise = in;

}
void Game::SetTerminate(FP ter)
{
	this->terminate = ter;
}
void Game::Add(GameComponent* GC)
{
	if (componentCount < sizeof(this->components))
	{
		components[componentCount] = GC;
		componentCount++;
		
	}


}

Game::~Game()
{
}

void Game::Run()
{
	
	initalise();
	while (count > 0)
	{
		
		--count;
		for (int i = 0; i < componentCount; i++)
		{
			
			__time32_t timeNow;
			_time32(&timeNow);
			struct tm timer;
			char myTime[32];
			_localtime32_s(&timer, &timeNow);
			asctime_s(myTime, 32, &timer);
			
			this->components[i]->Update(&timer);
		}
		Sleep(TICKS_1000MS);
	}
	
	
		
		terminate();
}