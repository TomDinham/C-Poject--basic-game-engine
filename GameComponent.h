#pragma once
#include "stdafx.h"
#include <time.h>
#include <iostream>
using namespace std;
class GameComponent
{
private:
	int id;
   static int instances;
public:
	virtual void Update(const tm*);
	GameComponent();
	~GameComponent();
};


