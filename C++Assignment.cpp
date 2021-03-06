// C++Assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Game.h"
#include "GameComponent.h"
#include "DrawableGameComponent.h"
#include <time.h>

using namespace std;
void init()
{
	cout<< "Inisialising Game" << endl;
}
void term()
{
	cout<< "Termination Game" << endl;
}
int main()
{
	Game *myGame = new Game(10);
	GameComponent *g = new GameComponent();
	DrawableGameComponent *DG = new DrawableGameComponent(0,0);
	myGame->SetInitialise(init);
	myGame->SetTerminate(term);

	myGame->Add(g);
	myGame->Add(DG);

	myGame->Run();
	system("pause");
	
	
}