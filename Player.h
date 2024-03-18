#pragma once
#include <stdio.h>
#include "Material.h"
#include "Strategy.h"

 struct Player
{
	struct strategy* strat;
	int step;
	void(*simStep)(struct Player*);
	 
};
void SimulateStep(struct Player*);