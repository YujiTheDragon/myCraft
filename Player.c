#include "Player.h"


void SimulateStep(struct Player* this)
{
	this->step++;
	printf("step = %d\n", this->step);
}