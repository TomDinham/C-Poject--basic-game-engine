#pragma once
#include "stdafx.h"
#include <iostream>
#include "GameComponent.h"

using namespace std;
typedef void(*FP)();
class Game
{
private:
	FP initalise;
	FP terminate;
	int componentCount;
	int count;
	GameComponent** components;
	const int TICKS_1000MS = 1000;
public:
	//Game();
	Game(int maxComponents);
	~Game();
	void Run();
	void Add(GameComponent*);
	void SetInitialise(FP init);
	void SetTerminate(FP term);
};


