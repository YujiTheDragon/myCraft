#pragma once
#include "Player.h"

struct strategy
{
	char plan[30];
	void(*planMove)(struct strategy*);
};

void planMovement(struct strategy*);