#include "Strategy.h"
#include <string.h>


void planMovement(struct strategy* this)
{
	char currPlan[30] = "NONE";
	strcpy_s(this->plan,sizeof(currPlan), currPlan);
	printf("plan is: %s\n", this->plan);
}